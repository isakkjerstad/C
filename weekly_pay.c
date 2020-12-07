/*
Written by: Isak Kjerstad
Purpose: Calculate weekly pay based on hours, overtime and taxes.
Date: 20.12.19
*/

// Including libraries.
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Declaring variables.
    int input_workhours = 0;
    int overtime_hours = 0;
    int current_tax = 0;
    float overtime = 40;
    float overtime_multiplier = 1.5;
    float basic_pay_rate = 12.0;
    float output_gross = 0.0;
    float output_taxes = 0.0;
    float output_net = 0.0;

    // Asking user for input.
    printf("\nEnter number of hours worked this week: ");
    scanf("%d", &input_workhours);

    // Check for overtime.
    if (input_workhours <= overtime) {
        output_gross = input_workhours * basic_pay_rate;
    }
    else {
        overtime_hours = input_workhours - overtime;
        output_gross = (basic_pay_rate * overtime) + (overtime_hours * overtime_multiplier * basic_pay_rate);
    }
    
    // Check tax level based on payment.
    if (output_gross <= 300) {
        output_taxes = output_gross * 0.15;
        current_tax = 15;
    }
    else if (output_gross <= 450) {
        output_taxes = output_gross * 0.20;
        current_tax = 20;
    }
    else {
        output_taxes = output_gross * 0.25;
        current_tax = 25;
    }

    // Calculate net payment.
    output_net = output_gross - output_taxes;

    // Print data back to the user.
    printf("\nYour weekly gross pay is: %.1f dollar(s).\n", output_gross);
    printf("You pay: %.1f dollar(s) in tax.\n", output_taxes);
    printf("Your net pay is: %.1f dollar(s).\n\n", output_net);
    printf("You have worked: %d hours overtime.\n", overtime_hours);
    printf("You pay %d percent tax.\n\n", current_tax);

    return 0;
}

/*
The tax calculation is following Norwegian standards.
*/