
/*
To check whether the giver number is palindrome or not
*/
#include <stdio.h>
#include<conio.h>
// Function to check if a number is a palindrome
int isPalindrome(int num)
{
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0)
	{
	int digit = num % 10;
	reversedNum = reversedNum * 10 + digit;
	num /= 10;
	}

    return originalNum == reversedNum;
}

void main()
{
    int num;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
	{
	printf("%d is a palindrome number.\n", num);
	}
	else
	{
	printf("%d is not a palindrome number.\n", num);
	}

    getch();
}
