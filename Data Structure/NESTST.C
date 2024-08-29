
typedef struct Student
{
   int rollno;
   struct Date
   {
     int dd,mm,yyyy;
   }DOB;
   char name[10];
   int marks;
}Student;
void main()
{
  Student s;
  s.rollno=1;
  s.DOB.dd=12;
  s.DOB.mm=12;
  s.DOB.yyyy=1997;
  strcpy(s.name,"Amit");
  s.marks=56;
  clrscr();
  printf("\nRollno = %d Name = %s Marks = %d DOB=%d/%d/%d",s.rollno,s.name,s.marks,s.DOB.dd,s.DOB.mm,s.DOB.yyyy);
  getch();
}