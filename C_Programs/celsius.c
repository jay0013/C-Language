/*
a table of conversion from Fahrenheit to Celsius.
*/
#include <stdio.h>
#include <conio.h>
// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(int fahrenheit) 
{
    return (5.0 / 9.0) * (fahrenheit - 32);
}

void main() 
{
    int fahrenheit = 0;
    printf("Fahrenheit\tCelsius\n");
    printf("----------------------------\n");
    clrscr();
    while (fahrenheit <= 160)
	{
	double celsius = fahrenheitToCelsius(fahrenheit);
	printf("%d\t\t%.2lf\n", fahrenheit, celsius);
	fahrenheit += 20;
	}

    getch();
}

/*
0               -17.78
20              -6.67                                                           
40              4.44                                                            
60              15.56                                                           
80              26.67                                                           
100             37.78                                                           
120             48.89                                                           
140             60.00                                                           
160             71.11                                                           
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/