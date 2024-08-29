//#ifdef Swap
//#undef Swap
// #endif
#ifndef
#define Swap(a,b) t=a;\
a=b;\
b=t;
#endif
/*
    20 10
*/
void main()
{
   int a=10,b=20;
   static int t=0;
   clrscr();
   if(a>b)
   Swap(a,b);
   printf("\na= %d and b = %d",a,b);
   getch();
}