#include <stdio.h>
#include <conio.h>
// Define the Date structure
struct Date {
    int day;
    int month;
    int year;
}Date;

// Function to read a date from the user
void readDate(struct Date *date)
{
    printf("Enter day: ");
    scanf("%d", &date->day);

    printf("Enter month: ");
    scanf("%d", &date->month);

    printf("Enter year: ");
    scanf("%d", &date->year);
}

// Function to print a date in the given format
void printDate(const struct Date *date)
{
    printf("%02d/%02d/%04d\n", date->day, date->month, date->year);
}

// Function to check if a date is valid
int isDateValid(const struct Date *date)
{
      // Check for valid days in each month
    int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // Check for valid month, day, and year ranges
    if (date->year < 0 || date->month < 1 || date->month > 12 || date->day < 1 || date->day > 31) {
	return 0; // Invalid date
    }

    // Handle leap years
    if ((date->year % 4 == 0 && date->year % 100 != 0) || (date->year % 400 == 0)) {
	daysInMonth[2] = 29;
    }

    if (date->day > daysInMonth[date->month])
    {
	return 0; // Invalid date
    }

    return 1; // Valid date
}

void main()
{
    struct Date date;

    // Read a date from the user
    readDate(&date);

    // Check if the date is valid
    if (isDateValid(&date))
    {
	// Print the date in the given format
	printf("Entered Date: ");
	printDate(&date);
    }
    else
    {
	printf("Invalid date entered.\n");
    }

    getch();
}
