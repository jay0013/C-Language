#include <stdio.h>
#include <conio.h>

// Define the Complex structure
struct Complex
{
    double real;
    double imaginary;
};

// Function to read a complex number
void readComplex(struct Complex *c)
{
    printf("Enter the real part: ");
    scanf("%lf", &c->real);
    printf("Enter the imaginary part: ");
    scanf("%lf", &c->imaginary);
}

// Function to print a complex number in proper format
void printComplex(struct Complex c)
{
    if (c.imaginary >= 0)
    {
	printf("%.2lf+%.2lfi\n", c.real, c.imaginary);
    }
    else
    {
	printf("%.2lf%.2lfi\n", c.real, c.imaginary);
    }
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2)
{
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

// Function to subtract two complex numbers
struct Complex subtractComplex(struct Complex c1, struct Complex c2)
{
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imaginary = c1.imaginary - c2.imaginary;
    return result;
}

void main()
{
    struct Complex num1, num2, sum, difference;
    clrscr();
    printf("Enter the first complex number:\n");
    readComplex(&num1);

    printf("Enter the second complex number:\n");
    readComplex(&num2);

    printf("First complex number: ");
    printComplex(num1);

    printf("Second complex number: ");
    printComplex(num2);

    sum = addComplex(num1, num2);
    printf("Sum of the two complex numbers: ");
    printComplex(sum);

    difference = subtractComplex(num1, num2);
    printf("Difference of the two complex numbers: ");
    printComplex(difference);

    getch();
}
