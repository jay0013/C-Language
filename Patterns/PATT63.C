/*
WAP TO pattern 63;
*/
#include<stdio.h>
#include<conio.h>

void printpattern(int n)
{
 int row,col,sp;
for(row=1;row<=5;row++)
 {
  for(sp=row;sp<=5;sp++)
   {
   printf(" ");
   }
   for(col=1;col<=row;col++)
   {
    printf("*");
   }
  printf("\n");
 }

}

void main ()
{
 int n;
 clrscr();
 printpattern(n);
 getch();
}