/*
Written by: Isak Kjerstad
Purpose: Determine if a number is even or odd.
Date: 20.12.19
*/

// Including libary.
#include <stdio.h>

int main(void) {
    
    // Declaring variables.
    int input_number;
    int remainder;

    // Asking user for input.
    printf("\nEnter your number to be tested: ");
    scanf("%d", &input_number);

    // Checking the remainder when the input is divided by two.
    remainder = input_number % 2;

    // If the remainder is 0 when the number is divided by two the number must be even.
    if (remainder == 0) {
        printf("The number is even.\n\n");
    }
    else {
        printf("The number is odd.\n\n");
    }
    
    return 0;
}