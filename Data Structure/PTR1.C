#define ROW 3
#define COL 3
int Add(int x,int y)
{
   return x+y;
}
int Sub(int x,int y)
{
   return x-y;
}
void main()
{

     int (*fp)(int,int);
     int (*ft[2])(int,int);
     int i;
     ft[0]=Add;
     ft[1]=Sub;
     clrscr();
     for(i=0;i<2;i++)
     printf("\nResult is %d",(ft[i])(20,10));
   /*
   int i,j;
   int A[ROW][COL]={
		     {1,2,3},
		     {4,5,6},
		     {7,8,9}
		   };
   int (*p)[COL],**q;
   p=A;
   clrscr();
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
	//printf("%5d",p[i][j]);
	//printf("%5d",*(p[i]+j));
	//printf("%5d",(*(p+i))[j]);
	printf("%5d",*(*(p+i)+j));
      }
      printf("\n");
   }
   */
   getch();

}
