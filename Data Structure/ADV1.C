#include <stdio.h>
#include <stdarg.h>

/* calculate sum of a 0 terminated list */
void sum(char *msg, ...)
{
   int total = 0;
   va_list ap;
   int arg;
   va_start(ap, msg);
   while ((arg = va_arg(ap,int)) != 0) {
      total += arg;
   }
   printf(msg,total);
   va_end(ap);
}
float Avg(int n,...)
{
   int total=0;
   va_list ap;
   int arg;
   va_start(ap,n);
   while ((arg = va_arg(ap,int)) != 0) {
      total += arg;
   }
   va_end(ap);
   return (float)total/n;
}

int main(void)
{
   clrscr();
   sum("The total of 1+2+3+4+5 is %d\n", 1,2,3,4,5,6,7);
   printf("Avg of 1+2+3+4+5 = %g" ,Avg(5,1,2,3,4,5,6,7));
   getch();
   return 0;
}