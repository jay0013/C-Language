/*
convert temprature to fahrenheit by user
*/


#include <stdio.h>
#include <conio.h>
// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) 
{
    return (celsius * 9 / 5) + 32;
}

void main() 
{
    double temperatureCelsius;

    // Read temperature in Celsius from the user
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &temperatureCelsius);

    // Convert temperature and print the result
    double temperatureFahrenheit = celsiusToFahrenheit(temperatureCelsius);
    printf("Temperature in Fahrenheit: %.2f°F\n", temperatureFahrenheit);

    getch();
}
