#include<stdio.h>
#define ROW 10
#define COL 20

char * Strstr(char *input,char *pat)
{
   char *p1,*p2,*start;
   for(start=input;*start!='\0';start++)
   {
       p1=pat;
       p2=start;
       while(*p1!='\0')
       {
	   if(*p1!=*p2)
	   break;
	   p1++;
	   p2++;
       }
       if(*p1=='\0')
       return start;
   }
   return NULL;
}
int Strcomp(char *s , char *t)
{
    for(;*s==*t;s++,t++)
    if(*s=='\0')
    return 0;
    return *s-*t;
}
void Strrev(char *s)
{
   int len;
   char *p,*t,tmp,*q;
   len=strlen(s);
   p=s;
   q=p;
   t=s+len-1;
   while(p<t)
   {
      tmp=*p;
      *p=*t;
      *t=tmp;
      p++;
      t--;
   }
   puts(q);
}
void Sort(char str[ROW][COL],int size)
{
      int i,j;
      char *tmp;
      for(i=0;i<size;i++)
      {
	 for(j=0;j<size-i-1;j++)
	 {
	    if(Strcomp(str[j],str[j+1])>0)
	    {
	       strcpy(tmp,str[j]);
	       strcpy(str[j],str[j+1]);
	       strcpy(str[j+1],tmp);
	    }
	 }
      }
}
void main()
{
   char s[]={"Worl"};
   char t[]={"Hello World"};
   char str[ROW][COL];
   int size,i;
   clrscr();
   printf("\nHow many name you want to sort");
   scanf("%d",&size);
   for(i=0;i<size;i++)
   {
   fflush(stdin);
   gets(str[i]);
   }

   Sort(str,size);
   printf("\nName after sorting\n");
   for(i=0;i<size;i++)
   puts(str[i]);


   /*
   Strrev(t);

   if(Strcomp(s,t)==0)
   {
      printf("%s and %s are equal",s,t);
   }
   else if(Strcomp(s,t)>0)
   {
      printf("%s > %s ",s,t);
   }
   else
   {
      printf("%s < %s ",s,t);
   }
   */
   getch();
}