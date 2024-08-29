   void PrintTable(const int no,const int end)
   {
	int counter;
	for(counter=1;counter<=end;counter=counter++)
	{
	 printf("%d * %d  = %d",no,counter,no*counter);
	}
   }

void main()
{
   int no,end;
   clrscr();
   printf("\nEnter any number to print its table");
   scanf("%d",&no);
   printf("\nEnter ending number");
   scanf("%d",&end);
   PrintTable(no,end);
   getch();



}