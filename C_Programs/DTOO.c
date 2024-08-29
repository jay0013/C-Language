/*
Write a program to convert decimal to octal
*/
#include <stdio.h>

// Function to convert decimal to octal
long long decimalToOctal(int decimal) 
{
    long long octal = 0;
    long long base = 1;

    do {
        int remainder = decimal % 8;
        octal += remainder * base;
        base *= 10;
        decimal /= 8;
    } while (decimal > 0);

    return octal;
}

void main() {
    int decimal,octal;
    clrscr();
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    octal = decimalToOctal(decimal);

    printf("Octal representation: %d\n", octal);

    getch();
}
