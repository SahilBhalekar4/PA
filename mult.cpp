#include<xc.h>
#include<stdio.h>
#include<stdlib.h>
#include<pic18f4550.h>
void main (void) {
    int mult = 0x00;
    int div = 0x00;
    int a = 0x03;
    int b = 0x04;

    mult = a*b;
    div = b/a;

    TRISD=0;
    PORTD=multi;
    TRISB=0;
    PORTB=div;
    return ;
}