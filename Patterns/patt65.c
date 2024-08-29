/*
WAP to Pattern 65
*/
#include <stdio.h>
#include <conio.h>
int printpattern(int n)
{
    int height,space,i,j,k;
    printf("Enter the height of the triangle: ");
    scanf("%d",&height);
    space=height;
   for( i=1;i<=height;i++)
   {
       for( j=1;j<space;j++)
       {
	   printf(" ");
       }
       for( k=1;k<=2*i-1;k++)
       {
	 printf("*");
       }
       space--;

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


    *
   * *
  * * *
 * * * *
* * * * *

*/