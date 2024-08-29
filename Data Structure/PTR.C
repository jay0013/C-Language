void main()
{
   int a[]={1,2,3,4};
   int *p,**q,***k;
   int t;
   clrscr();
   p=(int *)&i;
   q=&p;
   k=&q;
   printf("\nAddress of i = %X",&i);
   printf("\nvalue of i = %f",i);
   printf("\nValue of p = %X",p);
   printf("\nAddress of p = %X",&p);
  // printf("\nValue of *p = %d",*p);
   printf("\nValue of q = %X",q);
   printf("\nAddress of q = %X",&q);
   printf("\nValue of *q = %X",*q);
  // printf("\nValue of **q = %f",(float *)**q);
   printf("\nValue of k = %X",k);
   printf("\nAddress of k = %X",&k);
   printf("\nValue of *k = %X",*k);
   printf("\nValue of **k = %X",**k);
  // printf("\nValue of ***k = %f",(float *)***k);
   printf("\nsize of p = %d",sizeof(p));
   printf("\nsize of q = %d",sizeof(q));
   printf("\nsize of k = %d",sizeof(k));
   getch();
}