#include<stdio.h>
#include<conio.h>
#define PI 3.14
void sphere()
{
  volume=(pi*radius*radius*radius*4)/3;
}
void main()
{
 clrscr();
 float radius,volume;
 printf("Enter the radius : \n");
 scanf("%f",&radius);
 sphere();
 printf("volume of sphere %f ",volume);
 getch();
}