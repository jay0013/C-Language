/*  WAP to check whether the given number is prime or not
 Date:17/8/23
 Author: Alok Manke
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
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
    int no;
    char ch;
    do
    {
    clrscr();
   /* printf("\nEnter any number");
    scanf("%d",&no);
    if(IsPrime(no)==-1)
    {
      printf("\n%d is neither prime nor composite",no);
    }
    else if(IsPrime(no)==1)
    {
      printf("\n%d is prime number",no);
    }
    else
    {
      printf("\n%d is composite number",no);
    }
    printf("\nDo you want to continue(Y/N)");
    do{
       ch=getch();
     }while(ch!='Y'&& ch!='y'&&ch!='N' && ch!='n');
    }while(ch!='N' && ch!='n');
    */
    printf("\n");
    for(no=1;no<=200;no++)
    {
       if(IsPrime(no))
       printf("%5d",no);
    }
    getch();
}