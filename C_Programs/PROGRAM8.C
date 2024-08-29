#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float pi=3.14,r,area;
printf("Enter redius of circle :");
scanf("%f",&r);
area = pi * r * r;
printf("area Of circle id %2f",area);
getch();
}