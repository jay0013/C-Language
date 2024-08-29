/*
wap to pattern 70
*/

#include <stdio.h>
#include <conio.h>
int printpattern(const int n)
{
    int i, j;
    for(i=5;i>=1;i--)
    {
	for(j=1;j<=i;j++)
	{
	    printf("*");
	}
	printf("\n");
    }
    return 0;
}
void main()
{
 int n;
 clrscr();
 printpattern(n);
 getch();
}

/*
$$$$$
$$$$
$$$
$$
$
*/