#include<stdio.h>
#include<conio.h>
#include<string.h>
int Strlen(char *s)
{
	int l=0;
	while(*s!='\0')
	{
		l++;
		s++;
	}
	return l;
}
void main()
{
	char str[50];
	clrscr();
	printf("Enter Any String....");
	gets(str);
	printf("String Lenght using Bulit in function...%d",strlen(str));
	printf("\nString Lenght using User define function...%d",Strlen(str));
	getch();
}