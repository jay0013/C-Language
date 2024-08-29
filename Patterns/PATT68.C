/*
WAP TO pattern 68;
*/
#include<stdio.h>
#include<conio.h>

void printpattern(int n)
{
 int row,col,sp;
for(row=5;row>=1;row--)
 {
   for(sp=5-1;sp>=row;sp--)
   {
   printf(" ");
   }
   for(col=1;col<=row;col++)
   {
    printf("%d",row);
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
/*
55555
 4444
  333
   22
    1
*/