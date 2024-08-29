/*
wap to pattern 73
*/

#include <stdio.h>
#include <conio.h>
void printPattern(int rows) 
{
    int n = 1,i,j;

    for ( i = 1; i <= rows; i++)
{
	for (j = 1; j <= rows - i + 1; j++)
{
	    printf("%-4d", n);
	    n++;
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

