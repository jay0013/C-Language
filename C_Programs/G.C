#include<stdio.h>
#include<conio.h>
void main()
{
 float radius,heigth,pi=3.14,volume;
 clrscr();
 printf("Enter the radius :");
 scanf("%f",&radius);
 printf("Enter the heigth :");
 scanf("%f",&heigth);
 volume = pi * radius * radius * heigth * 1/2;
 printf("The volume of cone %f ",volume);
 getch();
}


