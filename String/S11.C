#include<stdio.h>
#include<conio.h>
void Delete(char *s,char del)
{
	char *read=s;
	char *write=s;
	if(s==NULL)
		return;
	while(*read)
	{
		if(*read!=del)
		{
			*write=*read;
			write++;
		}
		read++;
	}
	*write='\0';
}
void main()
{
	char s[50];
	char del;
	clrscr();
	printf("Enter Any String....");
	gets(s);
	printf("Enter charcter for Delet....");
	scanf("%c",&del);
	Delete(s,del);
	puts(s);
	getch();
}