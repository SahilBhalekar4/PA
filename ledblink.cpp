#include<xc.h>
#include<pic18f4550.h>
#include<stdlib.h>
voidtodelay(void)
{
T0CON=0x08;
TMR0H=0x35;
TMR0L=0x00;
T0CONbits.TMR0ON=1;
while(INTCONbits.TMR0IF==0);
T0CONbits.TMR0ON=0;
INTCONbits.TMR0IF=0;

}
void main(void) {
TRISD=0;
while(1){
PORTD=0x55;
todelay();
PORTD=0x00;
todelay();
}

}