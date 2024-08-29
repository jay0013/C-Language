/*
WAP to sum of first five number
*/
#include <stdio.h>
#include <conio.h>
// Function to calculate the sum of first 'n' numbers
int calculateSum(int n)
{
    int i,sum;
    sum=0;
    for (i=1;i<=n;i++)
    {
	sum+=i;
    }
    return sum;
}

void main()
{
    int u,sum;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate and print the sum of the first 5 numbers
    sum = calculateSum(n);
    printf("Sum of the first %d numbers is: %d\n",n, sum);

    getch();
}
