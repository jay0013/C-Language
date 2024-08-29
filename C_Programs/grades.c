/*
write a program to calculate total and bashed grade
*/
#include <stdio.h>
#include<conio.h>
int calculateTotal(int math, int physics, int chemistry)
{
    return math + physics + chemistry;
}

void calculateGrade(int total) 
{
    printf("Total Marks: %d\n", total);

    if (total >= 80)
    {
	printf("Grade: A+\n");
    }
    else if (total >= 70)
    {
	printf("Grade: A\n");
    }
    else if (total >= 60)
    {
	printf("Grade: A-\n");
    }
    else if (total >= 50)
    {
	printf("Grade: B+\n");
    }
    else
    {
	printf("Grade: Fail\n");
    }
}

void main()
{
    int math, physics, chemistry,total;
    clrscr();
    printf("Enter marks for Mathematics: ");
    scanf("%d", &math);

    printf("Enter marks for Physics: ");
    scanf("%d", &physics);

    printf("Enter marks for Chemistry: ");
    scanf("%d", &chemistry);

    total = calculateTotal(math, physics, chemistry);
    calculateGrade(total);

    getch();
}
/*
Enter marks for Mathematics: 65
Enter marks for Physics: 78
Enter marks for Chemistry: 89
Total Marks: 232
Grade: A+
*/