#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct LinkedList
{
   int data;
   struct LinkedList *next;
}List;
void Menu()
{
   printf("\n1..Append");
   printf("\n2..Add at Begining");
   printf("\n3..Add Between");
   printf("\n4..Delete");
   printf("\n5..Search");
   printf("\n6..Reverse");
   printf("\n7..Display");
   printf("\n8..Exit");
   printf("\n\nEnter your choice");
}
void AddAtBeg(List **start,int n)
{
    List *tmp;
    tmp=malloc(sizeof(List));
    tmp->data=n;
    tmp->next=*start;
    *start=tmp;
}
void Reverse(List **start)
{
  List *q,*r,*s;
  q=*start;
  r=NULL;
  while(q!=NULL)
  {
      s=r;
      r=q;
      q=q->next;
      r->next=s;
  }
  *start=r;
}
void AddBetween(List *start,int loc,int n)
{
    int i;
    List *r,*tmp;
    tmp=start;
    for(i=1;i<loc;i++)
    {
	 if(tmp==NULL)
	 {
	   printf("\nInvalid location");
	   getch();
	   return;
	 }
	 tmp=tmp->next;
    }
    r=malloc(sizeof(List));
    r->data=n;
    r->next=tmp->next;
    tmp->next=r;
}
void Append(List **start,int n)
{
    List *tmp,*r;
    tmp=malloc(sizeof(List));
    tmp->data=n;
    tmp->next=NULL;
    if(*start==NULL)
    {
       *start=tmp;
       return;
    }
    r=*start;
    while(r->next!=NULL)
    {
       r=r->next;
    }
    r->next=tmp;
}
void Delete(List **start,int n)
{
   List *tmp,*old;
   tmp=*start;
   while(tmp!=NULL)
   {
       if(tmp->data==n)
       {
	   if(tmp==*start)
	   *start=(*start)->next;
	   else
	   old->next=tmp->next;
	   free(tmp);
	   return;
       }
       old=tmp;
       tmp=tmp->next;
   }
   printf("\n%d not found in the List");
}
void Display(List *start)
{
    printf("\n");
    while(start!=NULL)
    {
      if(start->next!=NULL)
      printf("%5d|%X->",start->data,start);
      else
      printf("%5d|%X",start->data,start->next);
      start=start->next;
    }
}
void main()
{
  List *start=NULL;
  int n,ch,loc;
  do
  {
      clrscr();
      Menu();
      scanf("%d",&ch);
      switch(ch)
      {
      case 1://Append
      printf("\nEnter data");
      scanf("%d",&n);
      Append(&start,n);
      break;
      case 2://Add at begining
      printf("\nEnter data");
      scanf("%d",&n);
      AddAtBeg(&start,n);
      break;
      case 3://Add between
      printf("\nEnter data");
      scanf("%d",&n);
      printf("\nEnter location");
      scanf("%d",&loc);
      AddBetween(start,loc,n);
      break;
      case 4://Delete
      printf("\nEnter Data for Delete");
      scanf("%d",&n);
      Delete(&start,n);
      break;
      case 5://search
      break;
      case 6://Reverse
      break;
      case 7://Display
      Display(start);
      break;
      case 8://Exit
      break;
      default:
      printf("\nWrong choice");
      }
      if(ch!=8)
      getch();
  }while(ch!=8);
}