#include<avr/io.h> //header files 
#include<util/delay.h>
void main()
{
	DDRA=0b00000000;//Part A is set as input port
	DDRB=0b11111111;//Part B is set as output port
	PORTA=0b11111111;//Pulling up port A
	int c;
	while(1)
	{
		/*There are 16 possible cases but we have three exceptional cases
		1->All four sensors cannot be out of the table.
		2->Both top and bottom left sensors cannot be out of the table.
		3->Both top and bottom right sensors cannot be out of the table.
		*/
		c=PINA;//Reading the pin value of port A
		if(c==0b11110000)//All the four sensors glow
			PORTB=0b00001010;//Robot moves forward
		if(c==0b11111000)//First sensor(top left) alone is not glowing
		{	
			PORTB=0b00000101;//Robot comes back
			_delay_ms(300);//Delay time for backward motion
			PORTB=0b00001001;//Left motor(forward) and right motor(backward) so the robot takes a right turn
			_delay_ms(200);//Delay time for right turn
		}
		if(c==0b11110100)//Second sensor(top right) alone is not glowing
		{
			PORTB=0b00000101;//Robot comes back
			_delay_ms(300);//Delay time for backward motion
			PORTB=0b00000110;//Robot takes a left turn
			_delay_ms(200);//Delay time for left turn
		}
		if(c==0b11110010)//Third sensor(bottom left) is not glowing
		{
			PORTB=0b00001010;//Robot moves forward
			_delay_ms(300);//Delay time for forward motion
			PORTB=0b00001001;//Robot takes a right turn
			_delay_ms(200);//Delay time for right turn
		}
		if(c==0b11110001)//Fourth sensor(bottom right) is not glowing
		{
			PORTB=0b00001010;//Robot moves forward
			_delay_ms(300);//Delay time for forward motion
			PORTB=0b00000110;//Robot takes a left turn
			_delay_ms(200);//Delay time for left turn
		}
		if(c==0b11110011)//Bottom sensors are not glowing
			PORTB=0b00001010;//Robot moves forward
		if(c==0b11110110)//Top right and bottom left sensor are not glowing
		{
			PORTB=0b00000110;//Robot takes a left turn
			_delay_ms(300);//Delay time for left turn
			
		}
		if(c==0b11111100)//Top sensors are not glowing
		{
			PORTB=0b00000101;//Robot comes back
			_delay_ms(300);//Delay time for backward motion
			PORTB=0b00000110;//Robot takes a left turn(you can also make the robot turn right)
			_delay_ms(200);//Delay time for left turn
		}
		if(c==0b11111001)//Top left and bottom right sensors are not glowing
		{
			PORTB=0b00001001;//Robot turns right
			_delay_ms(300);//Delay time for right turn
		}
		if(c==0b11110111)//Only the top left sensor is glowing
		{
			PORTB=0b00000110;//Robot takes a left turn
			_delay_ms(300);//Delay time for left turn
		}
		if(c==0b11111011)//Only the top right sensor is glowing
		{
			PORTB=0b00001001;//Robot takes a right turn
			_delay_ms(300);//Delay time for right turn
		}
		if(c==0b11111101)//Only the bottom left sensor is glowing
		{
			PORTB=0b00000110;//Robot takes a left turn
			_delay_ms(300);//Delay time for left turn
		}
		if(c==0b11111110)//Only the bottom right sensor is glowing
		{
			PORTB=0b00001001;//Robot takes a right turn
			_delay_ms(300);//Delay time for right turn
		}
	}
}

