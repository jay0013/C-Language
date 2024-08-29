/*
Wap of Leap Year;
*/

#include<stdio.h>
#include<conio.h>
void checkLeapYear(int year) 
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
	printf("%d is a leap year.\n", year);
    } else {
	printf("%d is not a leap year.\n", year);
    }
}

void main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    checkLeapYear(year);

    getch();
}
