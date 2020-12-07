/*
Written by: Isak Kjerstad
Purpose: Calculate minutes based on days.
Date: 01.01.20
*/

// Including system libaries.
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Declaring variables.
    int input_days;
    int output_hours;
    int output_minutes;
    int output_seconds;

    printf("\n\nEnter the numbers of days to be calculated: ");
    scanf("%d", &input_days);

    output_hours = input_days * 24;
    output_minutes = input_days * 24 * 60;
    output_seconds = input_days * 24 * 60 * 60;

    printf("\n%d days is: %d hours.", input_days, output_hours);
    printf("\n%d days is: %d minutes.", input_days, output_minutes);
    printf("\n%d days is: %d seconds.\n\n", input_days, output_seconds);

    return 0;
}