#include "lpc2292.h"
#include "init.h"
#include "systimer.h"
#include "led.h"
int main(void)
{
	unsigned long i;
	unsigned char data;
	unsigned char status;

	init_system();
	IODIR0 |= 0x00000080; 
	IOCLR0 = 0x00000080; 
	PINSEL0 |= 0x00001500; 

	VPBDIV = 0x00;
	S1SPCR = 0x0020;
	S1SPCCR = 0x8;
	S1SPDR = 0x10;
	while (!S1SPSR) {}
	data=S1SPDR;
	while (!S1SPSR) {}
	data=S1SPDR;
	led_line(data);

	while(1)
	{
	}
}                                
