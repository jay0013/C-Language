/*
Write a Program to find Three max Number
*/

#include <stdio.h>
#include<conio.h>
void findMaximum(int num1, int num2, int num3) {
    int max = num1;

    if (num2 > max) {
	max = num2;
    }
    if (num3 > max) {
	max = num3;
    }

    printf("The maximum of the three numbers is: %d\n", max);
}

void main()
{
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    findMaximum(num1, num2, num3);

    getch();
}
/*
Enter three numbers: 10 20 30
The maximum of the three numbers is: 30
*/