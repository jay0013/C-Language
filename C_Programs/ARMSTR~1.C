/*
Write a program to Check whether number is Armstrong or not.
*/
#include <stdio.h>
#include <math.h>
#include <conio.h>
// Function to check if a number is an Armstrong number
int isArmstrong(int num)
{
    int originalNum = num;
    int n = 0,sum;
    while (num > 0)
	{
	num /= 10;
	n++;
	}

    num = originalNum;
    sum = 0;
    while (num > 0)
	{
	int digit = num % 10;
	sum += pow(digit, n);
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

    if (isArmstrong(num))
	{
	printf("%d is an Armstrong number.\n", num);
	}
    else
	{
	printf("%d is not an Armstrong number.\n", num);
	}

    getch();
}
   /*
   Enter a number: 2
2 is an Armstrong number.                                                       
                                                   
  */