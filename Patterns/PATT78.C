/*
WAP to print pattern
*/
#include <stdio.h>
#include <conio.h>
void printPattern(int rows)
{
    int i,j;
    for ( i = 1; i <= rows; i++)
	{
	for ( j = 1; j <= i; j++)
	{
	    printf("%-3d", j);
	}
	for ( j = 1; j <= 2 * (rows - i); j++)
	{
	    printf("   ");
	}
	for ( j = i; j >= 1; j--)
	{
	    printf("%-3d", j);
	}
	printf("\n");
    }
}

void main()
{
    clrscr();
    printPattern(4);
    getch();
}
/*
1           1
1 2       2 1
1 2 3   3 2 1 
1 2 3 4 3 2 1 
*/