//Atmega128
#define F_CPU 8000000
#include <avr/io.h>
#include <util/delay.h>

void preset(){
	DDRD = 0b11111111;
	PORTD = 0b00000000;
}

int main(void)
{
	preset();
    while (1) 
    {	
		for(int i=0;i<=7;i++)
		{
			PORTD = (1<<i);
			_delay_ms(500);
		}
    }
}

