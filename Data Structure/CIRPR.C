#include<math.h>
int IsPrime(int x)
{
    int i,sq;
    sq=sqrt(x);
    for(i=2;i<=sq;i++)
     if(x%i==0)
     return 0;
     return 1;
}
int CircularPrime(int no)
{
    int tmp=no,count=0,num,div,rem;
    while(tmp>0)
    {
       count++;
       tmp=tmp/10;
    }
    num=no;
    while(IsPrime(num))
    {

       rem=num%10;
       div=num/10;
       num=pow(10,count-1)*rem+div;

       if(num==no)
       return 1;

    }
    return 0;

}
void main()
{
     clrscr();
    if(CircularPrime(1193))
      printf("\n number is circular prime");
    else
     printf("\n number is not  circular prime");
     getch();

}