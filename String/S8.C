#include<stdio.h>
#include<conio.h>
#include<string.h>
int CountVovel(char *s)
{
	int i,count=1,len;
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]==' '||s[i]=='\n')
			count++;
	}
	return count;
}
void main()
{
	char s[50];
	clrscr();
	printf("Enter the String......");
	gets(s);
	printf("Total Word is.....%d",CountVovel(s));
	getch();
}