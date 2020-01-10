#define UART_BASE 0xFFC02000
#define MPCORE_BASE 0xFFFEC000
#define L2_BASE 0xFFFEF000
#define CLOCKMGR_BASE 0xFFD04000
#define EMAC1_BASE 0xFF702000
#define RESETMGR_BASE 0xFFD05000
#define SYSMGR_BASE 0xFFD08000
#define OCRAM 0xFFFF0000

/*RESETMGR*/
#define PERMODRST (0x14/4)
/*SYSMGR*/
#define FPGA_MODULE (0x28/4)

#define HPS_CLK 25

#define TIMERIRQ 29
#define UART0IRQ 194
#define EMAC1IRQ 152

#define LEVEL 0
#define EDGE 1

