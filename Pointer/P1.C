/*print address of variable
03/09/
Rupali*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=10;
	int *p;
	clrscr();
	p=&i;
	printf("\nAddress of i...%x",p);
	getch();
}
/*

Address of i...fff4
*/









