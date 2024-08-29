#include<stdio.h>
#include<conio.h>
void main()
{
 float p,r,n,interest;
 clrscr();
 printf("Enter the value of p :");
 scanf("%f",&p);
 printf("Enter the value of r :");
 scanf("%f",&r);
 printf("Enter the value of n :");
 scanf("%f",&n);
 interest = p * (1+r/100)-p ;
 printf("compound interest is = %f",interest);
 getch();

}