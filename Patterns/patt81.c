/*
write a pattern 81;
*/

// C program to print full
// diamond shape pyramid
#include <stdio.h>
#include <conio.h>
// Prints diamond pattern
void printDiamond(int n)
{
	int space = n - 1;

	// Run loop till the number
	// of rows
	for (int i = 0; i < n; i++)
	{
		// Loop for the initially space
		// before the star printing
		for (int j = 0; j < space; j++)
			printf(" ");

		// Print the i+1 stars
		for (int j = 0; j <= i; j++)
			printf("* ");

		printf("\n");
		space--;
	}

	// Repeat again in the reverse order
	space = 0;

	// run a loop till number of rows
	for (int i = n; i > 0; i--)
	{
		// Loop for the initially space
		// before the star printing
		for (int j = 0; j < space; j++)
			printf(" ");

		// Print the i stars
		for (int j = 0; j < i; j++)
			printf("* ");

		printf("\n");
		space++;
	}
}


void main()
{
	clrscr();
        printDiamond(6);
	getch();
}

    *
   * *
  * * *
 * * * *
* * * * * 
 * * * * 
  * * * 
   * * 
    *