/*
WAP to find Minimum Number
*/

#include <stdio.h>
#include<conio.h>

int findMinimum(int a, int b)
{
    if (a < b)
    {
	return a;
    }
    else
    {
	return b;
    }
}

void main() {
    int num1, num2,minimum;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    minimum = findMinimum(num1, num2);
    printf("The minimum number is: %d\n", minimum);

    getch();
}
/*
Enter two numbers: 20 30
The minimum number is: 20
*/
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
