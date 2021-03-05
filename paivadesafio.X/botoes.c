/*
 * File:   botoes.c
 * Author: 20185206
 *
 * Created on 5 de Março de 2021, 14:23
 */


#include <xc.h>
#include "config.h"

#define K1 PORTDbits.RD7
#define K2 PORTDbits.RD6
#define K3 PORTDbits.RD5
#define S1 PORTDbits.RD1
#define S0 PORTDbits.RD0

void botoes_init (void)
{
    TRISDbits.TRISD0 = 1;
    TRISDbits.TRISD1 = 1;
}

void contatores_init (void)
{
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD6 = 0;
    PORTDbits.RD4 = 0;
    PORTDbits.RD5 = 0;
    PORTDbits.RD6 = 0;
}

void k1 (int x)
{
    K1 = x;
}
void k2 (int x)
{
    K2 = x;
}
void k3 (int x)
{
    K3 = x;
}
int s1 (void)
{
   return (S1);
}
int s0 (void)
{
   return (S0);
}