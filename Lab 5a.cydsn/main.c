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
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int password[6];

/* Read a string from the terminal via the UART. */
void readString(char *buffer)
{
    uint32 rxData;
    char *ptr = buffer;
    for(;;){
        rxData = UART_1_GetChar();
        if(rxData){
            UART_1_PutChar(rxData); /* Echo character. */
            /* On a carriage return, null terminate the string
            and break out of the loop. */
            if(rxData == '\r'){
                *ptr = '\0';
                break;
            }
            *ptr = rxData;
            ptr++;
        }
    }
}

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
                if(currentState == password[1]){
                    currentState = 1;
                    UART_1_PutString("Current State: 1 \r\n");
                    if(currentState == password[0]){
                       UART_1_PutString("Current State: UNLOCKED \r\n");
                       return 1;
                    }
                }else
                    return 0;
                break;
            case '2':
                if(currentState == password[2]){
                    currentState = 2;
                    UART_1_PutString("Current State: 2 \r\n");
                    if(currentState == password[0]){
                       UART_1_PutString("Current State: UNLOCKED \r\n");
                       return 1;
                    }
                }else
                    return 0;
                break;
            case '3':
                if(currentState == password[3]){
                    currentState = 3;
                    UART_1_PutString("Current State: 3 \r\n");
                    if(currentState == password[0]){
                       UART_1_PutString("Current State: UNLOCKED \r\n");
                       return 1;
                    }
                }else
                    return 0;
                break;
            case '4':
                if(currentState == password[4]){
                    currentState = 4;
                    UART_1_PutString("Current State: 4 \r\n");
                    if(currentState == password[0]){
                       UART_1_PutString("Current State: UNLOCKED \r\n");
                       return 1;
                    }
                }else
                    return 0;
                break;
            case '5':
                if(currentState == password[5]){
                    currentState = 5;
                    UART_1_PutString("Current State: 5 \r\n");
                    if(currentState == password[0]){
                       UART_1_PutString("Current State: UNLOCKED \r\n");
                       return 1;
                    }
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
    
    int passtemp[5];
    char passchar[5];
    char unlocked = 0; //0 = locked, 1 = unlocked
    int attempts = 0;
    
    //Set combination
    password[0] = 3;
    password[1] = 5;
    password[2] = -1;
    password[3] = 1;
    password[4] = 2;
    password[5] = 4;
    
    for(;;)
    {
        if(!unlocked){
            unlocked = getCombination();
            if(!unlocked){
                attempts++;
                UART_1_PutString("Incorrect pin. \n\r");
            }
        }       
        if(unlocked){
            if(UART_1_GetChar() == '1'){
                UART_1_PutString("Current State: LOCKED \n\r");
                unlocked = 0;
                attempts = 0;
            }else if(UART_1_GetChar() == '2'){
                UART_1_PutString("Enter new key: ");
                readString(passchar);
                UART_1_PutString("\n\r");
                
                passtemp[0] = passchar[0] - '0';
                passtemp[1] = passchar[1] - '0';
                passtemp[2] = passchar[2] - '0';
                passtemp[3] = passchar[3] - '0';
                passtemp[4] = passchar[4] - '0';
                
                password[passtemp[0]] = -1;
                password[passtemp[1]] = passtemp[0];
                password[passtemp[2]] = passtemp[1];
                password[passtemp[3]] = passtemp[2];
                password[passtemp[4]] = passtemp[3];
                password[0] = passtemp[4];
            }
        }
        
        if(attempts == 3){
            UART_1_PutString("PERMANENTLY LOCKED! \r\n");
            return 0;
        }
    }
}

/* [] END OF FILE */
