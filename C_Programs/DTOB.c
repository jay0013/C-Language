/*
Write program to convert decimal to binary
*/
#include <stdio.h>

// Function to convert decimal to binary
long long decimalToBinary(int decimal) 
{
    long long binary = 0;
    long long base = 1;

    do 
	{
        int remainder = decimal % 2;
        binary += remainder * base;
        base *= 10;
        decimal /= 2;
    } while (decimal > 0);

    return binary;
}

void main()
{
    int decimal,binary;
    clrscr();
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    binary = decimalToBinary(decimal);

    printf("Binary representation: %d\n", binary);

   getch();
}
/*
Enter a decimal number: 10
Binary representation: 1010                                                     
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/