#include<stdlib.h>
void main(int argc,char *argv[])
{
    int i,x;
    clrscr();
    for(i=0;i<argc;i++)
    {
       //printf("\nargv[%d]=%s",i,argv[i]);
	x=atoi(argv[i+1]);
       if(x%2==0)
       printf("%5d",x);
    }
    getch();
}