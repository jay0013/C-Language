/*
wap to pattern 84;
*/

#include <stdio.h>
#include <conio.h> 
int printpattern(int n)
{
 
    int i, j, k, l, rows;
 
    printf("Enter V Shape Star Pattern Rows = ");
    scanf("%d", &rows);
 
    printf("Printing V Shape Star Pattern\n");
    i = 1;
    while (i <= rows)
    {
        j = 1;
        while (j <= i)
        {
            printf("*");
            j++;
        }
        k = 1;
        while (k <= 2 * (rows - i))
        {
            printf(" ");
            k++;
        }
        l = 1;
        while (l <= i)
        {
            printf("*");
            l++;
        }
        printf("\n");
        i++;
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