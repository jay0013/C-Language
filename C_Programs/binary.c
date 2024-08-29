/*
To check whether the given number is binary or not.
*/
#include <stdio.h>
#include<conio.h>
// Function to check if a number is binary
int isBinary(int num) 
{
    while (num > 0) 
	{
        int digit = num % 10;
        if (digit != 0 && digit != 1) 
	{
            return 0; // Not a binary number
        }
        num /= 10;
    }
    return 1; // Binary number
}

void main() 
{
    int num;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isBinary(num)) 
	{
        printf("%d is a binary number.\n", num);
    	} 
    else 
	{
        printf("%d is not a binary number.\n", num);
        }

    getch();
}
  /*
  Enter a number: 10110
10110 is a binary number.                                                       
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

  */