#include<avr/io.h>
#include<util/delay.h>
void main()
{
	DDRA=0b00000000;	//PART A is set as input port
	DDRB=0b11111111;	//PART B is set as output port
	PORTA=0b11111111;	//Pulling up port A
	int c;		//Declared to store the value of PIN A
	while(1)
	{	
		//Number of cases=8
		c=PINA;		//Value of PIN A is stored in c
		if(c==0b11111111)	//None of the sensors glows
			PORTB=0b00001010;	//Forward motion
		if(c==0b11111110)	//Third sensor alone glows
			PORTB=0b00000110;	//Right wheel moves forward and left wheel moves backward
		if(c==0b11111101)	//Second sensor alone glows
		{
			PORTB=0b00000000;	//Stops moving
			_delay_ms(300);
			PORTB=0b000010000;	//Produces a beep
			_delay_ms(200);
		}
		if(c==0b11111100)	//Second & Third sensors glows
		{
			PORTB=0b00000101;	//Reverse motion
			_delay_ms(300);
			PORTB=0b00000110;	//Right wheel moves forward and left wheel moves backward
			_delay_ms(200);
		}
		if(c==0b11111011)	//First sensor alone glows
			PORTB=0b00001001;	//Left wheel moves forward and right wheel moves backward
		if(c==0b11111010)	//First & Third sensor glows
		{
			PORTB=0b00000101;	//Reverse motion
			_delay_ms(300);
			PORTB=0b00001001;	//Left wheel moves forward and right wheel moves backward
			_delay_ms(200);
		}
		if(c==0b11111001)	//First & Secoond sensor glows
		{
			PORTB=0b00000101;	//Reverse motion
			_delay_ms(300);
			PORTB=0b00001001;	//Left wheel moves forward and right wheel moves backward
			_delay_ms(200);
		}
		if(c==0b11111000)	//All the sensors are glowing
		{
			PORTB=0b00000101;	//Reverse motion
			_delay_ms(1000);
			PORTB=0b00001001;	//Left wheel moves forward and right wheel moves backward
			_delay_ms(1200);
		}
	}
}
