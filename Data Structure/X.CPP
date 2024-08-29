/*
WAP to declare a class named Employee with the following attributes:
Employee ID : int
Employee Name : char []
Basic Salary : float
HRA (House Rent Allowance) : float
DA (Dearness Allowance) : float
TA (Travelling Allowance) : float
MA (Medical Allowance) : float
PF (Provident Fund) : float
GROSS Salary : double
Net Salary : double

You have to input data into employee id, employee name and basic salary. Rest all the attributes should be calculated as given below:
HRA = 50 % of Basic Salary
DA = 40 % of Basic Salary
TA = 30 % of Basic Salary
MA = 10 % of Basic Salary
PF = 45 % of Basic Salary
Gross = Basic + HRA + DA + TA + MA + PF
Net = Gross - PF


The functions included should be:
void inputEmployee();
void printEmployee();
int searchEmployee(int employeeID);
void printSalarySlip();

Now declare an array of 5 employee objects and perform all the operations.
The program should be menu driven.
Design it as per your choice.
*/

#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <dos.h> // Delay // sound
#include <graphics.h>
#define name_size 20


const int size=20;
const int menu_count=5;
int count_entry=0;



struct employee
{
	int id;
	char name[name_size];
	float bs;     // BasicSalary
	float hra;    // House Rent Allowance
	float da;     // Dearness Allowance
	float ta;     // Dearness Allowance
	float ma;     // Medical Allowance
	float pf;     // Provident Fund
	double gs;    // Gross Salary
	double ns;    // Net Salary



}emptemp;



class Employee
{

	int id;
	char name[name_size];
	float bs;     // BasicSalary
	float hra;    // House Rent Allowance
	float da;     // Dearness Allowance
	float ta;     // Dearness Allowance
	float ma;     // Medical Allowance
	float pf;     // Provident Fund
	double gs;    // Gross Salary
	double ns;    // Net Salary


public:
	void insertData(int id ,char name[name_size] , float bs)
	{

		   this->id = id;
		   strcpy(this->name,name);
		   this->bs = bs;
		   hra = ( bs * 0.5 );
		   da  = ( bs * 0.4 );
		   ta  = ( bs * 0.3 );
		   ma  = ( bs * 0.1 );
		   pf  = ( bs * 0.45);
		   gs  = ( bs + hra + da + ta + ma + pf );
		   ns  = ( gs - pf );

	}



	int searchEmployee()
	{

		return (this->id);


	}

	void itemElements()
	{


//		char element[10][10]={(this->id)};
//		return* element;

		emptemp.id  =id;
		strcpy ( (emptemp.name) , name );
		emptemp.bs  =bs;     // BasicSalary
		emptemp.hra = hra;    // House Rent Allowance
		emptemp.da  = da;     // Dearness Allowance
		emptemp.ta  = ta;     // Dearness Allowance
		emptemp.ma  = ma;     // Medical Allowance
		emptemp.pf  = pf;     // Provident Fund
		emptemp.gs  = gs;    // Gross Salary
		emptemp.ns  = ns;    // Net Salary
	}

 }item[size];



void play_Sound(unsigned int sound_Hz , int delayTime)
{

sound(sound_Hz);
delay(delayTime);
nosound();



}

void box(int r1,int c1,int r2,int c2,int color ,int header)
{




	int x;
	textattr(color);
	gotoxy(c1,r1);
	cprintf("%c",201);
	gotoxy(c1,r2);
	cprintf("%c",200);
	gotoxy(c2,r2);
	cprintf("%c",188);
	gotoxy(c2,r1);
	cprintf("%c",187);

	for(x=r1+1;x<=r2-1;x++)
	{
		gotoxy(c1,x);
		cprintf("%c",186);
		gotoxy(c2,x);
		cprintf("%c",186);

	}


	for(x=c1+1;x<=c2-1;x++)
	{
		gotoxy(x,r1);
		cprintf("%c",205);
		gotoxy(x,r2);
		cprintf("%c",205);
	}

	if(header==1)
	{

		gotoxy(1,3);
		cprintf("%c",204);
		gotoxy(79,3);
		cprintf("%c",185);


		for(x=c1+1;x<=c2-1;x++)
		{
			gotoxy(x,3);
			cprintf("%c",205);
			gotoxy(x,3);
			cprintf("%c",205);
		}
	}

}


