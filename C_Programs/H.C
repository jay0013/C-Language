#include<stdio.h>
#include<conio.h>
#define PI 3.14

float SurFace(float radius)
{
float A;
A=PI*radius*radius*4;
return A;
}
void main()

{
  float  radius,A;
  clrscr();
  printf("Enter the radius  :");
  scanf("%f",&radius);
  A=SurFace(radius);
  printf("The surface area=%g",A);
  getch();
}