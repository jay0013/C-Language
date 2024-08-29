/*
Wap of Root in quadractiv in equation
*/
#include <stdio.h>
#include <math.h>
#include <conio.h>
void calculateRoots(float a, float b, float c)
{
    float discriminant = b * b - 4 * a * c;
    float realPart, imaginaryPart;

    if (discriminant > 0)
    {
	float root1 = (-b + sqrt(discriminant)) / (2 * a);
	float root2 = (-b - sqrt(discriminant)) / (2 * a);
	printf("Roots are real and different:\n");
	printf("Root 1 = %.2f\n", root1);
	printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0)
     {
	float root = -b / (2 * a);
	printf("Roots are real and same:\n");
	printf("Root = %.2f\n", root);
    }
    else
    {
	realPart = -b / (2 * a);
	imaginaryPart = sqrt(-discriminant) / (2 * a);
	printf("Roots are complex and different:\n");
	printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
	printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}

void main()
{
    float a, b, c;
    clrscr();
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a != 0)
    {
	calculateRoots(a, b, c);
    } else
    {
	printf("Coefficient 'a' cannot be zero. Quadratic equation is not valid.\n");
    }

    getch();
}
/*

Enter coefficients a, b, and c: a
Roots are real and different:                                                   
Root 1 = -34971729920.00                                                        
Root 2 = 34971729920.00
*/



