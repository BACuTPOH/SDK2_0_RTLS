/**----------------------------------------------------------------------------
Проект:     SDK-2.0 
Название:   Инициализация контроллера
Файл:       init.c
Версия:     1.0.2
-----------------------------------------------------------------------------*/

#include "lpc2292.h"
#include "common.h"
#include "systimer.h"
#include "led.h"


static void init_pio( void );

///////////////////////////////////////////////////////////////////////////////
// Инициализация системы
///////////////////////////////////////////////////////////////////////////////
unsigned char init_system( void )
{           
    init_pio();
    init_led();
	init_systimer0();

	start_timer0();

    return OK;     
}                                

///////////////////////////////////////////////////////////////////////////////
// Инициализация портов ввода-вывода
///////////////////////////////////////////////////////////////////////////////
static void init_pio( void )
{
	PINSEL0 = 0x80550055;
	PINSEL1 = 0x154540A8;
	PINSEL2 = 0x0D6149D4;

    IO0DIR = 0x011A7D05;
    IO1DIR = 0x00000000;
    IO2DIR = 0x003F0000;
    IO3DIR = 0xC0000000;

    IO0CLR = 0xFFFFFFFF;
    IO1CLR = 0xFFFFFFFF;
    IO2CLR = 0xFFFFFFFF;
    IO3CLR = 0xFFFFFFFF;

    IO0SET = 0x00000000;
    IO1SET = 0x00000000;
    IO2SET = 0x00000000;
    IO3SET = 0x00000000;
}

