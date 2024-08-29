/*
wap to pattarn 80;
*/

#include <stdio.h>
#include <conio.h>

int printpattern(int n)
{
    int i, j;
    for(i=1;i<=5;i++)
    {
	for(j=1;j<=i;j++)
	{
	    printf("%c",'A' + j-1);
	}
	printf("\n");
    }
    return 0;
}

void main ()
{
 int n;
 clrscr();
 printpattern(n);
 getch();
}

/*
A
AB
ABC
ABCD
ABCDE
*/