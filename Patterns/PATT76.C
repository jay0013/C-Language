/*
WAP to pattern 76
*/
#include <stdio.h>
#include <conio.h>
void printPattern(int rows) 
{
    int num = rows * rows,i,j;

    for ( i = 0; i < rows; i++)
{
	for (j = 0; j < rows; j++)
	{
	    printf("%-4d", num);
	    num--;
	}
	printf("\n");
    }
}

void main()
{
	clrscr();
	printPattern(3);
	getch();
}

/*
9   8   7 
6   5   4
3   2   1

*/