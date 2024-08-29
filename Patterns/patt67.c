/*
print this pattern 67
*/
#include <stdio.h>
#include <conio.h>
void printPattern(int n) 
{
    for (int i = 1; i <= n; i++) 
{
        // Print spaces
        for (int j = 1; j <= n - i; j++) 
	{
            printf("  ");
        }

        // Print numbers
        for (int j = 1; j <= i; j++) 
	{
            printf("%d", i);
            if (j < i) 
	    {
                printf(" ");
            }
        }

        printf("\n");
    }
}

void main() 
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printPattern(rows);

    getch();
}