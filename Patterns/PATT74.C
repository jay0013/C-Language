/*
WAP to pattern 74;
*/

#include <stdio.h>

void printPattern(int rows)
{
    int i,j;
    for ( i = 1; i <= rows; i++)
    {
	for (j = 1; j <= rows - i + 1; j++)
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

1    2     3    4
1    2     3  
1    2   
1

*/