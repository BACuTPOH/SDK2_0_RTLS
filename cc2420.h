#include "lpc2292.h"
#ifndef __SPI_H
#define __SPI_H

//Регистры управления CC2420
#define SNOP 		0x00
#define SXOSCON 	0x01
#define STXCAL		0x02
#define SRXCON		0x03
#define STXCON		0x04
#define STXONCCA	0x05
#define SRFOFF		0x06
#define SXOSCOFF	0x07
#define SFLUSHRX	0x08
#define SFLUSHTX	0x09
#define SACK		0x0A
#define SACKPEND	0x0B
#define SRXDEC		0x0C
#define STXENC		0x0D
#define SAES		0x0E

void InitSpi();
unsigned char WriteSpi(unsigned char data);
void InitRadio();
#endif
