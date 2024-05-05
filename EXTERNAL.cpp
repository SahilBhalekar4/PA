#include<xc.h>
#include<stdio.h>
#include<stdlib.h>
#include<pic18f4550.h>
 
 void main (void)
 {
    int source[]={0x1,0x2,0x3,0x4,0x5};
    int dest[]={0x6,0x7,0x8,0x9,0xa};
    int temp ,i,j,k;
    for(i=0;i<5;i++)
    {
        temp=source[i];
        source[i]=dest[i];
        dest=[i]=temp[];
    }
     TRISB=0;
     TRISD=0;

     for(i=0;i<5;i++)
     {
        PORTB=dest[i];
        PORTD=source[i];
        for(j=0;j<1000;j++)
        {
            for(k=0;k<100;k++)
            {
            }
        }
     }
     return;
 }