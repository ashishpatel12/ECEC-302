/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>
#include <stdio.h>

int frequency = 1;
int state = 0; // Increasing

CY_ISR(switchISR)
{
    
    // Debounce
    CyDelay(50);
    
    while(!SW_Read());
    CyDelay(50);
    
    LED_Write(!(LED_Read()));
    if(frequency == 5){
            state = 1;
    }else if(frequency == 1){
        state = 0;
    }
    
    if(state == 0){
        frequency++;
    }else{
        frequency--;
    }
    //printf("Frequency: %i", frequency);
        
    SW_ClearInterrupt();
}

int main()
{
    CyGlobalIntDisable; /* Enable global interrupts. */
    SW_int_Start();
    // Add ISR to vector table.
    SW_int_SetVector(switchISR);
    CyGlobalIntEnable;
    
    
    for(;;)
    {
        CyDelay(1000*frequency);
        LED_Write(!(LED_Read()));
    }
}

/* [] END OF FILE */
