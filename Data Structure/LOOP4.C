/*
    *
    **
    ***
    ****
    *****

    *****
    ****
    ***
    **
    *

	*
       **
      ***
     ****
    *****

   *****
    ****
     ***
      **
       *

    * * * * *
     * * * *
      * * *
       * *
	*

	*
       * *
      * * *
     * * * *
    * * * * *


   1
   2  3
   4  5  6
   7  8  9  10
   11 12 13 14

*/

void PrintStar(int line)
{
    int col,row,sp;
    for(row=1;row<=line;row++)
    {
      for(sp=row;sp<line;sp++)
      {
	printf(" ");
      }
     for(col=1;col<=row;col++)
     {
       printf("*");
     }
     printf("\n");
    }
}

void main()
{
   clrscr();
   PrintStar(5);
   getch();
}