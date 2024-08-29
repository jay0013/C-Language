#include<stdio.h>
#include<conio.h>
void Sort(char *s)
{
	int len=strlen(s);
	int i,j;
	char tmp;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(s[i]>s[j])
			{
				tmp=s[i];
				s[i]=s[j];
				s[j]=tmp;
			}
		}
	}
}
void main()
{
	char s[50];
	clrscr();
	printf("\nEnter The String......");
	gets(s);
	Sort(s);
	printf("Sorted String.....%s",s);
	getch();
}