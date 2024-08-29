#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=0;i<=255;i++)
	{
		printf("\n%d :- %c",i,i);
		if(i%25==0 && i!=0)
		getch();
	}
	getch();
}