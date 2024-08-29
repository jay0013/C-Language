#include<stdio.h>
#include<conio.h>
void ReadArray(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
}
void PrintArray(int *p ,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%5d",p[i]);
}
void main()
{
	int n;
	int *p;
	clrscr();
	printf("Enter array size....");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	printf("\nEnter Array Element...\n");
	ReadArray(p,n);
	printf("\nArray Element is....\n");
	PrintArray(p,n);
	getch();
}