/*
WAP to Pattern 65
*/
#include <stdio.h>
#include <conio.h>
int printpattern(int n)
{
    int height,space,i,j,k,count;
    printf("Enter the height of the triangle: ");
    scanf("%d",&height);
    space=height;
   for( i=1;i<=height;i++)
   {

       for( k=1;k<=2*i-1;k++)
       {
	 printf("%d",k);
	 k++;
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
1
13
135
1357
*/