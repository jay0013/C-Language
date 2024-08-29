/*
WAP to print pattern
*/

#include <stdio.h>
#include <conio.h>

void printPattern(int rows) 
{         int i,j;
    for (i = 0; i < rows; i++)
	{
	for ( j = 0; j < i; j++)
	{
	    printf("    ");
	}
	for ( j = 0; j < rows - i; j++)
	{
	    printf("%-4d", (j + 1) * (j + 1));
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
1 4 9 16 25 
   1 4 9 16
      1 4 9
        1 4 
          1 
*/