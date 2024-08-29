#include<stdio.h>
#include<conio.h>
#define SIZE 50
void Trim(char *p)
{  char *t,*q;
   int flag;q=t;
   flag=1;
   while(*p==' ')
   p++;
   while(*p!='\0')
   {
      if(*p==' ' && flag==1){
	*t=*p;
	p++;
	t++;
	flag=0;
      }
      else if(*p!=' ')
      {
	 *t=*p;
	 t++;
	 p++;
	 flag=1;
      }
      else
      p++;
   }
   *t='\0';
   t=q;
   puts(t);
}
void ToProper(char *p)
{
   if(*p>='a' && *p<='z')
   {
    *p=*p-32;
    p++;
   }
   else
   p++;
   while(*p!='\0')
   {
      if(*p!=' ')
      {
	  if(*(p-1)==' '&& (*p>='a' && *p<='z'))
	  {
	    *p=*p-32;
	    p++;
	  }
	else if(*(p-1)!=' '&& (*p>='A' && *p<='Z'))
       {
	*p=*p+32;
	p++;
       }
       else
       p++;

      }
      else
      p++;
   }
}
void ToUpper(char *str)
{
    while(*str!='\0')
    {
       if(*str>='a' && *str<='z')
       {
	  *str=*str-32;
       }
       str++;
    }
    *str='\0';
}

void Strcpy(char *des,char *src)
{

     while(*src!='\0')
     {
	*des=*src;
	des++;
	src++;
     }
     *des='\0';
}
void Strcat(char *des,char *src)
{
     while(*des!='\0')
     des++;
     while(*src!='\0')
     {
	*des=*src;
	des++;
	src++;
     }
     *des='\0';
}
int Strlen(char *s)
{
    int length=0;
    while(*s!='\0')
    {
      length++;
      s++;
    }
    return length;
}
void main()
{
  // char str[]={'a','b','c','d'};
//   char str[]={"ABCD"};
   char str[SIZE],str1[SIZE];
   clrscr();
   printf("\nEnter First string");
   gets(str);
   Trim(str);
 //  ToProper(str);
  // printf("\nString in Upper case");
  // puts(str);
   /*
   printf("\nEnter Second string");
   gets(str1);
   Strcat(str,str1);
   printf("\nString after concatination is");
   puts(str);
   printf("\nLength of string is %d",Strlen(str));
   Strcpy(str,str1);
   printf("\nString after copy is");
   puts(str);
   */
   getch();
}