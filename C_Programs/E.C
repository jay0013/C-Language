#include<stdio.h>
#include<conio.h>
void main()
{
 float radius,heigth,pi,volume;
 clrscr();
 printf("Enter the radius :");
 scanf("%f",&radius);
 printf("Enter the heigth :");
 scanf("%f",&heigth);
 volume = pi * radius * radius * heigth;
 printf("The volume of cylinder %f",volume);
 getch();


}