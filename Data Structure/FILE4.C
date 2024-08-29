#include<stdio.h>
#include<conio.h>
int IsPrime(int x)
{
   int i;
   if(x==0 || x==1)
   return 0;
   for(i=2;i<=x/2;i++)
   {
      if(x%i==0)
      return 0;
   }
   return 1;
}
void main()
{
   FILE *fp;
   int i;
   clrscr();
   fp=fopen("prime.txt","w");
   if(fp==NULL)
   {
      printf("\nFile can't open");
      getch();
      return;
   }
   for(i=1;i<=200;i++)
   {
      if(IsPrime(i))
      {
	fprintf(fp,"%5d",i);
      }
   }
   printf("\nData written succussfully\n");
   fclose(fp);
   fp=fopen("prime.txt","r");
   if(fp==NULL)
   {
      printf("\nFile can't open");
      getch();
      return;
   }
   while(fscanf(fp,"%d",&i)!=EOF)
   {
      printf("%5d",i);
   }
   fclose(fp);

   getch();
}










