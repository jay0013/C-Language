/*
WAP to pattern 75
*/
#include <stdio.h>
#include <conio.h>
void printPattern(int rows) 
{
    int num = 1,i,j;

    for ( i = 1; i <= rows; i++)
{
	for ( j = 1; j <= i - 1; j++)
	{
	    printf("    ");
	}
	for ( j = i; j <= rows; j++)
	{
	    printf("%-4d", num);
	    num++;
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

1   2   3
    5   4 
        6

*/