/*
Written by: Isak Kjerstad
Purpose: Convert minutes to years and days.
Date: 20.12.19
*/

// Including libraries.
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Declaring variables.
    double input_minutes;
    double minutes_in_a_year = 60 * 24 * 365;
    double output_years;
    double output_days;

    printf("\nEnter the amount of minutes to be calculated: ");
    // Input from the user.
    scanf("%lf", &input_minutes);

    // Calculate minutes to years and days.
    output_years = (input_minutes / minutes_in_a_year);
    output_days = ((input_minutes / 60.0) / 24.0);

    // Print the result.
    printf("%.1f minutes is equivalent to %f years or %.2f days.\n\n", input_minutes, output_years, output_days);

    return 0;
}