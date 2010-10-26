#include "cc2420.h"

void InitSpi()
{
	VPBDIV = 0x00;
	S1SPCR = 0x0020;
	S1SPCCR = 0x8;
}

unsigned char WriteSpi(unsigned char data)
{
	S1SPDR = data;
	while (!S1SPSR)
	{}
	return S1SPDR;
}

void InitRadio()
{
}
