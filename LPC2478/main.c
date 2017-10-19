#include "system_lpc2478.h"


void SysTick_Handler()
{
    T0IR  = 0xFF;         // Clear timer #0 interrupt.
}


int main(void)
{
    SystemInit();

    while(1)
    {
    }
}
