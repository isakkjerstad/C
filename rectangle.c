/*
Written by: Isak Kjerstad
Purpose: Calculate and print the perimeter and area of a rectangle.
Date: 30.11.19
*/

#include <stdio.h>

// Declaring variables
double width;
double height;
double perimeter;
double area;

int main(void) {
    
    // Width and height of rectangle.
    width = 10.0;
    height = 10.0;

    // Performing calculations.
    perimeter = 2.0 * (width + height);
    area = width * height;

    // Printing values.
    printf("The width is: %.2f\n", width);
    printf("The height is: %.2f\n", height);
    printf("The perimeter is: %.2f\n", perimeter);
    printf("The area is: %.2f\n", area);

    return 0;
}