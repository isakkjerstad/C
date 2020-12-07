/*
Written by: Isak Kjerstad
Purpose: Learn about enums.
Date: 30.11.19
*/

#include <stdio.h>

int main(void) {
    
    enum company { GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT };

    enum company xerox = XEROX;
    enum company google = GOOGLE;
    enum company ebay = EBAY;

    printf("The value of xerox is: %d\n", xerox);
    printf("The value of google is: %d\n", google);
    printf("The value of ebay is: %d\n", ebay);

    return 0;
}