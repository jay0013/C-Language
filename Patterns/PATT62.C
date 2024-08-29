/*
write pattern 76
*/

#include <stdio.h>
#include <conio.h>
void printPattern(int rows)
{
    int num = 1,i,j;

    for ( i = 0; i < rows; i++)
	{
	for (j = 0; j < rows; j++)
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
4   5   6
7   8   9
*/