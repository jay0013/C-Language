#define PI 3.14
float AreaOfCircle(const float radius)
{
  return PI*radius*radius;
}
float AreaOfTriangle(const float base,const float height)
{
   return (base*height)/2;
}
void MainMenu()
{
   printf("\n1..Area");
   printf("\n2..Volume");
   printf("\n3..Intrest");
   printf("\n4..Exit");
   printf("\n\nEnter your choice");
}
void AreaMenu()
{
   printf("\n1..Area of Circle");
   printf("\n2..Area of Triangle");
   printf("\n3..Exit");
   printf("\n\nEnter your choice");
}
void VolumeMenu()
{
   printf("\n1..Volume of Sphere");
   printf("\n2..Volume of Cylinder");
   printf("\n3..Exit");
   printf("\n\nEnter your choice");
}
void InterstMenu()
{
   printf("\n1..Simple Interest");
   printf("\n2..Compund Inerest");
   printf("\n3..Exit");
   printf("\n\nEnter your choice");
}

void main()
{
    int ch,ach,vch,ich;
    float base,height,radius;
    do
    {
       clrscr();
       MainMenu();
       scanf("%d",&ch);
       switch(ch)
       {
       case 1://Area
       do
       {
	 clrscr();
	 AreaMenu();
	 scanf("%d",&ach);
	 switch(ach)
	 {
	 case 1://circle
	  printf("\nEnter radius");
	  scanf("%f",&radius);
	  printf("\nArea of Circle = %g",AreaOfCircle(radius));
	 break;
	 case 2://Triangle
	  printf("\nEnter base and height of Triangle");
	  scanf("%f%f",&base,&height);
	  printf("\nArea of Triangle = %g",AreaOfTriangle(base,height));
	 break;
	 case 3://Exit
	 break;
	 default:
	 printf("\nWrong choice");
	 }
	  if(ach!=3)
	  getch();
       }while(ach!=3);
       break;
       case 2://Volume
       do
       {
	 clrscr();
	 VolumeMenu();
	 scanf("%d",&vch);
	 switch(vch)
	 {
	 case 1://Sphere
	 break;
	 case 2://Cylinder
	 break;
	 case 3://Exit
	 break;
	 default:
	 printf("\nWrong choice");
	 }
	  if(vch!=3)
	  getch();
       }while(vch!=3);
       break;
       case 3://Interest
       do
       {
	 clrscr();
	 InterstMenu();
	 scanf("%d",&ich);
	 switch(ich)
	 {
	 case 1://SI
	 break;
	 case 2://CI
	 break;
	 case 3://Exit
	 break;
	 default:
	 printf("\nWrong choice");
	 }
	  if(ich!=3)
	  getch();
       }while(ich!=3);
       break;
       case 4://Exit
       break;
       default:
       printf("\nWrong choice");
       }
       if(ch!=4)
       getch();
    }while(ch!=4);
   // getch();
}