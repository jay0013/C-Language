/*
Write of Factorial Number
*/
#include <stdio.h>
#include <conio.h>
// Function to calculate the factorial of a number
int factorial(int n)
{
    int i,result = 1;
    for (i = 1; i <= n; i++)
    {
	result *= i;
    }
    return result;
}

void main()
{
    int result,num,fact;
    clrscr();
    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num < 0)
    {
	printf("Factorial is not for negative numbers.\n");
    }
    else
	{
	fact = factorial(num);
	printf("Factorial of %d is: %d\n", num, fact);
	}

    getch();
}
/*
Enter a Number: 5
Factorial of 5 is: 120                                                          
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/