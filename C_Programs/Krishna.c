
/*
Write a program to check whether number is krishnamurthi or not
*/
#include <stdio.h>
#include <math.h>
#include <conio.h>
// Function to find the factorial of a number
int factorial(int num)
{
    if (num == 0 || num == 1)
	{
	return 1;
	}
    return num * factorial(num - 1);
}

// Function to check if a number is a Krishnamurthy number
int isKrishnamurthy(int num)
{
    int originalNum = num;
    int sum = 0;
    while (num > 0)
	{
	int digit = num % 10;
	sum += factorial(digit);
	num /= 10;
	}
    return sum == originalNum;
}

void main()
{
    int num;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isKrishnamurthy(num))
	{
	printf("%d is a Krishnamurthy number.\n", num);
	}
    else
	{
	printf("%d is not a Krishnamurthy number.\n", num);
	}

    getch();
}
/*
Enter a number: 1
1 is a Krishnamurthy number.                                                    
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/