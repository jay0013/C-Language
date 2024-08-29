#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void add(struct Node **,int n);
void display(struct Node *);
void main()
{
  struct Node *start=NULL;
//  clrscr();
  add(&start,3);
  add(&start,5);
  add(&start,1);
  
  add(&start,4);
  add(&start,7);
  display(start);
  getch();
}
void add(struct Node **start,int n)
{
    struct Node *tmp,*r;
    tmp=*start;
	r=malloc(sizeof(struct Node));
	r->data=n;
    if(*start==NULL||(*start)->data>n)
    {
		*start=r;
		(*start)->next=tmp;
    }
    else
    {	while(tmp!=NULL)	{
	 if(tmp->data<=n)	 {
		 if(( tmp->next==NULL||tmp->next->data >n))		 {
			 r->next=tmp->next;
			 tmp->next=r;
			 return;		 }	 }
	 tmp=tmp->next;	 }     }
}
void display(struct Node *p)
{
   printf("\n");
   while(p!=NULL)
   {
      printf("%3d",p->data);
      p=p->next;
   }
}
