/*
Write a program to find greatest common divisol numbers.
*/
#include <stdio.h>
#include <conio.h>
// Function to calculate the GCD of two numbers
int gcd(int num1, int num2) 
{
    int min = (num1 < num2) ? num1 : num2;
    int gcd = 1,i;

    for ( i = 1; i <= min; i++)
	{
        if (num1 % i == 0 && num2 % i == 0) 
	{
            gcd = i;
        }
    }

    return gcd;
}

void main() 
{
    int num1, num2,result;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = gcd(num1, num2);

    printf("Greatest Common Divisor (GCD) of %d and %d is %d\n", num1, num2, result);

    getch();
}
/*
Enter two numbers: 6
4                                                                               
Greatest Common Divisor (GCD) of 6 and 4 is 2                                   
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/