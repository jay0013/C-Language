/* WAP to find sum of digits
   Date : 9/8/23
   Author: Alok Manke
*/
/*
     Algorithm
     Start
     Read no
     while no>0
     rem=no mod 10
     sum=sum+rem
     no=no/10
     end while
     Print sum
     End
*/
int SumOfDigit(int no)
{
   int sum=0;
   while(no>0)
   {
     sum=sum+no%10;
     no=no/10;
   }
   return sum;

}
void main()
{
  int no;
  char ch;
  do
  {
    clrscr();
    printf("\nEnter any number");
    scanf("%d",&no);
    printf("\nSum of Digits of %d is %d",no,SumOfDigit(no));
    printf("\nDo you want to continue(Y/N)");
    do
    {
     ch=getch();
    }while(ch!='n'&& ch!='N'&& ch!='Y'&& ch!='y');
  }while(ch!='n'&& ch!='N');
}