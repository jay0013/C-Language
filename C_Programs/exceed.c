/*
 write a program of exceed 50 number
*/
#include <stdio.h>

// Function to take input and return the number
int getInput() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    return number;
}

 void main() {
    int sum = 0,number;

    while (sum <= 50) {
	number = getInput();
	sum += number;
    }

    printf("Sum exceeded 50. Final sum: %d\n", sum);

    getch();
}

/*

Enter a number: 20                                                              
Enter a number: 50                                                              
Sum exceeded 50. Final sum: 70                                                  
Enter a number: 10                                                              
Enter a number: 20                                                              
Enter a number: 30                                                              
Sum exceeded 50. Final sum: 60                                                  
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/