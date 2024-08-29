#include<stdio.h>
#include<conio.h>

void main()
{
  FILE *fp;
  char ch;
  clrscr();
  fp=fopen("union.c","r");
  if(fp==NULL)
  {
    printf("\nFile can't open");
    getch();
    return;
  }
  ch=fgetc(fp);
  while(ch!=EOF)
  {
      printf("%c",ch);
      ch=fgetc(fp);
  }
  fclose(fp);
  getch();
}