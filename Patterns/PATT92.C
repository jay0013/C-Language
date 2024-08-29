/*
WAP to print pattern
*/
#include <stdio.h>
#include <conio.h>
void printPattern(int rows)
{
int i,j;
    for (i = 1; i <= rows; i++)
	{
	for ( j = 1; j <= rows - i; j++)
	{
	    printf("    ");
	}
	for ( j = i; j >= 1; j--)
	{
	    printf("%-4d", j);
	}
	for ( j = 2; j <= i; j++)
	{
	    printf("%-4d", j);
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
      1
    2 1 2
  3 2 1 2 3
4 3 2 1 2 3 4

*/