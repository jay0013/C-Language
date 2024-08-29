#include<stdio.h>
#include<conio.h>
void main()
{
  char ans='Y';
  int *p,i=0,*np,j;
  int sum=0;
  int size;
  clrscr();
  printf("\nEnter size");
  scanf("%d",&size);
  p=(int *)malloc(size*sizeof(int));
  while(toupper(ans)=='Y')
  {
       if(i<size)
       {
	  printf("\nEnter number");
	  scanf("%d",&p[i]);
	  sum+=p[i];
	  i++;
       }
       else
       {
		size= size*2;
	  np=(int *)realloc(p,size*2*sizeof(int));
	  p=np;
       }
       printf("\nDo u want to continue");
       fflush(stdin);
       ans=getchar();
  }
  printf("\n");
  for(j=0;j<i;j++)
  printf("%5d",p[j]);
  printf("\nSum is %d",sum);
  getch();

}