/*
WAP TO pattern 86;
*/
#include <stdio.h>
#include <conio.h>
int printpattern(const int n)
{
    int i,j;
    char ch;
    for (i = 5; i >= 1; i--) {
	// Print spaces
	for ( j = 1; j <= 5 - i; j++) {
	    printf(" ");
	}

	// Print characters
	for ( ch = 'a'; ch <= 'a' + i - 1; ch++)
	{
	    printf("%c ", ch);
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