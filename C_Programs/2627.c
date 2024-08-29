/*
write a program to perfect or not and circular prime number or not
*/
#include <stdio.h>
#include <math.h>
#include <conio.h>
// Function to check if a number is a perfect number
int isPerfect(int num) 
{
    int sum = 1,i;

    for ( i = 2; i <= num / 2; i++)
    {
        if (num % i == 0) 
	{
            sum += i;
        }
    }

    return sum == num;
}

// Function to check if a number is prime
int isPrime(int num) 
{
    int i;
    if (num <= 1)
	{
	return 0; // Not a prime number
	}

    for (i = 2; i <= sqrt(num); i++)
	{
        if (num % i == 0) 
	{
            return 0; // Not a prime number
        }
    }

    return 1; // Prime number
}

// Function to check if a number is circular prime
int isCircularPrime(int num) 
{
    int original = num;
    int numDigits = log10(num) + 1;

    for (int i = 0; i < numDigits; i++) 
    {
        if (!isPrime(num)) 
	{
            return 0;
        }

        int lastDigit = num % 10;
        num = (lastDigit * pow(10, numDigits - 1)) + (num / 10);
    }

    return 1;
}

void main() 
{
    int num;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfect(num)) 
	{
        printf("%d is a perfect number.\n", num);
    	} 
    else 
  	{
        printf("%d is not a perfect number.\n", num);
    	}

    if (isCircularPrime(num)) 
	{
        printf("%d is a circular prime number.\n", num);
    	} 
    else 
 	{
        printf("%d is not a circular prime number.\n", num);
     	}
    getch();
}
/*
Enter a number: 2
2 is not a perfect number.                                                      
2 is a circular prime number.                                                   
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/