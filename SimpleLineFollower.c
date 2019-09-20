#include<avr/io.h>	//AVR io heder file
#include<util/delay.h>	
void main()
{
	DDRA=0b00000000;	//Input port assigned 0
	DDRB=0b11111111;	//Output port
	PORTA=0b11111111;	//Pulling up of Input port
	int c;
	/* IR Sensor input pins PA[0],PA[1] */
	while(1)
	{
		c=PINA;		//Reading the Port A input 
		// Number of cases = 4
		if(c==0b11111111) 	//Sensors -> 1,1
			PORTB=0b00001010;	//Forward motion
		if(c==0b11111110)	//Sensors -> 1,0
			PORTB=0b00000110;	//Left turn
		if(c==0b11111101)	//Sensors -> 0,1
			PORTB=0b00001001;	//Right turn
		if(c==0b11111100)	//Sensors -> 0,0
			PORTB=0b00001010;	//Reverse
	}
}
