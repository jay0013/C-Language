#include<stdio.h>
#include<conio.h>

void main()
{
  FILE *fp;
  char ch;
  int chr=0,line=1;
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
      chr++;
      if(ch=='\n')
      line++;
      printf("%c",ch);
      ch=fgetc(fp);
  }
  fclose(fp);
  printf("\nTotal number of characters are %d",chr);
  printf("\nTotal number of lines are %d",line);
  getch();
}