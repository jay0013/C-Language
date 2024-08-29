/*
WAP to 23 in Assianment 
*/

#include <stdio.h>

// Function to convert a two-digit number to words
void twoDigitToWords(int num) {
    const char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    const char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    const char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num >= 10 && num <= 19) {
        printf("%s", teens[num - 10]);
    } else if (num >= 20) {
        printf("%s", tens[num / 10]);
        if (num % 10 > 0) {
            printf("-%s", ones[num % 10]);
        }
    } else {
        printf("%s", ones[num]);
    }
}

// Function to convert amount to words
void amountToWords(int amount) {
    int thousands = amount / 1000;
    int hundreds = (amount % 1000) / 100;
    int remaining = amount % 100;

    if (thousands > 0) {
        twoDigitToWords(thousands);
        printf(" Thousand ");
    }

    if (hundreds > 0) {
        twoDigitToWords(hundreds);
        printf(" Hundred ");
    }

    if (remaining > 0) {
        twoDigitToWords(remaining);
    }
}

int main() {
    int amount;

    printf("Enter the amount paid: ");
    scanf("%d", &amount);

    if (amount < 1000 || amount > 9999) {
        printf("Please enter an amount between 1000 and 9999.\n");
        return 1;
    }

    printf("Amount in words: Rs ");
    amountToWords(amount);
    printf("\n");

    return 0;
}
