/*
Write a program to KM to meter and feet
*/

#include <stdio.h>
#include<conio.h>
// Function to convert kilometers to meters
double kmToMeters(double km) {
    return km * 1000;
}

// Function to convert kilometers to feet
double kmToFeet(double km) {
    return km * 3280.84;
}

void main() 
{
    double distance_km;
    
    // Read the distance between two cities in kilometers
    printf("Enter the distance between two cities in kilometers: ");
    scanf("%lf", &distance_km);
    
    // Convert distance and print results
    printf("Distance in meters: %.2f meters\n", kmToMeters(distance_km));
    printf("Distance in feet: %.2f feet\n", kmToFeet(distance_km));
    
    getch();
}
