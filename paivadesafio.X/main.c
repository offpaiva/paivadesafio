/*
 * File:   main.c
 * Author: 20185206
 *
 * Created on 5 de Março de 2021, 14:10
 */


#include <xc.h>
#include "config.h"
#include "botoes.h"
#include "delay.h" 
#include "segmentos.h"

void main (void)
{
    
    int cont = 0;
    char estado = 0;
    
    
    int t;
    while( 1 )
    {
        switch ( estado )
        {
            case 0:
                   
                    estado = 1;
                    break;
                    
            case 1: 
                    segmentos_init();
                    contatores_init();
                    botoes_init();
                    estado = 2;
                    break;
                    
            case 2:
                    if (s1() == 1) 
                    estado = 3;
                    break;
            case 3:
                    k1(1);
                    k2(1);
                    k3(0);
                    estado = 4;
                    
                    break;
                    
            case 4:
                    t = 3000;
                    estado = 5;
                    break;
                    
            case 5:
                if (s0() == 1)
                    estado = 9;
                
                    delay(1);
                    --t;
                    if (t <= 0)
                        estado = 6;
                    break;
                    
            case 6:
                    k1(1);
                    k2(0);
                    k3(1);
                    estado = 7;
                    break;
                    
            case 7: 
                    segmentos (cont);
                    ++cont;
                    estado = 8;
                    break;  
            case 8:
                    if (s0() ==1)
                    estado = 9;
                    break;
            case 9:
                    k1(0);
                    k2(0);
                    k3(0);
                    estado = 2;
                break;
                
                          
        }
       
    }
}

