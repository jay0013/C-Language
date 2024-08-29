#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5]={1,2,3,4,5};
	int *p;
	int i,a1;
	clrscr();
	p=a;
	printf("Enter index for change element value...");
	scanf("%d",&a1);
	*(p+a1)=10;
	printf("\nArray element is....\n");
	for(i=0;i<5;i++)
		printf("%5d",p[i]);
	getch();
}