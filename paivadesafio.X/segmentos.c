/*
 * File:   disp7seg.c
 * Author: 20185206
 *
 * Created on 25 de Fevereiro de 2021, 14:55
 */


#include <xc.h>
#include "config.h"
#include "delay.h"

char vetor[16] = {          0x3F, 0x06, 0x5B, 0x4F, 
                            0x66, 0x6D, 0x7D, 0x07, 
                            0x7F, 0x6F,}; 
                        

void segmentos_init ( void )
{
    ANSELH = 0;
    TRISB = 0x00;
    PORTB = 0x00;
    
}

void segmentos ( int c )
{
    if( c >= 0 && c <= 15 )
        PORTB = vetor[c];
    else
        PORTB = 0x00;// error: caractere nao imprimivel
}

