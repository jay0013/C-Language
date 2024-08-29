/*
WAP of Arithmatic Operator
*/

#include<stdio.h>
#include<conio.h>
void calculateResult(int num1, int num2, char operator)
{
    int result;
    switch (operator)
    {
	case '+':
	    result = num1 + num2;
	    printf("Result: %d + %d = %d\n", num1, num2, result);
	    break;
	case '-':
	    result = num1 - num2;
	    printf("Result: %d - %d = %d\n", num1, num2, result);
	    break;
	case '*':
	    result = num1 * num2;
	    printf("Result: %d * %d = %d\n", num1, num2, result);
	    break;
	case '/':
	    if (num2 != 0)
	    {
		result = num1 / num2;
		printf("Result: %d / %d = %d\n", num1, num2, result);
	    } else {
		printf("Error: Cannot divide by zero.\n");
	    }
	    break;
	default:
	    printf("Error: Invalid operator.\n");
    }
}

void main()
{
    int num1, num2;
    char operator;
    clrscr();
    printf("Enter an arithmetic operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two integer values: ");
    scanf("%d %d", &num1, &num2);

    calculateResult(num1, num2, operator);

    getch();
}
/*Enter an arithmetic operator (+, -, *, /): +
Enter two integer values: 20
30
Result: 20 + 30 = 50
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
