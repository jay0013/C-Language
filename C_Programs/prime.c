/*
 Write a program to find Prime or Not Number
*/
#include <stdio.h>
#include <conio.h>

// Function to check if a number is prime
int isPrime(int n)
{
    int false,i,true;
    if (n <= 1)
	{
	return 0; // 0 and 1 are not prime numbers
	}

    for ( i = 2; i * i <= n; i++)
	{
	if (n % i == 0)
	{
	return 0; // If divisible by any number between 2 not prime
	}
	}

    return 1;
}

void main() {
    int num;
    clrscr();
    printf("Enter a Number: ");
    scanf("%d", &num);
	if (isPrime(num))
	{
	    printf("%d is a prime number.\n", num);
	}
	else
	{
	    printf("%d is not a prime number.\n", num);
	}


    getch();
}
