/*
Write a program generate Sum of two binary numbers
*/
#include <stdio.h>
#include<conio.h>
// Function to add two binary numbers
double addBinary(double binary1, double binary2)
{
    int carry = 0,digitPosition = 1,bit1,bit2;
    double result = 0;
    // Keeps track of the current digit position

    while (binary1 > 0 || binary2 > 0 || carry > 0)
	{
	 bit1 = binary1 % 10;
	 bit2 = binary2 % 10;

	int sum = bit1 + bit2 + carry;
	int newBit = sum % 2;
	carry = sum / 2;

	result = result + (newBit * digitPosition);
	digitPosition *= 10;

	binary1 /= 10;
	binary2 /= 10;
	}

    return result;
}

void main()
{
    double binary1, binary2,sum;

    printf("Enter the first binary number: ");
    scanf("%lld", &binary1);

    printf("Enter the second binary number: ");
    scanf("%lld", &binary2);

    sum = addBinary(binary1, binary2);

    printf("Sum of binary numbers: %d\n", sum);

    getch();
}
