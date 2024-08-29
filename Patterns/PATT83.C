/*
WAP TO pattern 83;
*/
#include<stdio.h>
#include<conio.h>

void printpattern(int n)
{
 int row,col,sp;
for(row=1;row<=5;row++)
 {
   for(col=1;col<=5;col++)
   {
    if(row==1||row==5||col==1||col==5)
    printf("$");
    else
    {
     printf(" ");
    }
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