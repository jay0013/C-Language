#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,i,j;
	int **p;
	clrscr();
	printf("Enter Row and Colum....");
	scanf("%d %d",&r,&c);
	p=(int **)malloc(r*sizeof(int *));
	for(i=0;i<r;i++)
	{
		p[i]=(int *)malloc(c*sizeof(int));
	}
	printf("\nEnter Array Element...\n");
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    {
		scanf("%d",&p[i][j]);
	    }
	}
	printf("\nArray Element is....\n");
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
		printf("%5d",p[i][j]);
	    printf("\n");
	}
	getch();
}