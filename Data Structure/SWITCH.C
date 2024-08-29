int Add(const int no1,const int no2)
{
   return no1+no2;
}
int Sub(const int no1,const int no2)
{
   return no1-no2;
}
int Multi(const int no1,const int no2)
{
   return no1*no2;
}
int Divide(const int no1,const int no2)
{
   return no1/no2;
}
void Menu()
{
   printf("\n1..Add");
   printf("\n2..Subtract");
   printf("\n3..Multiply");
   printf("\n4..Divide");
   printf("\n5..Exit");
   printf("\n\nEnter your choice");
}
void main()
{
   int no1,no2,ch;
   clrscr();
   Menu();
   scanf("%d",&ch);
   if(ch==1)//Add
   {
     printf("\nEnter any two numbers");
     scanf("%d%d",&no1,&no2);
     printf("\nAddition of %d and %d is %d",no1,no2,Add(no1,no2));
   }
   else if(ch==2)//Subtract
   {
     printf("\nEnter any two numbers");
     scanf("%d%d",&no1,&no2);
     printf("\nSubtraction of %d and %d is %d",no1,no2,Sub(no1,no2));

   }
   else if (ch==3)//Multiply
   {
     printf("\nEnter any two numbers");
     scanf("%d%d",&no1,&no2);
     printf("\nMultiplication of %d and %d is %d",no1,no2,Multi(no1,no2));
   }
   else if(ch==4) //Divide
   {
     printf("\nEnter any two numbers");
     scanf("%d%d",&no1,&no2);
     printf("\nDivision of %d and %d is %d",no1,no2,Divide(no1,no2));
   }
   else if(ch==5) //Exit
   {
     exit(0);
   }
   else//Default
   {
     printf("\nWrong Choice");
   }
   getch();

}
