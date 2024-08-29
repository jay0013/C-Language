#include<stdio.h>
#include<conio.h>
#include<string.h>
int Findpos(char *s,char ch)
{
	int i,count=1,len;
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]==ch)
			return i;
	}
	return 0;
}
void main()
{
	char s[50];
	char ch;
	int pos;
	clrscr();
	printf("Enter the String......");
	gets(s);
	printf("Enter charcter for position....");
	scanf("%c",&ch);
	pos=Findpos(s,ch);
	if(pos==0)
		printf("Charcter Not Found");
	else
		printf("Charcter Found on.....%d",pos);
	getch();
}