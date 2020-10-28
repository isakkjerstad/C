#include <stdlib.h>
#include <stdio.h>

int main(void) {

    int number = 0;             // Declares a normal variable with value 0.
    int * pnumber = NULL;       // Declares a pointer with name pnumber, and no address.
    pnumber = &number;          // Sets the address of the pointer 'pnumber' to the memory address of 'number'.

    *pnumber = 15;  // Sets the value of what the pointer is pointing to, to 15.

    printf("\nThe adress of number is: %p\n", &number);     // Prints the address of 'number'.
    printf("The adress of pnumber is: %p\n", pnumber);      // Prints the address of the pointer.
    printf("The value of pnumber is: %d\n", *pnumber);      // Prints the value of the pointer.
    printf("The value of number is: %d\n\n", number);       // Prints the value of number as normal.

    // By changing what the pointer points to, you will also change the value of that variable.
    // *pnumber will change number, bacause it points to the memory address of number.

    return 0;
}