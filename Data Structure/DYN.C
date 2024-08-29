#include<stdlib.h>
void PrintArray(int **p,int row,int col)
{
    int i,j;
    printf("\n");
    for(i=0;i<row;i++)
    {
       for(j=0;j<col;j++)
       {
	printf("%5d",p[i][j]);
       }
       printf("\n");
    }
}
void ReadArray(int **p,int row,int col)
{
    int i,j;
    printf("\n");
    for(i=0;i<row;i++)
    {
       for(j=0;j<col;j++)
       {
	scanf("%5d",&p[i][j]);
       }
    }
}

void main()
{
   int **p,row,col,i;
   clrscr();
   printf("\nEnter row");
   scanf("%d",&row);
   p=(int **)malloc(row*sizeof(int *));
   printf("\nEnter column");
   scanf("%d",&col);
   for(i=0;i<row;i++)
   {
      p[i]=(int *)malloc(col*sizeof(int));
   }

   printf("\nEnter elements of array");
   ReadArray(p,row,col);
   printf("\nElements of array are");
   PrintArray(p,row,col);
   getch();
   for(i=0;i<row;i++)
   {
     free(p[i]);
   }
}