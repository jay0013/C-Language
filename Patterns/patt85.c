/*
WAP to pattern 85;
*/

#include <stdio.h>
#include <conio.h>

int binomialCoeff(int n, int k)
{
    if (k == 0 || k == n) {
	return 1;
    }
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}

void printPascalTriangle(int rows)
{
	int i,j;
    for ( i = 0; i < rows; i++) {
	// Print spaces
	for ( j = 0; j < rows - i - 1; j++) {
	    printf(" ");
	}

	// Print elements
	for (j = 0; j <= i; j++) {
	    printf("%d ", binomialCoeff(i, j));
	}

	printf("\n");
    }
}

void main() {
    int rows;
    clrscr();
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printPascalTriangle(rows);

    getch();
}
