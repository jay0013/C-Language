/*
WAP to eligible of student for admission
*/

#include<stdio.h>
#include<conio.h>
int checkEligibility(int math, int physics, int chemistry)
{
    int total = math + physics + chemistry;
    if (math >= 50 && physics >= 45 && chemistry >= 60 && total >= 170 && (math + physics) >= 120)
    {
	return 1; // Eligible
    } else
    {
	return 0; // Not eligible
    }
}

void main()
{
    int math, physics, chemistry;
    clrscr();
    printf("Enter Mathematics marks: ");
    scanf("%d", &math);

    printf("Enter Physics marks: ");
    scanf("%d", &physics);

    printf("Enter Chemistry marks: ");
    scanf("%d", &chemistry);

    if (checkEligibility(math, physics, chemistry))
    {
	printf("Student is eligible for admission.\n");
    }
    else
    {
	printf("Student is not eligible for admission.\n");
    }

    getch();
}
/*
Enter Mathematics marks: 60
Enter Physics marks: 60
Enter Chemistry marks: 60
Student is eligible for admission.
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
