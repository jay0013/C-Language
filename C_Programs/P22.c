/*
print all the numbers and sum of all the integers that are greater
*/

#include <stdio.h>
#include <conio.h>
// Function to print numbers and calculate their sum
void printAndSumDivisibleBy7(int start, int end) 
{
    int sum = 0;
    printf("Numbers between %d and %d that are divisible by 7:\n",
start, end);

    for (int num = start; num <= end; num++) 
	{
        if (num % 7 == 0) 
	{
            printf("%d ", num);
            sum += num;
        }
    }

    printf("\nSum of the numbers: %d\n", sum);
}

void main() 
{
    int start = 100;
    int end = 200;
    clrscr();
    printAndSumDivisibleBy7(start, end);

    getch();
}
