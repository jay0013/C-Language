#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct Poly
{
  int coff,exp;
  struct Poly *next;
}Poly;
void Add(Poly **start,int c,int e)
{
    Poly *tmp,*r;
    tmp=*start;
    r=malloc(sizeof(struct Poly));
    r->coff=c;
    r->exp=e;
    if(*start==NULL||(*start)->exp<e)
    {
		*start=r;
		(*start)->next=tmp;
    }
    else
    {	while(tmp!=NULL)
	{
	 if(tmp->exp>=e)
	 {
		 if(( tmp->next==NULL||tmp->next->exp <e))
		 {
			 r->next=tmp->next;
			 tmp->next=r;
			 return;
		 }
	 }
	 tmp=tmp->next;
	}
    }
}
void Append(Poly **start,int c,int e)
{
   Poly *tmp,*r;
   tmp=malloc(sizeof(Poly));
   tmp->coff=c;
   tmp->exp=e;
   tmp->next=NULL;
   if(*start==NULL)
   {
       *start=tmp;
       return;
   }
   r=*start;
   while(r->next!=NULL)
   r=r->next;
   r->next=tmp;
}
void Addition(Poly *p,Poly *q,Poly **r)
{
     if(p==NULL && q==NULL)
     {
	printf("Invalid operation");
	getch();
	return;
     }
     while(p!=NULL && q!=NULL)
     {
	 if(p->exp > q->exp)
	 {
	    Append(r,p->coff,p->exp);
	    p=p->next;
	 }
	 else if(p->exp < q->exp)
	 {
	    Append(r,q->coff,q->exp);
	    q=q->next;
	 }
	 else
	 {
	    Append(r,q->coff+p->coff,q->exp);
	    q=q->next;
	    p=p->next;
	 }
     }
     while(p!=NULL)
     {
       Append(r,p->coff,p->exp);
       p=p->next;
     }
     while(q!=NULL)
     {
       Append(r,q->coff,q->exp);
       q=q->next;
     }
}
void Display(Poly *start)
{
     printf("\n");
     while(start!=NULL)
     {
	 if(start->coff>0)
	 printf("%dx^%d+",start->coff,start->exp);
	 else
	 printf("%dx^%d+",start->coff,start->exp);
	 start=start->next;
     }
     printf("\b=0");
}
void main()
{
   Poly *start1=NULL,*start2=NULL,*start3=NULL;
   clrscr();
   Add(&start1,6,0);
   Add(&start1,4,2);
   Add(&start1,2,3);
   Add(&start1,5,1);

   Add(&start2,7,0);
   Add(&start2,2,2);
   Add(&start2,8,1);
   Add(&start2,5,3);


   Addition(start1,start2,&start3);
   Display(start1);
   Display(start2);
   Display(start3);
   getch();
}
