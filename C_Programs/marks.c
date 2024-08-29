/*
write a program of Display Equaliant Grade
*/

#include <stdio.h>
#include<conio.h>
void displayGrade(int marks)
{
    if (marks >= 0 && marks <= 34)
    {
	printf("Grade: Fail\n");
    }

    else if (marks >= 35 && marks <= 59)
    {
	printf("Grade: Second Class\n");
    }
    else if (marks >= 60 && marks <= 79)
    {
	printf("Grade: First Class\n");
    }
    else if (marks >= 80 && marks <= 99)
    {
	printf("Grade: Distinction\n");
    }
    else
    {
	printf("Invalid marks entered.\n");
    }
}

void main()
{
    int marks;
    clrscr();
    printf("Enter marks: ");
    scanf("%d", &marks);

    displayGrade(marks);

    getch();
}

/*Enter marks: 67
Grade: First Class                                                              
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

