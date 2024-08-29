#include<stdio.h>
#include<conio.h>
#include<string.h>
int CountVovel(char *s)
{
	int i,count=0,len;
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'|| s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'|| s[i]=='o'||s[i]=='u')
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
	printf("Total Vovel is.....%d",CountVovel(s));
	getch();
}