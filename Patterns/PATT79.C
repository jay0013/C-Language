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
	if (i % 2 == 1)
	{
	    for ( j = 1; j <= i; j++)
		{
		printf("%-3d", j);
		}
	}
	else
	{
	    char ch = 'A';
	    for ( j = 1; j <= i; j++)
		{
		printf("%-3c", ch);
		ch++;
		}
	}
	printf("\n");
    }
}

void main()
{
    clrscr();
    printPattern(5);

    getch();
}

/*
1                   
A B
1 2 3 
A B C D 
1 2 3 4 5 
*/