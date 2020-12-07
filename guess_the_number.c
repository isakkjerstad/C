/*
Written by: Isak Kjerstad
Purpose: Guess the number game.
Date: 21.12.19
*/

// Including system libaries.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(void) {

    // Creating a time variable and initalizing the random number generator.
    time_t t;
    srand((unsigned) time(&t));

    // Declaring variables.
    int randomNumber = rand() % 21; // Creating and storing a random number (0-20).
    int input_number;
    int number_of_tries = 5;
    bool win = false; // Flag.

    // Welcome message to the user.
    printf("\n\nWelcome to the guessing game!\n");
    printf("You must guess the right number between 0 and 20 to win.\n");
    printf("You only have %d tries.\n\n", number_of_tries);

    // Checking if the user has any tries left.
    while (number_of_tries > 0 && win == 0) {

        printf("You have: %d tries left.\n", number_of_tries);
        printf("Enter a number to guess: ");
        scanf("%d", &input_number);

        // Validating the input.
        if (input_number >= 0 && input_number <= 20) {
            number_of_tries--; // Removing one try.

            // If the user guessed the correct number the flag is set to true.
            if (input_number == randomNumber) {
                win = true;
            }

            // If the user guessed to high a message is printed.
            else if (input_number > randomNumber) {
                printf("The number is smaller than that.\n\n");
            }

            // If the user guessed to low a message is printed.
            else {
                printf("The number is bigger than that.\n\n");
            }
        }

        // If the input is not a valid number a massage is printed.
        else {
            printf("\nPlease enter a valid number!\n\n");
        }

        // Empty input buffer to prevent errors.
        int ch;
        while((ch = getchar()) != '\n' && ch != EOF);
    }

    // If the loop is exited the user has won or lost. The flag is checked.
    if (win == true) {
        printf("\nYou won!\n\n\n");
        return 0;
    }
    
    else {
        printf("You lost! The number was: %d\n\n\n", randomNumber);
        return 0;
    }
}