/*
Write a program to find out and print all prime numbers lying between 1 to 200.
*/

#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num)
{   int i;
    if (num <= 1)
	{
	return 0; // Not a prime number
	}

    for (i = 2; i <= num / 2; i++)
	{
	if (num % i == 0)
	{
	    return 0; // Not a prime number
	}
    }

    return 1; // Prime number
}

void main()
{
    int i;
    clrscr();


    for (i = 2; i <= 200; i++)
    {
	if (isPrime(i))
	{
	    printf("%d", i);
	}
    }
    printf("Prime numbers between 1 and 200 are:\n");
    getch();
}
