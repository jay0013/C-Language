/*
To check whether the given number is octal or not.
*/
#include <stdio.h>
#include <conio.h>
// Function to check if a number is octal
int isOctal(int num) 
{
    do 
    {
        int digit = num % 10;
        if (digit < 0 || digit > 7) 
	{
            return 0; // Not an octal number
        }
        num /= 10;
    }while (num > 0);
    return 1; // Octal number
}

void main() {
    int num;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isOctal(num))
	{
	printf("%d is an octal number.\n", num);
	}
    else
	{
	printf("%d is not an octal number.\n", num);
	}

    getch();
}
/*
Enter a number: 10
10 is an octal number.                                                          
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/