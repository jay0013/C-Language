/*
WAP TO pattern 1;
*/
#include<stdio.h>
#include<conio.h>

void printpattern(int n)
{
 int i,j;
for(i=1;i<=5;i++)
 {
  for(j=1;j<=5;j++)
   {
   printf("  %d",j);
   }
  printf("\n");
 }

}

void main ()
{
 clrscr();
 printpattern(5);
 getch();
}