/*
WAP of SWAP two Number
*/
#include <stdio.h>
#include <conio.h>
void swapNumbers(int num1, int num2) 
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void main() 
{
    int num1, num2;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swapNumbers(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    getch();
}
