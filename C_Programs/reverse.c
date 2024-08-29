/*
Write a program to calculate the reverse of a number.
*/
#include <stdio.h>

// Function to calculate the reverse of a number
int reverseNumber(int num)
{
    int reversed = 0;
    while (num > 0)
    {
	int digit = num % 10;
	reversed = reversed * 10 + digit;
	num /= 10;
    }
    return reversed;
}

void main()
{
    int reversed,number;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &number);

    reversed = reverseNumber(number);
    printf("Reverse of the number: %d\n", reversed);

    getch();
}

/*
Enter a number: 456
Reverse of the number: 654                                                      
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/