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

#define MATRIX_SIZE 5

int tc;
uint8 preTime;
float clockTime = (float)1/(float)24000000;
float elapsedTime;

CY_ISR(uartISR) /* ISR to handle UART interrupts. */
{
    /* Your ISR code. */
    
    /* Clear the interrupt. */
    UART_1_PutString("Hi there! \n\r");
    //UART_1_ClearRxBuffer();
    UART_1_ClearRxBuffer();
}

CY_ISR(myTimerISR) /* ISR to handle tc interrupts from timer. */
{
    //UART_1_PutString("Timer! \n\r");
    tc++;
    /* Your ISR code. */
    
    /* Reset the interrupt. */
    //TIMER_1_ReadStatusRegister();
    TIMER_1_ReadStatusRegister();
}

void tic(void)
{
    preTime = TIMER_1_ReadCounter();
    elapsedTime = tc;
    //UART_1_PutChar(TIMER_1_ReadCounter());
}

void toc(void)
{
    float temp0 = (tc - elapsedTime) * 0.00001;
    float temp1 = ((float)(preTime + 239 - TIMER_1_ReadCounter())) * clockTime;
    
    temp0 = temp0 + temp1;
    char str0[8];
    //char str1[8];
   
    //UART_1_PutString("");
    sprintf(str0,"%f",temp0);
    UART_1_PutString(str0);
    
    /*
    uint8 temp = 239 - TIMER_1_ReadCounter();
    sprintf(str1,"%d",temp);
    UART_1_PutString(str1);

    */
    UART_1_PutString(" s \n\r");
}

void matrixMult(float A[MATRIX_SIZE][MATRIX_SIZE], float B[MATRIX_SIZE][MATRIX_SIZE], float C[MATRIX_SIZE][MATRIX_SIZE])
{
    int8 i, j, k;
    float temp;
    for(i = 0; i < MATRIX_SIZE; i++){
        for(j = 0; j < MATRIX_SIZE; j++){
            temp = 0.0;
            for(k = 0; k < MATRIX_SIZE; k++){
                temp += A[i][k] * B[k][j];
            }
            C[i][j] = temp;
        }
    }
}

void populateMatrix(float M[MATRIX_SIZE][MATRIX_SIZE])
{
    int8 i, j;
    for(i = 0; i < MATRIX_SIZE; i++){
        for(j = 0; j < MATRIX_SIZE; j++){
            M[i][j] = (float)rand()/(float)RAND_MAX;
        }
    }
}

int main()
{
    CyGlobalIntDisable;
    UART_Int_Start(); /* Start the ISR associated with UART. */
    UART_Int_SetVector(uartISR); /* Update vector table. */

    myTimer_Int_Start(); /* Start the ISR associated with timer. */
    myTimer_Int_SetVector(myTimerISR); /* Update vector table. */
    CyGlobalIntEnable;
    
    UART_1_Start(); /* Start the UART. */
    TIMER_1_Start(); /* Start timer. */
    
    srand(rand()); /* Initialize random number generator. */
    
    float A[MATRIX_SIZE][MATRIX_SIZE];
    float B[MATRIX_SIZE][MATRIX_SIZE];
    float C[MATRIX_SIZE][MATRIX_SIZE];

    for(;;)
    {
        populateMatrix(A); /* Populate matrices with random numbers. */
        populateMatrix(B);
        
        tic(); /* Time the multiplication operation. */
        
        matrixMult(A, B, C);
        
        toc();
        
        //UART_1_PutString("Hellooo \n\r");
        //UART_1_PutChar(elapsedTime);
        
        /* Display elapsed time on the terminal. */
        CyDelay(1000);
    }
}

/* [] END OF FILE */
