#include<avr/io.h>
#include<util/delay.h>
void init_adc()
{
	ADCSRA=ADCSRA|1<<ADEN;
	ADCSRA=ADCSRA|(1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2);	
	ADMUX=ADMUX|1<<REFS0;
}
unsigned int read_adc(int p)
{
	ADMUX=ADMUX|p;
	ADCSRA=ADCSRA|(1<<ADSC);
	while((ADCSRA&(1<<ADIF))==0);
	ADCSRA|=(1<<ADIF);
	return ADC;
}
void main()
{
	DDRA=0b00000000;
	DDRB=0b11111111;
	PORTA=0b11111111;
	int c;
	init_adc();
	unsigned int a,p,T,TON,TOFF;
	while(1)
	{
		p=read_adc(4);
		a=p/40;
		T=25.6;
		TOFF=a;
		TON=T-TOFF;
		c=PINA;
		PORTA|=(1<<PA4);
		if((c%16)/8==1)
		{
			PORTA&=0b11011111;
			if((c%8)/4==1)
			{
				if(c==0b11111111)
					PORTB=0b00011010;
				if(c==0b11111110)
					PORTB=0b00000110;			
				if(c==0b11111101)
					PORTB=0b00001001;
				if(c==0b11111100)
					PORTB=0b00001010;
			}
			else
				PORTB=0b00010000;
		}
		else
		{
			PORTA|=(1<<PA4);
			if(c==0b11110100)
			{
				PORTB=0b00001010;
				_delay_ms(TON);
				PORTB=0b00000000;
				_delay_ms(TOFF);
			}
			if(c==0b11110111)
			{
				PORTB=0b00011010;
				_delay_ms(TON);
				PORTB=0b00010000;
				_delay_ms(TOFF);
			}
			if(c==0b11110101)
			{
				PORTB=0b00001001;
				_delay_ms(TON);
				PORTB=0b00000000;
				_delay_ms(TOFF);
			}
			if(c==0b11110110)
			{
				PORTB=0b00000110;
				_delay_ms(TON);
				PORTB=0b00000000;
				_delay_ms(TOFF);
			}
			
		}
	}	
}

