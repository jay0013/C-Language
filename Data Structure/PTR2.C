void Swap(int x,int y)
{
   int t;
   t=x;
   x=y;
   y=t;
   printf("\nIn swapping x= %d y= %d",x,y);
}
void main()
{
   int x=10,y=20;
   clrscr();
   printf("\nBefore swapping x= %d y= %d",x,y);
   Swap(x,y);
   printf("\nAfter swapping x= %d y= %d",x,y);
   getch();
}