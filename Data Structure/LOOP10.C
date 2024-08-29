#define SIZE 50

int LinearSearch(int arr[],int size,int item)
{
    int counter;
    for(counter=0;counter<size;counter++)
    {
	if(arr[counter]==item)
	 return counter+1;
    }
    return 0;
}
int Maximum(int arr[],int size)
{
    int counter,max=arr[0];
    for(counter=0;counter<size;counter++)
    {
	if(arr[counter]>max)
	 max=arr[counter];
    }
    return max;
}
void ReadArray(int arr[],int size)
{
   int counter;
   for(counter=0;counter<size;counter++)
   {
     scanf("%d",&arr[counter]);
   }
}
void PrintArray(int arr[],int size)
{
   int counter;
   printf("\n");
   for(counter=0;counter<size;counter++)
   {
     printf("%5d",arr[counter]);
   }
}
void main()
{
   int size,item,position;
   //int arr[]={1,2,3,4,5,6};//initilization of array
   int arr[SIZE];
   do
   {
    clrscr();
    printf("\nEnter size of array");
    scanf("%d",&size);
    if(size>SIZE || size<1)
    {
     printf("\nPls Enter size between 0 to 50");
     getch();
    }
   }while(size>SIZE || size<1);
   printf("\nEnter %d elements of array\n",size);
   ReadArray(arr,size);
   printf("\nThe elements of array\n");
   PrintArray(arr,size);
   printf("\nMaximum number is %d",Maximum(arr,size));
   printf("\nEnter number for search");
   scanf("%d",&item);
   position=LinearSearch(arr,size,item);
   if(position>0)
   printf("\n%d found in %d position",item,position);
   else
   printf("\n%d not found in array",item);


   getch();
}