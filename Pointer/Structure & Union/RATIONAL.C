#include <stdio.h>
#include <conio.h>
// Define the Rational structure
struct Rational {
    int numerator;
    int denominator;
};

// Function to read a rational number
void readRational(struct Rational *r) {
    printf("Enter the numerator: ");
    scanf("%d", &r->numerator);
    printf("Enter the denominator (non-zero): ");
    scanf("%d", &r->denominator);

    // Ensure that the denominator is non-zero
    while (r->denominator == 0) {
        printf("Denominator cannot be zero. Enter a non-zero value: ");
        scanf("%d", &r->denominator);
    }
}

// Function to print a rational number in proper format
void printRational(struct Rational r) {
    printf("%d/%d\n", r.numerator, r.denominator);
}

// Function to find the greatest common divisor (GCD) of two integers
int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return findGCD(b, a % b);
    }
}

// Function to add two rational numbers
struct Rational addRational(struct Rational r1, struct Rational r2) {
    int gcd;
    struct Rational result;
    result.numerator = r1.numerator * r2.denominator + r2.numerator * r1.denominator;
    result.denominator = r1.denominator * r2.denominator;

    // Simplify the result by dividing both numerator and denominator by their GCD
    gcd = findGCD(result.numerator, result.denominator);
    result.numerator /= gcd;
    result.denominator /= gcd;

    return result;
}

// Function to subtract two rational numbers
struct Rational subtractRational(struct Rational r1, struct Rational r2) {
    int gcd;
    struct Rational result;
    result.numerator = r1.numerator * r2.denominator - r2.numerator * r1.denominator;
    result.denominator = r1.denominator * r2.denominator;

    // Simplify the result by dividing both numerator and denominator by their GCD
    gcd = findGCD(result.numerator, result.denominator);
    result.numerator /= gcd;
    result.denominator /= gcd;

    return result;
}

// Function to multiply two rational numbers
struct Rational multiplyRational(struct Rational r1, struct Rational r2) {
    struct Rational result;
    int gcd;
    result.numerator = r1.numerator * r2.numerator;
    result.denominator = r1.denominator * r2.denominator;

    // Simplify the result by dividing both numerator and denominator by their GCD
    gcd = findGCD(result.numerator, result.denominator);
    result.numerator /= gcd;
    result.denominator /= gcd;

    return result;
}

void main()
{
    struct Rational num1, num2, sum, difference, product;

    printf("Enter the first rational number:\n");
    readRational(&num1);

    printf("Enter the second rational number:\n");
    readRational(&num2);

    printf("First rational number: ");
    printRational(num1);

    printf("Second rational number: ");
    printRational(num2);

    sum = addRational(num1, num2);
    printf("Sum of the two rational numbers: ");
    printRational(sum);

    difference = subtractRational(num1, num2);
    printf("Difference of the two rational numbers: ");
    printRational(difference);

    product = multiplyRational(num1, num2);
    printf("Product of the two rational numbers: ");
    printRational(product);

    getch();
}
