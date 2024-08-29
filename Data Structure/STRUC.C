#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef enum Bool {flase,true}Bool;
typedef struct Student
{
   int rno;
   char name[20];
   int marks;
}Student;
void Menu()
{
   printf("\n1..Read Data");
   printf("\n2..Display Data");
   printf("\n3..Search");
   printf("\n4..Sort");
   printf("\n5..Exit");
   printf("\n\nEnter your choice");
}
void SearchMenu()
{
   printf("\n1..Search by Roll Number");
   printf("\n2..Search by Name");
   printf("\n3..Exit");
   printf("\n\nEnter your choice");
}
void SortMenu()
{
   printf("\n1..Sort by Roll Number");
   printf("\n2..Sort by Name");
   printf("\n3..Exit");
   printf("\n\nEnter your choice");
}
void ReadData(Student *s,int size)
{
   int i;
   for(i=0;i<size;i++)
   {
      printf("\nEnter RollNo , Name, marks");
      scanf("%d%s%d",&s[i].rno,s[i].name,&s[i].marks);
   }

}
void DisplayData(Student *s,int size)
{
   int i;
    printf("\nRollNo\t\tName\t\tMarks");
   for(i=0;i<size;i++)
   {
       printf("\n%d\t\t%s\t\t%d",s[i].rno,s[i].name,s[i].marks);
   }
}
Bool SearchByRollno(Student *s,int size,int rno)
{
   int i=0;
   for(i=0;i<size;i++)
   {
       if(s[i].rno==rno)
       {
	 printf("\n%d\t\t%s\t\t%d",s[i].rno,s[i].name,s[i].marks);
	 getch();
	  return true;
       }
   }
   return false;
}
Bool SearchByName(Student *s,int size,char *nm)
{
   int i=0;
   for(i=0;i<size;i++)
   {
       if(strcmp(s[i].name,nm)==0)
       {
	 printf("\n%d\t\t%s\t\t%d",s[i].rno,s[i].name,s[i].marks);
	 getch();
	 return true;
       }
   }
   return false;
}
void SortByRollno(Student *s,int size)
{
   int i,j;
   Student tmp;
   for(i=0;i<size;i++)
   {
      for(j=0;j<size-i-1;j++)
      {
	  if(s[j].rno>s[j+1].rno)
	  {
	     tmp=s[j];
	     s[j]=s[j+1];
	     s[j+1]=tmp;
	  }
      }
   }
}
void SortByName(Student *s,int size)
{
   int i,j;
   Student tmp;
   for(i=0;i<size;i++)
   {
      for(j=0;j<size-i-1;j++)
      {
	  if(strcmp(s[j].name,s[j+1].name)>0)
	  {
	     tmp=s[j];
	     s[j]=s[j+1];
	     s[j+1]=tmp;
	  }
      }
   }
}
void main()
{
   int ch,srch,stch;
   char nm[20];
   Student *s;
   int size,rno;
   do
   {
     clrscr();
     Menu();
     scanf("%d",&ch);
     switch(ch)
     {
     case 1://Add record
     printf("\nHow many record you want to add");
     scanf("%d",&size);
     s=(Student *)malloc(size*sizeof(Student));
     ReadData(s,size);
     break;
     case 2://Display record
     DisplayData(s,size);
     break;
     case 3://Search record
	do
	{
	   clrscr();
	   SearchMenu();
	   scanf("%d",&srch);
	   switch(srch)
	   {
	   case 1://Serach by rollno
	   printf("\nEnter roll number");
	   scanf("%d",&rno);
	   if(SearchByRollno(s,size,rno)==1)
	      printf("\n%d found",rno);
	   else
	     printf("\n%d not found",rno);
	   break;
	   case 2://Search by name
	   printf("\nEnter Name to search");
	   scanf("%s",nm);
	   if(SearchByName(s,size,nm)==1)
	      printf("\n%s found",nm);
	   else
	     printf("\n%d not found",nm);
	   break;
	   case 3://Exit
	   break;
	   default:
	   printf("\nWrong choice");
	   }
	   if(srch!=3)
	   getch();
	}while(srch!=3);
     break;
     case 4://Sort Record
	do
	{
	   clrscr();
	   SortMenu();
	   scanf("%d",&stch);
	   switch(stch)
	   {
	   case 1://Sort by rollno
	   SortByRollno(s,size);
	   DisplayData(s,size);
	   break;
	   case 2://Sort by name
	   SortByName(s,size);
	   DisplayData(s,size);
	   break;
	   case 3://Exit
	   break;
	   default:
	   printf("\nWrong choice");
	   }
	   if(stch!=3)
	   getch();
	}while(stch!=3);
     break;
     case 5://Exit
     break;
     default:
     printf("\nWrong choice");
     }
     if(ch!=5)
     getch();
   }while(ch!=5);
}