/*
Write a program to find sum of all digits of given number
*/

#include <stdio.h>
#include <conio.h>
// Function to calculate the sum of digits
int sumOfDigits(int num) 
{
    int sum = 0;
    while (num > 0) 
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void main() {
    int sum,number;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &number);
    
    sum = sumOfDigits(number);
    printf("Sum of digits: %d\n", sum);
    
    getch();
}
/*
Enter a number: 234
Sum of digits: 9                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/