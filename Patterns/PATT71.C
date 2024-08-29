/*
WAP TO pattern 71;
*/
#include<stdio.h>
#include<conio.h>

void printpattern(int n)
{
 int row,col,count=1;
for(row=1;row<=4;row++)
 {
   for(col=1;col<=row;col++)
   {
    printf(" %d",count);
    count++;
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
23
456
78910
*/