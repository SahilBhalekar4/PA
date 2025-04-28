#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <pic18f4550.h>
void main(void) {
int i;
int source[]={0x50,0x80,0x10,0x25,0x60};
int dest[]={0x00,0x00,0x00,0x00,0x00};
for(i=0;i<=4;i++)
{
dest[i]=source[i];
}
TRISD=0;
for(i=0;i<=4;i++)
{
PORTD=dest[i];
for(int n=0;n<1000;n++)
{
for(int j=0;j<500;j++)
{
}
}
}
return;
}