void  menu(int n)
{

	int ch;
	int i=0;
	int x;
	int y;


	char menu[menu_count][30]={
			  "1.Read Data",
			  "2.Data Entry",
			  "3.Search Data",
			  "4.Print Salary Slip",
			  "0.Exit"
			  };

		clrscr();

		   x=33;
		   y=7;


		textcolor(YELLOW);

		while(i<menu_count)
		{

			box(1,1,25,79,15,0);

			box(7,25,19,55,15,0);


			y+=2;
			if(n==i+1)
			{

				textbackground(GREEN);
				gotoxy(x+1,y);
				cprintf("%s",menu[i]);
				textbackground(0);
			}

			else
			{
				gotoxy(x,y);
				cprintf("%s",menu[i]);
			}
			i++;
		}

}


int Menu_Cursor()
{


	int ch;
	int i=1;
	clrscr();

		while(ch!=13)
		{
			fflush(stdin);
			menu(i);
			ch=getch();

			if(ch==0||ch==224)
			{
				fflush(stdin);
				ch=getch();

			}

				switch(ch)
				{

					case 72: {
								if(i!=1)
								{

									 play_Sound(2005,20);
									 i--;
//									 nosound();

								}
						  }
							break;

					case 80: {
								if(i!=menu_count)
								{
									 play_Sound(2005,20);
									 i++;
									 nosound();
								}
						  }
							break;
				}
		}

return  i;
}


void insertData()
{

	char c='y';
	char p;

	int id;
	char name[name_size];
	float bs;     // BasicSalary


	clrscr();


	flushall();

	while(c=='y')
	{
		cout << "\n***********************" ;

		cout << "\n Please Enter Employye ID :: ";
		cin  >> id;


		cout << "Please Enter Employye Name :: ";
		cin  >> name;

		cout << "Please Enter Basic Salary :: ";
		cin  >> bs;



		clrscr();

		cout << "\n ***********************" ;
		cout << "\n Employye ID :: ";
		cout << id;
		cout << "\n Employye Name :: ";
		cout <<  name;
		cout << "\n Basic Salary :: ";
		cout <<  bs;

		cout << "\n ***********************" ;

		cout <<"\n Is Data Correct ? if yes press y:: ";
		fflush(stdin);

		p=getche();


		if(p=='y'||p=='Y')
		{

			item[count_entry].insertData( id , name , bs);
			cout << "\n \n Data successfully Submitted";

			count_entry++;

			cout << "\n \n  Want to add More Data : ";

			c=getche();

			if( c=='y' || c =='Y')
			{
//				count_entry++;
				clrscr();
			}


		}

}

}

void str(int r,int c,char *s,int color)
{
	textattr(color);
	gotoxy(c,r);
	cprintf("%s",s);
	gotoxy(c,r);
}

void printHeader( int x , int y )
{

	box(1,1,25,79,15,1);

	gotoxy(x,y);
	cout << "ID" ;

	x+=4;
	gotoxy(x,y);
	cout << "Name";

	x+=20;
	gotoxy(x,y);
	cout << "BS";

	x+=6;
	gotoxy(x,y);
	cout << "HRA";

	x+=6;
	gotoxy(x,y);
	cout << "DA";

	x+=6;
	gotoxy(x,y);
	cout << "TA";

	x+=6;
	gotoxy(x,y);
	cout << "MA";

	x+=6;
	gotoxy(x,y);
	cout << "PF";

	x+=6;
	gotoxy(x,y);
	cout << "GS";

	x+=7;
	gotoxy(x,y);
	cout << "NS";


}


