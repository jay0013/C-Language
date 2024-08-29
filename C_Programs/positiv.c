/*
Write a program of Positiv Negativ zero
*/
#include <stdio.h>
#include<conio.h>
void checkNumber(int num)
{
    if (num > 0)
    {
	printf("%d is a positive number.\n", num);
    } else if (num < 0)
    {
	printf("%d is a negative number.\n", num);
    } else
    {
	printf("The number is zero.\n");
    }
}

void main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkNumber(number);

    getch();
}
/*



Enter a number: 10
10 is a positive number.
Enter a number: 11
11 is a positive number.
*/