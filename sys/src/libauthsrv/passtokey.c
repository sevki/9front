#include <u.h>
#include <libc.h>
#include <authsrv.h>
#include <libsec.h>

static void
passtodeskey(char *key, char *p)
{
	uchar buf[ANAMELEN], *t;
	int i, n;

	n = strlen(p);
	if(n >= ANAMELEN)
		n = ANAMELEN-1;
	memset(buf, ' ', 8);
	t = buf;
	strncpy((char*)t, p, n);
	t[n] = 0;
	memset(key, 0, DESKEYLEN);
	for(;;){
		for(i = 0; i < DESKEYLEN; i++)
			key[i] = (t[i] >> i) + (t[i+1] << (8 - (i+1)));
		if(n <= 8)
			return;
		n -= 8;
		t += 8;
		if(n < 8){
			t -= 8 - n;
			n = 8;
		}
		encrypt(key, t, 8);
	}
}

static void
passtoaeskey(uchar *key, char *p)
{
	static char salt[] = "Plan 9 key derivation";
	pbkdf2_hmac_sha1((uchar*)p, strlen(p), (uchar*)salt, sizeof(salt)-1, 9001, key, AESKEYLEN);
}

void
passtokey(Authkey *key, char *p)
{
	memset(key, 0, sizeof(Authkey));
	passtodeskey(key->des, p);
	passtoaeskey(key->aes, p);
}