void printData(int x , int y)
{

	gotoxy(x,y);
	cout << emptemp.id ;

	x+=4;
	gotoxy(x,y);
	cout << emptemp.name;

	x+=20;
	gotoxy(x,y);
	cout << emptemp.bs;

	x+=6;
	gotoxy(x,y);
	cout << emptemp.hra;

	x+=6;
	gotoxy(x,y);
	cout << emptemp.da;

	x+=6;
	gotoxy(x,y);
	cout << emptemp.ta;

	x+=6;
	gotoxy(x,y);
	cout << emptemp.ma;

	x+=6;
	gotoxy(x,y);
	cout << emptemp.pf;

	x+=6;
	gotoxy(x,y);
	cout << emptemp.gs;

	x+=7;
	gotoxy(x,y);
	cout << emptemp.ns;

}


void printLine(int x ,int y)
{

	for( int i = 2 ; i<=78 ; i++ , x++)
	{

		if(y==24)
		{
			break;
		}


		 gotoxy(x,y);
		 cout << "-";
	}


}


void printData()
{

int i=0;
int x;
int y;


new_page:
{
	clrscr();

	x=3;
	y=2;

	printHeader(x,y);

	x=3;
	y=5;


	while(i<count_entry)
	{

		printLine((x-1),(y+1));

		flushall();
		item[i].itemElements();
		flushall();
		printData(x,y);


		y+=2;

		i++;

		// Test Code
		/*

		if(i==3)
		{
			getch();
		       exit(0);
		}
		*/


		if(y==25)
		{
			getch();
			goto new_page;
		}

	}



}


getch();
}


void printData(int i) // For Searching
{

int x;
int y;


	x=3;
	y=5;


	printHeader(x,y);

		x=3;
	y=7;



		item[i].itemElements();


getch();


}


void searchEmployee()
{
	clrscr();

	box(1,1,25,79,15,1);

	int checkID;





	gotoxy(20,2);
	cout <<  " Please Enter Your Employee ID  : :" ;
	cin >> checkID;




	int x;
	int y;


	x=3;
	y=5;



	for(int i=0 ; i<count_entry ; i++)
	{
			      //code to test False design
			    /*
			    {
				    i=count_entry;
				    break;

			    }
			    */
		 int objid = item[i].searchEmployee();

		 if(objid==checkID)
		 {


		//	printData(i);


			x=4;
			y=5;

			printHeader(x,y);


			item[i].itemElements();

			y+=2;

			printData(x,y);



			getch();


			break;


		 }


	}
	 if(i==count_entry)
	 {


		box(10,25,20,55,15,1);

		textcolor(RED);

		gotoxy(34,15);

		cprintf("Data Not Found");
		getch();

	 }

}


void salarySlip()
{



/*

	   // request auto detection
	   int gdriver = DETECT, gmode, errorcode;
	   int style, midx;
	   int size = 5;

	   flushall();

	   // initialize graphics and local variables
	  initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");

	   // read result of initialization
	   errorcode = graphresult();
	   if (errorcode != grOk)  // an error occurred
		   {
	      printf("Graphics error: %s\n", grapherrormsg(errorcode));
	      printf("Press any key to halt:");
	      getch();
	      exit(1); // terminate with an error code
		   }

	   midx = getmaxx() / 2;


	   settextjustify(CENTER_TEXT, CENTER_TEXT);

	   style=1;

		// select the text style
	   settextstyle(style, HORIZ_DIR, size);


	   outtextxy(midx,5,"Krushik");



//	  closegraph();


  */


	clrscr();

	box(1,1,25,79,15,1);
	str(2,34,"SALARY SLIP",10);
	box(5,5,24,75,3,0);


	int x = 7;
	int y = 6;

	int xx = 22 ;
	int yy = 6 ;



	gotoxy(x,y);
	cout << "Employee ID : " ;

	gotoxy(xx,yy);
	cout << emptemp.id ;


	y++;
	gotoxy(x,y);
	cout << "Employee Name :- " ;



	for(int i=x-1 ; i<=74 ; i++)
	{
		gotoxy(i,y+1);
		cout  << "-";

		gotoxy(i,y+15);
		cout  << "-";

	}


	yy++;

	gotoxy(xx,yy);
	cout << emptemp.name;


	y+=2;
	gotoxy(x,y);
	cout << "Bs ( Basic Salary )";

	xx=60;
	yy+=2;
	gotoxy(xx,yy);
	cout << emptemp.bs ;

	y+=2;
	gotoxy(x,y);
	cout << "HRA ( House Rent Allowance )" ;
	xx=60;
	yy+=2;
	gotoxy(xx,yy);
	cout << emptemp.hra ;


	y+=2;
	gotoxy(x,y);
	cout << "DA ( Dearness Allowance )";

	xx=60;
	yy+=2;
	gotoxy(xx,yy);
	cout << emptemp.da ;



	y+=2;
	gotoxy(x,y);
	cout << "TA ( Travelling Allowance )";

	xx=60;
	yy+=2;
	gotoxy(xx,yy);
	cout << emptemp.ta ;



	y+=2;
	gotoxy(x,y);
	cout << "MA ( Medical Allowance )";

	xx=60;
	yy+=2;
	gotoxy(xx,yy);
	cout << emptemp.ma ;



	y+=2;
	gotoxy(x,y);
	cout << "PF ( Provident Fund ) ";

	xx=60;
	yy+=2;
	gotoxy(xx,yy);
	cout << emptemp.pf ;



	y+=2;
	gotoxy(x,y);
	cout << "GROSS Salary ";

	xx=60;
	yy+=2;
	gotoxy(xx,yy);
	cout << emptemp.gs ;


	y+=2;
	gotoxy(x,y);
	cout << "Net Salary ";

	xx=60;
	yy+=2;
	gotoxy(xx,yy);
	cout << emptemp.ns ;








}

