#include<avr/io.h>	//AVR io heder file
#include<util/delay.h>	
void main()
{
	DDRA=0b00000000;	//PART A is set as input port
	DDRB=0b11111111;	//PART B is set as output port
	PORTA=0b11111111;	//Pulling up port A
	int c;		//Declared to store the value of PIN A
	/* IR Sensor input pins PA[0],PA[1] */
	while(1)
	{
		c=PINA;		//Value of PIN A is stored in c	 
		if(c==0b11111111) 	//Both the sensors are not glowing
			PORTB=0b00001010;	//Forward motion
		if(c==0b11111110)	//Right sensor will alone glow
			PORTB=0b00000110;	//Right wheel moves forward and left wheel moves backward
		if(c==0b11111101)	//Left sensor will alone glow
			PORTB=0b00001001;	//Left wheel moves forward and right wheel moves backward
		if(c==0b11111100)	//Both the sensors are glowing
			PORTB=0b00001010;	//Forward motion
	}
}
