void	accessdir(Iobuf*, Dentry*, int, int);
void	addfree(Device*, Off, Superb*);
void	arpstart(void);
void	arginit(void);
char*	authaname(Auth*);
void	authinit(void);
void	authfree(Auth*);
Auth*	authnew(char*, char*);
int	authread(File*, uchar*, int);
int	authuid(Auth*);
char*	authuname(Auth*);
int	authwrite(File*, uchar*, int);
void	cdiag(char*, int);
int	cnumb(void);
Device*	config(void);
int	rawchar(int);
Off	bufalloc(Device*, int, long, int);
void	buffree(Device*, Off, int, Truncstate *);
int	byuid(void*, void*);
int	canlock(Lock*);
int	canqlock(QLock*);
void	cfsdump(Filsys*);
void	chanhangup(Chan *cp, char *msg, int dolock);
Chan*	fs_chaninit(int, int, int);
void	cmd_check(int, char*[]);
void	cmd_users(int, char*[]);
void	cmd_newuser(int, char*[]);
void	cmd_netdb(int, char*[]);
void	cmd_printconf(int, char*[]);
void	cmd_wormreset(int, char *[]);
int	checkname(char*);
int	checktag(Iobuf*, int, Off);
int	cksum(void*, int, int);
int	cksum0(int, int);
void	cyclstart(void);
void	dotrace(int);
int	conschar(void);
void	consinit(void (*)(char*, int));
void	consstart(int);
void	consserve(void);
int	conslock(void);
int	con_attach(int, char*, char*);
int	con_clone(int, int);
int	con_create(int, char*, int, int, long, int);
int	con_clri(int);
int	con_fstat(int);
int	con_open(int, int);
int	con_read(int, char*, Off, int);
int	con_remove(int);
int	con_session(void);
int	con_walk(int, char*);
int	con_write(int, char*, Off, int);
int	cwgrow(Device*, Superb*, int);
int	cwfree(Device*, Off);
void	cwinit(Device*);
Off	cwraddr(Device*);
int	cwread(Device*, Off, void*);
void	cwream(Device*);
void	cwrecover(Device*);
Off	cwsaddr(Device*);
Devsize	cwsize(Device*);
int	cwwrite(Device*, Off, void*);
char*	dataof(char *file);
void	datestr(char*, Timet);
Off	dbufread(Iobuf*, Dentry*, Off, Off, int);
void	delay(int);
Filsys* dev2fs(Device *dev);
int	devcmpr(Device*, Device*);
void	devream(Device*, int);
void	devrecover(Device*);
void	devinit(Device*);
int	devread(Device*, Off, void*);
Devsize	devsize(Device*);
int	devwrite(Device*, Off, void*);
Iobuf*	dnodebuf(Iobuf*, Dentry*, Off, int, int);
Iobuf*	dnodebuf1(Iobuf*, Dentry*, Off, int, int);
int	doremove(File*, int);
void	dtrunc(Iobuf*, Dentry*, int);
int	dtrunclen(Iobuf *p, Dentry *, Off newsize, int uid);
int	dumpblock(Device*);
void	netinit(void);
void	netstart(void);
void	exit(void);
void	fileinit(Chan*);
File*	filep(Chan*, ulong, int);
void	firmware(void);
int	fname(char*);
int	fpair(char*, char*);
void	formatinit(void);
int	fread(void*, int);
void	freefp(File*);
void	freewp(Wpath*);
Filsys*	fsstr(char*);
Devsize	fwormsize(Device*);
void	fwormream(Device*);
void	fworminit(Device*);
int	fwormread(Device*, Off, void*);
int	fwormwrite(Device*, Off, void*);
char*	getauthlist(void);
Iobuf*	getbuf(Device*, Off, int);
char*	getwrd(char*, char*);
int	getc(void);
Dentry*	getdir(Iobuf*, int);
Chan*	getlcp(uchar*, long);
Off	getraddr(Device*);
void	hexdump(void*, int);
int	iaccess(File*, Dentry*, int);
void*	ialloc(ulong, int);
Off	ibbpow(int);
Off	ibbpowsum(int);
Device*	iconfig(char *);
Off	indfetch(Device*, Off, Off, Off , int, int, int);
int	ingroup(int, int);
int	inh(int, uchar*);
Devsize	inqsize(char *file);
void	iobufinit(void);
void*	iobufmap(Iobuf*);
void	iobufunmap(Iobuf*);
int	iobufql(QLock*);
int	jukeread(Device*, Off, void*);
int	jukewrite(Device*, Off, void*);
void	jukeinit(Device*);
void	jukeream(Device*);
void	jukerecover(Device*);
Off	jukesaddr(Device*);
Devsize	jukesize(Device*);
void	kbdchar(int);
void	lights(int, int);
void	launchinit(void);
void	localconfinit(void);
int	leadgroup(int, int);
void	lock(Lock*);
void	lockinit(void);
void	machinit(void);
Msgbuf*	mballoc(int, Chan*, int);
void	mbinit(void);
void	mbfree(Msgbuf*);
ulong	meminit(void);
Iobuf*	movebuf(Iobuf*);
void	mcatinit(Device*);
int	mcatread(Device*, Off, void*);
Devsize	mcatsize(Device*);
int	mcatwrite(Device*, Off, void*);
void	mirrinit(Device*);
int	mirrread(Device*, Off, void*);
Devsize	mirrsize(Device*);
int	mirrwrite(Device*, Off, void*);
void	mkqid(Qid*, Dentry*, int);
int	mkqidcmp(Qid*, Dentry*);
void	mkqid9p1(Qid9p1*, Qid*);
void	mkqid9p2(Qid*, Qid9p1*, int);
void	mlevinit(Device*);
int	mlevread(Device*, Off, void*);
Devsize	mlevsize(Device*);
int	mlevwrite(Device*, Off, void*);
int	nametokey(char*, char*);
File*	newfp(void);
void	newscsi(Device *d, Scsi *sc);
Queue*	newqueue(int, char*);
void	newstart(void);
Wpath*	newwp(void);
Auth*	newauth(void);
int	nvrcheck(void);
char*	nvrgetconfig(void);
int	nvrsetconfig(char*);
int	walkto(char*);
vlong	number(char*, int, int);
int	okay(char *quest);
void	online(void);
void	panic(char*, ...);
void	partinit(Device*);
int	partread(Device*, Off, void*);
Devsize	partsize(Device*);
int	partwrite(Device*, Off, void*);
void	prdate(void);
void	preread(Device*, Off);
void	prflush(void);
int	prime(vlong);
void	printinit(void);
void	procinit(void);
void	procsetname(char *fmt, ...);
void	putbuf(Iobuf*);
void	putstrn(char *str, int n);
Off	qidpathgen(Device*);
void	qlock(QLock*);
void*	querychanger(Device *);
void	qunlock(QLock*);
void	rahead(void *);
void	ream(Filsys*);
void*	fs_recv(Queue*, int);
void	rootream(Device*, Off);
int	roread(Device*, Off, void*);
void	rstate(Chan*, int);
Timet	rtc2sec(Rtc *);
void	sched(void);
void	schedinit(void);
int	scsiio(Device*, int, uchar*, int, void*, int);
void	scsiinit(void);
Off	scsiread(int, void*, long);
Devsize	scsiseek(int, Devsize);
Off	scsiwrite(int, void*, long);
char*	sdof(Device*);
void	sec2rtc(Timet, Rtc *);
void	fs_send(Queue*, void*);
void	serve(void *);
int	serve9p1(Msgbuf*);
int	serve9p2(Msgbuf*);
void	settag(Iobuf*, int, long);
void	settime(Timet);
void	startprint(void);
int	strtouid(char*);
Off	superaddr(Device*);
void	superream(Device*, Off);
void	swab(void*, int);
void	swab2(void *c);
void	swab8(void *c);
void	sync(char*);
int	syncblock(void);
void	sysinit(void);
int	testconfig(char *s);
int	Tfmt(Fmt*);
Timet	nextime(Timet, int, int);
Tlock*	tlocked(Iobuf*, Dentry*);
Timet	toytime(void);
Timet	rtctime(void);
void	setrtc(Timet);
void	uidtostr(char*, int, int);
Uid*	uidpstr(char*);
void	unlock(Lock*);
void	newproc(void(*)(void *), void*, char*);
void	wormcopy(void *);
void	wormprobe(void);
void	synccopy(void *);
long	wormsearch(Device*, int, long, long);
int	wormread(Device*, Off, void*);
Devsize	wormsize(Device*);
Devsize	wormsizeside(Device *, int side);
void	wormsidestarts(Device *dev, int side, Sidestarts *stp);
int	wormwrite(Device*, Off, void*);
void	wreninit(Device*);
int	wrenread(Device*, Off, void*);
Devsize	wrensize(Device*);
int	wrenwrite(Device*, Off, void*);
void	cmd_exec(char*);
void	cmd_install(char*, char*, void (*)(int, char*[]));
ulong	flag_install(char*, char*);
void	srvinit(void);
Chan	*srvchan(int, char *);

