#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <pic18f4550.h>

void main (void) {
  int a ,b ,mul,div;
  a = 0x08;
  b = 0x02;
  mul = a*b;
  TRISD = 0x00;
  PORTD = mul;
   
  div = a/b;
  TRISB = 0x00;
  PORTB = div;
  return ;
}
