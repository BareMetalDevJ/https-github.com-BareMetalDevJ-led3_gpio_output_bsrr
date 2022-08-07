#include "stm32f4xx.h"  // Header File



#define GPIOAEN     (1U<<0)
#define PIN5        (1U<<5)
#define LED_PIN     PIN5


int main(void)
{
	RCC->AHB1ENR |=GPIOAEN;    // enable Clock Access
	GPIOA->MODER |=(1U<<10);   // Set Bit Number 10 to 1
	GPIOA->MODER &=~(1U<<11);  // Set Bit Number 11 to 0

	while(1)
	{

        GPIOA->BSRR |= (1U<<5);  //Bit Set Reset Register
        for(int i=0;i<100000;i++){}

        GPIOA->BSRR |= (1U<<21);
        for(int i=0;i<100000;i++){}



	}
}
