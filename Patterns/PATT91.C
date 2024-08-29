/*
WAP to print pattern
*/

#include <stdio.h>
#include <conio.h>
void printPattern(int rows) 
{
    char ch = 'a';
    int i,j;
    for ( i = 0; i < rows; i++)
	{
	for (j = 0; j < rows; j++)
	{
	    printf("%-4c", ch);
	    ch++;
	}
	printf("\n");
    }
}

int main()
{
clrscr();
printPattern(3);

    getch();
}
/*
a    b    c
d    e    f
g    h    i
*/