#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct Member
{
   int id;
   char name[20];
   char div[10];
}Member;
typedef enum Bool {false,true}Bool;
typedef struct Book
{
   int id;
   char name[20];
   char author[10];
   int no_of_copies;
}Book;

void Menu()
{
   printf("\n1..Add Record");
   printf("\n2..Display Record");
   printf("\n3..Search Record");
   printf("\n4..Modify Record");
   printf("\n5.Delete Record");
   printf("\n6..Exit");
   printf("\nEnter your choice");
}
void MainBook()
{
  FILE *fp,*ft;
  int ch;
  char nm[20];
  Book m;
  int recsize=sizeof(m);
  Bool openflag=false,searchflag=false;
  do
  {
     clrscr();
     Menu();
     scanf("%d",&ch);
     searchflag=false;
     if(openflag==false)
     {
       fp=fopen("book1.dat","rb+");
       if(fp==NULL)
       {
	 fp=fopen("book.dat","wb+");
	 if(fp==NULL)
	 {
	    printf("\nFile can't open");
	    getch();
	    return;
	 }
       }
     openflag=true;
     }

     switch(ch)
     {
     case 1://Add record
	if(openflag==true)
	{
	  fseek(fp,0,SEEK_END);
	  printf("\nEnter book record");
	  scanf("%d%s%s%d",&m.id,m.name,m.author,&m.no_of_copies);
	  fwrite(&m,recsize,1,fp);
	  printf("\nRecord Added succussfully");
	 }
     break;
     case 2://Display record
     if(openflag==true)
	{
	  rewind(fp);
	  printf("\nId\t\tName\t\tAuthor\t\tNo of Copies");
	  while(fread(&m,recsize,1,fp))
	  {
	   printf("\n%d\t\t%s\t\t%s\t\t%d",m.id,m.name,m.author,m.no_of_copies);
	  }
	}
     break;
     case 3://Search record
     if(openflag==true)
	{
	  rewind(fp);
	  printf("\nEnter name to search");
	  scanf("%s",nm);
	  while(fread(&m,recsize,1,fp))
	  {
	     if(strcmp(nm,m.name)==0)
	     {
	      printf("\n%d\t\t%s\t\t%s\t\t%d",m.id,m.name,m.author,m.no_of_copies);
	       searchflag=true;
	     }
	  }
	  if(searchflag==false)
	  {
	    printf("\nRecord not found");
	  }

	}
     break;
     case 4://Modify record
     if(openflag==true)
	{
	  rewind(fp);
	  printf("\nEnter name to Modify");
	  scanf("%s",nm);
	  while(fread(&m,recsize,1,fp))
	  {
	     if(strcmp(nm,m.name)==0)
	     {
	       fseek(fp,-recsize,SEEK_CUR);
	       printf("\nEnter book record");
	       scanf("%d%s%s%d",&m.id,m.name,m.author,&m.no_of_copies);
	       fwrite(&m,recsize,1,fp);
	       searchflag=true;
	       printf("\nRecord Modified succussfully");
	     }
	  }
	  if(searchflag==false)
	  {
	    printf("\nRecord not found");
	  }

	}
     break;
     case 5://Delete record
      if(openflag==true)
	{
	  rewind(fp);
	  printf("\nEnter name to Delete");
	  scanf("%s",nm);
	  ft=fopen("tmp.dat","wb+");
	  if(ft==NULL)
	  {
	     printf("\nTemp file can't open");
	     getch();
	     return;
	  }
	  while(fread(&m,recsize,1,fp))
	  {
	     if(strcmp(nm,m.name)!=0)
	     {
	       fwrite(&m,recsize,1,ft);
	       searchflag=false;
	     }
	     else
	     {
	       searchflag=true;
	     }
	  }
	  if(searchflag==false)
	  {
	    printf("\nRecord not found");
	  }
	  else
	  {
	     fclose(fp);
	     fclose(ft);
	     remove("book.dat");
	     rename("tmp.dat","book.dat");
	     openflag=false;
	     printf("\nRecord Deleted succussfully");
	  }
	}
     break;
     case 6://Exit
     break;
     default:
     printf("\nWrong choice");
     }
     if(ch!=6)
     getch();
  }while(ch!=6);
}
void MainMember()
{
  FILE *fp,*ft;
  int ch;
  char nm[20];
  Member m;
  int recsize=sizeof(m);
  Bool openflag=false,searchflag=false;
  do
  {
     clrscr();
     Menu();
     scanf("%d",&ch);
     searchflag=false;
     if(openflag==false)
     {
       fp=fopen("mem.dat","rb+");
       if(fp==NULL)
       {
	 fp=fopen("mem.dat","wb+");
	 if(fp==NULL)
	 {
	    printf("\nFile can't open");
	    getch();
	    return;
	 }
       }
     openflag=true;
     }

     switch(ch)
     {
     case 1://Add record
	if(openflag==true)
	{
	  fseek(fp,0,SEEK_END);
	  printf("\nEnter member record");
	  scanf("%d%s%s",&m.id,m.name,m.div);
	  fwrite(&m,recsize,1,fp);
	  printf("\nRecord Added succussfully");
	 }
     break;
     case 2://Display record
     if(openflag==true)
	{
	  rewind(fp);
	  printf("\nId\t\tName\t\tDivision");
	  while(fread(&m,recsize,1,fp))
	  {
	   printf("\n%d\t\t%s\t\t%s",m.id,m.name,m.div);
	  }
	}
     break;
     case 3://Search record
     if(openflag==true)
	{
	  rewind(fp);
	  printf("\nEnter name to search");
	  scanf("%s",nm);
	  while(fread(&m,recsize,1,fp))
	  {
	     if(strcmp(nm,m.name)==0)
	     {
	       printf("\n%d\t\t%s\t\t%s",m.id,m.name,m.div);
	       searchflag=true;
	     }
	  }
	  if(searchflag==false)
	  {
	    printf("\nRecord not found");
	  }

	}
     break;
     case 4://Modify record
     if(openflag==true)
	{
	  rewind(fp);
	  printf("\nEnter name to Modify");
	  scanf("%s",nm);
	  while(fread(&m,recsize,1,fp))
	  {
	     if(strcmp(nm,m.name)==0)
	     {
	       fseek(fp,-recsize,SEEK_CUR);
	       printf("\nEnter member record");
	       scanf("%d%s%s",&m.id,m.name,m.div);
	       fwrite(&m,recsize,1,fp);
	       searchflag=true;
	       printf("\nRecord Modified succussfully");
	     }
	  }
	  if(searchflag==false)
	  {
	    printf("\nRecord not found");
	  }

	}
     break;
     case 5://Delete record
      if(openflag==true)
	{
	  rewind(fp);
	  printf("\nEnter name to Delete");
	  scanf("%s",nm);
	  ft=fopen("tmp.dat","wb+");
	  if(ft==NULL)
	  {
	     printf("\nTemp file can't open");
	     getch();
	     return;
	  }
	  while(fread(&m,recsize,1,fp))
	  {
	     if(strcmp(nm,m.name)!=0)
	     {
	       fwrite(&m,recsize,1,ft);
	       searchflag=false;
	     }
	     else
	     {
	       searchflag=true;
	     }
	  }
	  if(searchflag==false)
	  {
	    printf("\nRecord not found");
	  }
	  else
	  {
	     fclose(fp);
	     fclose(ft);
	     remove("mem.dat");
	     rename("tmp.dat","mem.dat");
	     openflag=false;
	     printf("\nRecord Deleted succussfully");
	  }
	}
     break;
     case 6://Exit
     break;
     default:
     printf("\nWrong choice");
     }
     if(ch!=6)
     getch();
  }while(ch!=6);
}
void MainMenu()
{
   printf("\n1..Member");
   printf("\n2..Book");
   printf("\n3..Issue Book");
   printf("\n4..Return Book");
   printf("\n5..Exit");
   printf("\n\nEnter your choice");
}
void main()
{
   int ch;
   do
   {
     clrscr();
     MainMenu();
     scanf("%d",&ch);
     switch(ch)
     {
     case 1://Member
     MainMember();
     break;
     case 2://Book
     MainBook();
     break;
     case 3://Issue
     break;
     case 4://Return
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