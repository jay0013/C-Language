/*  WAP to check whether the given number is prime or not
 Date:17/8/23
 Author: Alok Manke
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int LCM(const int x,const int y)
{
    int max=x>y?x:y;
    int i,tmp;
    for(i=1;;i++)
    {
	tmp=max*i;
	if(tmp%x==0 && tmp%y==0)
	return tmp;
    }
}

int Fact(int no)
{
    if(no==1)
    return 1;
    else
    return no*Fact(no-1);
}
int IsArmstrong(int no)
{
   int tmp=no,sum=0,rem;
   while(no>0)
   {
     rem=no%10;
     sum+=rem*rem*rem;
     no=no/10;
   }
   return sum==tmp;
}
int IsPelindrome(int no)
{
   int tmp=no,sum=0,rem;
   while(no>0)
   {
     rem=no%10;
     sum=sum*10+(rem);
     no=no/10;
   }
   return sum==tmp;
}
int IsKrishnamurthy(int no)
{
   int tmp=no,sum=0,rem;
   while(no>0)
   {
     rem=no%10;
     sum+=Fact(rem);
     no=no/10;
   }
   return sum==tmp;
}
int IsPrime(int no)
{
    int counter,root;
    if(no==0 || no==1)
    return -1;
    if(no==2)
    return 1;
    if(no%2==0)
    return 0;
    root=sqrt(no);
    for(counter=3;counter<=root;counter++)
    {
       if(no%counter==0)
       return 0;
    }
    return 1;
}
void main()
{
    int no1 ,no2;
    char ch;
    do
   {
    clrscr();

    printf("\nEnter any two number");
    scanf("%d%d",&no1,&no2);
    printf("\nLCM of %d and %d is %d",no1,no2,LCM(no1,no2));
    printf("\nDo you want to continue(Y/N)");
    do{
       ch=getch();
     }while(ch!='Y'&& ch!='y'&&ch!='N' && ch!='n');
    }while(ch!='N' && ch!='n');

    /*
    printf("\n");
    for(no=1;no<=1000;no++)
    {
       if(IsArmstrong(no))
       printf("%5d",no);
    }
    getch();
   */

}