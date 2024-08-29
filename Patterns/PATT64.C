/*
WAP TO pattern 64;
*/
#include<stdio.h>
#include<conio.h>

void printpattern(int n)
{
 int row,col;
for(row=1;row<=5;row++)
 {
  for(col=1;col<=row;col++)
   {
   printf("* ");
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