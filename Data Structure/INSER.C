void PrintArray(int a[],int n)
{
   int i;
   printf("\n");
   for(i=0;i<n;i++)
   {
     printf("%5d",a[i]);
   }
}
void ReadArray(int a[],int n)
{
   int i;
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
}
void Sort(int a[],int size)
{
   int i,j,tmp;
   for(i=0;i<size-1;i++)
   {
      for(j=0;j<size-i-1;j++)
      {
	   if(a[j]>a[j+1])
	   {
	      tmp=a[j];
	      a[j]=a[j+1];
	      a[j+1]=tmp;
	   }
      }
   }
}
void Insert(int a[],int size,int pos,int item)
{
   int j=size;
   while(j!=pos-1)
   {
      a[j]=a[j-1];
      j--;
   }
   a[pos-1]=item;

}
void main()
{
   int a[50],size;
   clrscr();
   printf("\nEnter size");
   scanf("%d",&size);
   printf("\nEnter %d elements ",size);
   ReadArray(a,size);
   printf("\nElements of array before sorting");
   PrintArray(a,size);
   Sort(a,size);
    printf("\nElements of array after sorting");
   PrintArray(a,size);
   getch();

}






