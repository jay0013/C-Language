   void PrintNumber(const int start,const int end,const int ch,const int inc)
   {
      int counter;
      printf("\n");
      if(start<end && ch==1)
      {
	for(counter=start;counter<=end;counter=counter+inc)
	{
	 printf("%5d",counter);
	}
      }
      else if(start>end && ch==2)
      {
	 for(counter=start;counter>=end;counter=counter-inc)
	{
	 printf("%5d",counter);
	}
      }
      else
      {
	 printf("\nWronng choice");
      }
   }
void Menu()
{
   printf("\n1..Incremenrt");
   printf("\n2..Decrement");
   printf("\n\nEnter your choice");
}
void main()
{
   int start,end,ch,inc;
   clrscr();
   Menu();
   scanf("%d",&ch);
   printf("\nEnter value of increment or decrement");
   scanf("%d",&inc);
   printf("\nEnter starting number");
   scanf("%d",&start);
   printf("\nEnter ending number");
   scanf("%d",&end);
   PrintNumber(start,end,ch,inc);
   getch();



}