#include<stdio.h>
#include<conio.h>
void Area(float base,float height)
{
 area=base*height*1/2;
}
void main()
{
  clrscr();
  float base,height,area;
  printf("Enter the base :");
  scanf("%f",&base);
  printf("Enter the height :");
  scanf("%f",&height);
  Area(base,height);
  printf("area of the %f",Area);
  getch();
}