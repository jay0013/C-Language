#include<stdio.h>
#include<conio.h>
void leap(int n)
{
   if((n%4==0 && n%100!=0)||n%400==0)
   {
   printf("%d is leap year",n);
   }
   else
   {
   printf("%d is not leap year. \n",n);
   }
}
void main()
{
    int n;
    clrscr();
    printf("Enter year :");
    scanf("%d",&n);
    leap(n);
    getch();
}


