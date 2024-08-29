/*
WAP to calulate thair pay for the week.
*/

#include <stdio.h>
#include<conio.h>

// Function to calculate weekly pay
double calculateWeeklyPay(double hourlyPayRate, double hoursWorked) 
{
    // Assuming overtime is not considered for this simple example
    return hourlyPayRate * hoursWorked;
}

void main() {
    double hourlyPayRate, hoursWorked;
     clrscr();
    // Read hourly pay rate and hours worked
    printf("Enter hourly pay rate: ");
    scanf("%lf", &hourlyPayRate);
    
    printf("Enter hours worked: ");
    scanf("%lf", &hoursWorked);
    
    // Calculate and print weekly pay using the function
    double weeklyPay = calculateWeeklyPay(hourlyPayRate, hoursWorked);
    printf("Weekly pay: $%.2f\n", weeklyPay);
    
    getch();
}
