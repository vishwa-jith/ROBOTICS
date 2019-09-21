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
		c=PINA;		//Value of PIN A is stored in c
		if((c%8)/4==0)		//Checking the value of PB2
		{
			PORTB=0b00010000;	//Stop with beep sound
		}
		else
		{
			//Number of cases=4
			if(c==0b11111100)	//Both the sensors are glowing
				PORTB=0b00001010;	//Forward motion
			if(c==0b11111111)	//Both the sensors are not glowing
				PORTB=0b00011010;	//Forward motion with beep sound
			if(c==0b11111101)	//Left sensor will alone glow
				PORTB=0b00001001;	//Left wheel moves forward and right wheel moves backward
			if(c==0b11111110)	//Right sensor will alone glow
				PORTB=0b00000110;	//Right wheel moves forward and left wheel moves backward
		}
	}
}
