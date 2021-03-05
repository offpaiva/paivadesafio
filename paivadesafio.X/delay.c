/*
 * File:   delay.c
 * Author: 20185206
 *
 * Created on 25 de Fevereiro de 2021, 14:55
 */


#include <xc.h>
#include "config.h"

void delay( unsigned int t )
{
    while( t )
    {
        __delay_ms(1);
        --t;
    }
}

