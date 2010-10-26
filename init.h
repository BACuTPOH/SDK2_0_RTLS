/**----------------------------------------------------------------------------
Проект:     SDK-2.0 
Название:   Инициализация контроллера
Файл:       init.h
Версия:     1.0.2
-----------------------------------------------------------------------------*/

#ifndef __INIT_H
#define __INIT_H
#include "lpc2292.h"
#include "common.h"
#include "systimer.h"
#include "led.h"

extern unsigned char init_system( void );
void init_pio( void );

#endif // __INIT_H
