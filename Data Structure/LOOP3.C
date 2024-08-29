int Sum(const int no)
 {
	int counter,sum=0,odd=1;
	for(counter=1;counter<=no;counter++)
	{
	   sum+=odd;
	   odd+=2;
	}
	return sum;
}

void main()
{
   int no;
   clrscr();
   printf("\nEnter any number");
   scanf("%d",&no);
   printf("\nThe sum of first %d number is %d",no,Sum(no));
   getch();



}