/*
Write a Program to LCM to Two positiv Integer Number
*/

#include <stdio.h>
#include <conio.h>
// Function to calculate the GCD of two numbers
int gcd(int num1, int num2) 
{
    while (num2 != 0) 
	{
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    	}
    return num1;
}

// Function to calculate the LCM of two numbers
int lcm(int num1, int num2) 
{
    return (num1 * num2) / gcd(num1, num2);
}

void main() 
{
    int num1, num2,result;
    clrscr();
    printf("Enter two positive integer numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0)
	{
	printf("Please enter positive integer numbers.\n");
	}

    result = lcm(num1, num2);

    printf("Least Common Multiple (LCM) of %d and %d is %d\n", num1, num2, result);

    getch();
}
/*
Enter two numbers: 6
4                                                                               
Greatest Common Divisor (GCD) of 6 and 4 is 2                                   
*/