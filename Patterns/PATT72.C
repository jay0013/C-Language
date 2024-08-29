/*
WAP TO pattern 72;
*/
#include<stdio.h>
#include<conio.h>

void printpattern(int n)
{
 int row,col,sp;
for(row=1;row<=5;row++)
 {
   for(col=1;col<=row;col++)
   {
    printf("%d",col);
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
1
12
123
1234
*/