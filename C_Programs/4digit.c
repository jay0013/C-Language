/*
write a program to sum of 4 digit
*/
#include <stdio.h>
#include <conio.h>
// Function to calculate the sum of first and last digits
int sumOfFirstAndLastDigits(int num) 
{
    int lastDigit = num % 10;
    int firstDigit = num / 1000;
    return firstDigit + lastDigit;
}

void main() 
{
    int sum,number;
    clrscr();
    printf("Enter a 4-digit number: ");
    scanf("%d",&number);
    
    if (number < 1000 || number > 9999) {
        printf("Enter a valid 4-digit Number.\n");
    } 
    else 
    {
        sum = sumOfFirstAndLastDigits(number);
        printf("Sum of first and last digits: %d\n",sum);
    }
    
    getch();
}
/*
 Enter a 4-digit number: 2301
Sum of first and last digits: 3                                                 
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/