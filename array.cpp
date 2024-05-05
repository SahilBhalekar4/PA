#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <pic18f4550.h>

void main (void) {
  int add ,i;
  add = 0x00;
  int arr[] = {0x03,0x06,0x04,0x05,0x08};
  for (i=0;i<5;i++)
  {
    add = add + arr[i];
  }
  TRISD = 0x00;
  PORTD = add;
  return;
}