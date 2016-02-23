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

int getCombination()
{
    int currentState = -1; /* Our start state. */
    char input;
    char temp;
    while(1){
        /* Convoluted method to button pushed by user via UART. */
        temp = UART_1_GetChar();
        input = temp;
        UART_1_PutString("Enter a number: ");
        while(input == temp){
            input = UART_1_GetChar();    
        }
        UART_1_PutChar(input);
        UART_1_PutString("\r\n");
        
        if(input < '1' || input > '5'){
            UART_1_PutString("Invalid input \r\n");
        }
        
        switch(input){
            case '1':
                if(currentState == 4){
                    currentState = 1;
                    UART_1_PutString("Current State: 1 \r\n");
                }else
                    return 0;
                break;
            case '2':
                if(currentState == -1){
                    currentState = 2;
                    UART_1_PutString("Current State: 2 \r\n");
                }else
                    return 0;
                break;
            case '3':
                if(currentState == 5){
                    UART_1_PutString("Current State: UNLOCKED \r\n");
                    return 1;
                }else
                    return 0;
                break;
            case '4':
                if(currentState == 2){
                    currentState = 4;
                    UART_1_PutString("Current State: 4 \r\n");
                }else
                    return 0;
                break;
            case '5':
                if(currentState == 1){
                    currentState = 5;
                    UART_1_PutString("Current State: 5 \r\n");
                }else
                    return 0;
                break;
            //default:
        }
    }
}

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    UART_1_Start();
    
    char unlocked = 0; //0 = locked, 1 = unlocked
    int attempts = 0;
    
    //int result = 0;
    //char in;
    
    for(;;)
    {
        if(!unlocked){
            unlocked = getCombination();
            if(!unlocked){
                attempts++;
                UART_1_PutString("Incorrect pin.");
            }
        }       
        if(unlocked){
            if(UART_1_GetChar() == '1'){
                UART_1_PutString("Current State: LOCKED \n\r");
                unlocked = 0;
                attempts = 0;
            }
        }
        
        if(attempts == 3){
            UART_1_PutString("PERMANENTLY LOCKED! \r\n");
            return 0;
        }
    }
}

/* [] END OF FILE */
