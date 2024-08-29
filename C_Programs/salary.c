/*
Wap to Calculate Gross salary
*/
#include<stdio.h>
#include<conio.h>

float calculateDA(float basicPay) 
{
    if (basicPay < 5000) 
{
	return 0.30 * basicPay;
    } else {
	return 0.45 * basicPay;
    }
}

float calculateHRA(float basicPay) {
    return 0.15 * basicPay;
}

float calculatePF(float basicPay) {
    return 0.12 * basicPay;
}

void main() {
    float basicPay, grossSalary, da, hra, pf;
     clrscr();
    printf("Enter the Basic Pay: ");
    scanf("%f", &basicPay);

    da = calculateDA(basicPay);
    hra = calculateHRA(basicPay);
    pf = calculatePF(basicPay);

    grossSalary = basicPay + da + hra - pf;

    printf("Gross Salary: %.2f\n", grossSalary);

    getch();
}
/*
Enter the Basic Pay: 20000
Gross Salary: 29600.00
*/















