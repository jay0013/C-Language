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
void Sort(int *p,int n)
{
	int i,j,tmp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(p[j]>p[j+1])
			{
			   tmp=p[j];
			   p[j]=p[j+1];
			   p[j+1]=tmp;
			}
		}
	}
}
void main()
{
	int n;
	int a[20];
	int *p;
	clrscr();
	printf("Enter array size....");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	printf("\nEnter Array Element...\n");
	ReadArray(&a,n);
	printf("\nArray Element is....\n");
	PrintArray(&a,n);
	Sort(&a,n);
	printf("\nAfter sort Array Element is....\n");
	PrintArray(&a,n);
	getch();
}