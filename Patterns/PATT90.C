/*
Wap to print pattern
*/

#include <stdio.h>
#include <conio.h>
void printPattern(int rows)
{
    char ch1 = 'A';
    char ch2 = 'a';
    int i,j;
    for ( i = 0; i < rows; i++)
	{
	for ( j = 0; j < rows; j++)
	{
	    if ((i + j) % 3 == 0)
	    {
	    printf("%-4c", ch1);
	    }
	    else
	    {
		printf("%-4c", ch2);
	    }
	}
	printf("\n");
    }
}

int main()
{
    clrscr();
    printPattern(3);
    getch();
    return 0;
}

/*
A   a   A
a    A   a
A   a    A
*/