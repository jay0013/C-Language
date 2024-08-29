void PrintNoToWord(int x)
{
   int t;
   char *One[]={" ","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
   char *Tens[]={" ","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninty"};
   char *Other[]={" ","Elevon","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Ninteen"};
   char *Hundred[]={"Hundred","Thousand","Ten Thousand"};
   if(x<10)
   printf("\n%s",One[x]);
   else if(x>=10 && x<20)
   printf("\n%s",Other[x%10]);
   if(x%10==0)
   printf("\n%s",Tens[x%10]);
   if(x>20 && x < 100)
   {
      t=x/10;
     printf("\n%s",Tens[t]);
     printf(" %s",One[x%10]);
   }
   if(x>=100 && x<1000)
   {

   }
}

void main()
{
  int x;
  clrscr();
  printf("\nEnter any number: ");
  scanf("%d",&x);
  PrintNoToWord(x);
  getch();

}