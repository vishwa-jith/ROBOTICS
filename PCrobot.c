#define F_CPU 8000000UL
#define BAUDRATE 9600
#define myubrr ((F_CPU/(BAUDRATE*16UL)-1))
#include<avr/io.h>
#include<util/delay.h>
void uart_int()
{
	UBRRH=myubrr>>8;
	UBRRL=myubrr;
	UCSRB|=(1<<RXEN);
}
unsigned int uart_receive()
{
	while((UCSRA&(1<<RXC))==0);
	return UDR;
}
void main()
{
	unsigned char value;
	DDRB=0b11111111;
	uart_int();
	_delay_ms(50);
	while(1)
	{
		value=uart_receive();
		if(value=='w')
		PORTB=0b00001010;
		else if(value=='s')
		PORTB=0b00000101;
		else if(value=='a')
		PORTB=0b00000110;
		else if(value=='d')
		PORTB=0b00001001;
		else
		PORTB=0b00000000;
	}
}