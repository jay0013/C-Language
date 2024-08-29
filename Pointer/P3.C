#include<stdio.h>
#include<conio.h>
void Swap(int *p1,int *p2)
{
	int tmp;
	tmp=*p1;
	*p1=*p2;
	*p2=tmp;
}
void main()
{
	int no1,no2;
	clrscr();
	printf("Enter any Two value....\n");
	scanf("%d %d",&no1,&no2);
	printf("\nNo1 :- %d And No2 :- %d",no1,no2);
	Swap(&no1,&no2);
	printf("\n\nNo1 :- %d And No2 :- %d",no1,no2);
	getch();
}
/*
Enter any Two value....
22 78

No1 :- 22 And No2 :- 78

No1 :- 78 And No2 :- 22
 */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
