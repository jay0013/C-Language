#include<stdio.h>
#include<conio.h> 
float f;
{
    float c;
    c=f;
    return c;
}
void main()
{
clrscr();
float f,c;
printf("put the temprature  :  ");
scanf("%f",&f);
c=(f-32)*5/9;
printf("\n  temprature : %f",c);
getch();
}