void printSalarySlip()
{


	clrscr();

	box(1,1,25,79,15,1);

	int checkID;

	flushall();

	gotoxy(20,2);
	cout <<  " Please Enter Your Employee ID  : :" ;
	cin >> checkID;

	int x;
	int y;

	for(int i=0 ; i<count_entry ; i++)
	{
			      //code to test False design
			    /*
			    {
				    i=count_entry;
				    break;

			    }
			    */
		 int objid = item[i].searchEmployee();

		 if(objid==checkID)
		 {



		 /*

			x=4;
			y=5;
		 */


			item[i].itemElements();

			salarySlip();


			getch();


			break;


		 }


	}
	 if(i==count_entry)
	 {


		box(10,25,20,55,15,1);

		textcolor(RED);

		gotoxy(34,15);

		cprintf("Data Not Found");
		getch();

	 }

}



void main()
{

//class Item item[size];



clrscr();




item[0].insertData( 1 , "Krushik" , 10000 );
item[1].insertData( 2 , "Rishi" , 90000 );
item[2].insertData( 3 , "Pragnesh" , 30000 );
item[3].insertData( 4 , "Dhruvi" , 10000 );
item[4].insertData( 5 , "Yakanshi" , 10000 );
item[5].insertData( 6 , "Deep" , 10000 );
item[6].insertData( 7 , "Krish" , 10000 );
item[7].insertData( 8 , "Femil" , 10000 );
item[8].insertData( 9 , "Dhruv" , 10000 );
item[9].insertData( 10 , "Yakansh" , 10000 );
item[10].insertData( 11 , "Hemil" , 10000 );
item[11].insertData( 12 , "Krinsh" , 10000 );
item[12].insertData( 13 , "Neelu" , 10000 );
item[13].insertData( 14 , "Ram" , 10000 );
item[14].insertData( 15 , "Kruzz" , 10000 );



count_entry = 15;



flushall();




int choice;


		do
		{

		/*
			//  searchEmployee();
			  printSalarySlip();

			getch();
			exit(0);
		 */
			clrscr();

			choice = Menu_Cursor();

		//	choice = 1;

			clrscr();
			flushall();
			switch(choice)
			{


				case 1 :
					{

						play_Sound(2005,10);
						printData();


					}

						break;
				case 2 :
					{

						play_Sound(2005,10);
						insertData();

					}
						play_Sound(2005,10);
						break;
				case 3 :
					{

						play_Sound(2005,10);
						searchEmployee();

					}
						break;
				case 4 :
					{

						play_Sound(2005,10);
						printSalarySlip();

					}
						break;


			}

	}while(choice!=menu_count);




getch();


}
