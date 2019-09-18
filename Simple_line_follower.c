#include<avr/io.h>
#include<util/delay.h>
void main()
{
	DDRA=0b00000000;
	DDRB=0b11111111;
	PORTA=0b11111111;
	int c;
	while(1)
	{
		c=PINA;
		if(c==0b11111111)
			PORTB=0b00001010;
		if(c==0b11111110)
			PORTB=0b00000110;			
		if(c==0b11111101)
			PORTB=0b00001001;
		if(c==0b11111100)
			PORTB=0b00001010;
	}
}
