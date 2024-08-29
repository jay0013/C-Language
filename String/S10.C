#include<stdio.h>
#include<conio.h>
#include<string.h>
int Replace(char *s,char *old,char *replace)
{
	char *pos=strstr(s,old);
	char temp[50];
	if(pos!=NULL)
	{
		strcpy(temp,pos+strlen(old));
		strcpy(pos,replace);
		strcat(pos,temp);
	}
	else
		printf("Not Found");
}
void main()
{
	char s[50];
	char find[50],replace[50];
	int pos;
	clrscr();
	printf("Enter the String......");
	gets(s);
	printf("Enter string for serch....");
	gets(find);
	printf("Enter Replace String....");
	gets(replace);
	Replace(s,find,replace);
	puts(s);
	getch();
}