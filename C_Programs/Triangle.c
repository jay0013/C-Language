/*
WAP of Tragle is scale ,issoscale ,equalitral trangle
*/
#include <stdio.h>
#include <conio.h>
void checkTriangle(int side1, int side2, int side3)
{
    if (side1 == side2 && side2 == side3) 
{
	printf("It's an equilateral triangle.\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
	printf("It's an isosceles triangle.\n");
    } else {
	printf("It's a scalene triangle.\n");
    }
}

void main()
{
    int side1, side2, side3;
    clrscr();
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 > 0 && side2 > 0 && side3 > 0)
    {
	checkTriangle(side1, side2, side3);
    } else {
	printf("Invalid input. Sides must be positive integers.\n");
    }

    getch();
}
/*Enter three sides of the triangle: 3
4                                                                               
5                                                                               
It's a scalene triangle.                                                        
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
