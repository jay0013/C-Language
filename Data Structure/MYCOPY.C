#include<stdio.h>
void main(int argc,char *argv[])
{
   FILE *fp,*ft;
   char ch;
   clrscr();
   if(argc!=3)
   {
      printf("Insufficient argument");
      getch();
      return;
   }
   fp=fopen(argv[1],"r");
   if(fp==NULL)
   {
      printf("\nFile can't open");
      getch();
      return;
   }
   ft=fopen(argv[2],"w");
   if(ft==NULL)
   {
      printf("\nFile can't open");
      getch();
      return;
   }

   ch=fgetc(fp);
   while(ch!=EOF)
   {
      fputc(ch,ft);
      ch=fgetc(fp);
   }
   fclose(fp);
   fclose(ft);
   printf("\nFile copied");
   getch();
}