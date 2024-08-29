#include<stdio.h>
#include<conio.h>
typedef struct Player
{
   int id;
   int x:4;
   char type;
   char name[20];
   union Score
   {
      int goal;
      char avgrun[5];
   }score;
}Player;
void Read(Player *p,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("\nEnter Id");
    scanf("%d%",&p[i].id);
    printf("\nEnter Type");
    fflush(stdin);
    p[i].type=getchar();
    printf("\nEnter Name");
    fflush(stdin);
    scanf("%s",p[i].name);
    if(toupper(p[i].type)=='F')
    {
       printf("\nEnter goal");
       scanf("%d",&p[i].score.goal);
    }
    else
    {
       printf("\nEnter Avg run");
       fflush(stdin);
       scanf("%s",p[i].score.avgrun);
    }
  }
}
void Print(Player *p,int n)
{
  int i;
  printf("\nId\t\tType\t\tName\t\tScore");
  for(i=0;i<n;i++)
  {

    printf("\n%d\t\t%c\t\t%s",p[i].id,p[i].type,p[i].name);
    if(toupper(p[i].type)=='F')
    {

       printf("\t\t%d",p[i].score.goal);
    }
    else
    {
       printf("\t\t%s",p[i].score.avgrun);

    }
  }
}
void main()
{
  Player *p;
  int size;
  clrscr();
  printf("\nHow many players you want to add");
  scanf("%d",&size);
  p=(Player *)malloc(size*sizeof(Player));
  Read(p,size);
  Print(p,size);
  getch();
}