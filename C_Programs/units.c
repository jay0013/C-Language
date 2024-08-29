/*
 WAP of calculate the bill amount
*/

#include <stdio.h>
#include <conio.h>
float calculateBillAmount(int units) 
{
    float billAmount = 0.0;
    
    if (units <= 50) 
    {
        billAmount = units * 2.30;
    } else if (units <= 100) 
    {
        billAmount = 50 * 2.30 + (units - 50) * 2.60;
    } else if (units <= 250) 
    {
        billAmount = 50 * 2.30 + 50 * 2.60 + (units - 100) * 3.25;
    } else 
    {
        billAmount = 50 * 2.30 + 50 * 2.60 + 150 * 3.25 + (units - 250) * 4.25;
    }
    
    return billAmount;
}

void main() {
    int units;
    clrscr();
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units >= 0) {
	float billAmount = calculateBillAmount(units);
	printf("Bill Amount: Rs %.2f\n", billAmount);
    } else {
	printf("Invalid input. Units cannot be negative.\n");
    }

    getch();
}
/*Enter the number of units consumed: 300
Bill Amount: Rs 945.00                                                          
*/
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
