/*
WAP to pattern 77
*/
#include <stdio.h>
#include <conio.h>
void printPattern(int rows) 
{
    int j,i,num = rows * (rows + 1) / 2;

    for ( i = 0; i < rows; i++)
	{
	for (j = 0; j < i; j++)
	{
	    printf("       ");
	}
	for (j = i; j < rows; j++)
	{
	    printf("%-7d", num);
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
