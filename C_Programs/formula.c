/*WAP to sum from 1 to given Number*/
#include <stdio.h>
#include <conio.h>
// Function to calculate the sum using a for loop
int sumUsingLoop(int n) 
{
    int i,sum = 0;
    for (i = 1; i <= n; i++) 
	{
        sum += i;
    	}
    return sum;
}

void main() {
    int num,sumFormula,sumLoop;
    clrscr();
    printf("Enter a Number:");
    scanf("%d", &num);

    if (num < 1)
{
	printf("Please enter a Number.\n");
	}
	else
	{
	// Calculate sum using formula n(n+1)/2

	 sumFormula = num * (num + 1) / 2;

	// Calculate sum using loop

	 sumLoop = sumUsingLoop(num);

	printf("Sum using formula: %d\n", sumFormula);
	printf("Sum using loop: %d\n", sumLoop);
	}

    getch();
}
/*
Enter a Number:10
Sum using formula: 55                                                           
Sum using loop: 55                                                              
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/