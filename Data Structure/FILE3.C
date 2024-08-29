#include<stdio.h>
#include<string.h>
void main()
{
  char s[80];
  FILE *fp;
  clrscr();
  fp=fopen("xyz.txt","w");
  if(fp==NULL)
  {
    printf("\nFile can't open");
    getch();
    return;
  }
  printf("\nEnter few lines");
  while(strlen(gets(s))>0)
  {
     fputs(s,fp);
     fputs("\n",fp);
  }
  printf("\nData write succussfully");
  fclose(fp);
  fp=fopen("xyz.txt","r");
  if(fp==NULL)
  {
    printf("\nFile can't open");
    getch();
    return;
  }
  printf("\n");
  while(fgets(s,79,fp)!=NULL)
  {
     puts(s);
  }
  fclose(fp);
  getch();
}







