/*
Write a Program to sum of first N even numbers
Date: 10/8/2023
Author: Jay Chavda 
*/
#include <stdio.h>
#include <conio.h>
// Function to calculate the sum of first N even numbers
int sumOfEvenNumbers(int N)
{
    int i,sum = 0;
    for (i = 1; i <= N; i++)
    {
	sum += 2 * i; // Even numbers are twice the value of 'i'
    }
    return sum;
}

void main()
{
    int N,result;
    clrscr();
    printf("Enter the value of N: ");
    scanf("%d", &N);

    result = sumOfEvenNumbers(N);
    printf("Sum of first %d even numbers is: %d\n", N, result);
    
    getch();
}
/*
Enter the value of N: 5
Sum of first 5 even numbers is: 30                                              
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/