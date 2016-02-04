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
#include <stdlib.h>
#include <stdio.h>

int MAX_BUFFER_SIZE = 25;

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

void wordCount(char *str){
    UART_1_PutString("Enter the first string: ");
    readString(str);
    UART_1_PutString("\n\r");
    
    int i = 0;
    int length;
    int longest = 0;
    int tempLong = 0;
    int tempVowel = 0;
    int wc = 0;
    int vowelCount = 0;
    char lc;
    
    while(str[i]!='\0'){
        i++;
    }
    length = i;
    
    for(i = 0; i < length; i++){
        if(str[i] == ' ' || i == length - 1){
            if( i == length - 1 && str[i] != ' '){
                tempLong++;
            }
            if(tempLong > 0 && lc != ' '){
                wc++;
            }
            if(longest < tempLong){
                longest = tempLong;
            }
            tempLong = 0;   
        }else{
            tempLong++;
        }
        lc = str[i];
    }
    
    for(i = 0; i < length; i++){
        if(str[i] != ' '){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
                tempVowel++;
            }
            if(i == length - 1){
                if(vowelCount < tempVowel){
                vowelCount = tempVowel;
                }
            }
        }else{
            if(vowelCount < tempVowel){
                vowelCount = tempVowel;
            }
            tempVowel = 0;
        }
    }
    
    wc = wc + 'a' - 1 - '0';
    longest = longest + 'a' - 1 - '0';
    vowelCount = vowelCount + 'a' - 1 - '0';
    
    UART_1_PutString("The word count is ");
    UART_1_PutChar(wc);
    UART_1_PutString("\n\r");
    UART_1_PutString("The longest word is ");
    UART_1_PutChar(longest);
    UART_1_PutString("\n\r");
    UART_1_PutString("The word with the most vowels has ");
    UART_1_PutChar(vowelCount);
    UART_1_PutString("\n\r");
    
}

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    UART_1_Start(); /* Start the UART component. */
    char str[MAX_BUFFER_SIZE];
    int status;
    for(;;)
    {
        wordCount(str);
    }
}

/* [] END OF FILE */
