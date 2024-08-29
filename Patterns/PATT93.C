/*
WAP to Print pattern
*/
#include <stdio.h>
#include <conio.h>
void printPattern(int rows)
{    int i,j;
    for (i = 0; i < rows; i++)
	{
	for ( j = 0; j < rows - i; j++)
	{
	    printf("* ");
	}
	for ( j = 0; j < 2 * i; j++)
	{
	    printf("  ");
	}
	for ( j = 0; j < rows - i; j++)
	{
	    printf("* ");
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
* * * * * * *
* * *   * * *
* *       * *
*           *
*/