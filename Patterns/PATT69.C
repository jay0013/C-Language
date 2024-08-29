/*
WAP TO pattern 69;
*/
#include<stdio.h>
#include<conio.h>

void printpattern(int n)
{
 int row,col,sp;
for(row=1;row<=5;row++)
 {
   for(sp=1;sp<row;sp++)
   {
   printf(" ");
   }
   for(col=row;col<=5;col++)
   {
    printf("$");
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
$$$$$
 $$$$
  $$$
   $$
    $
*/