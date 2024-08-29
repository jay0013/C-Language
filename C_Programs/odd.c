/*
 write a program to print 50 odd number of sum
*/

#include <stdio.h>
#include <conio.h>
// Function to print odd numbers with formatting
void printOddNumbers()
{
    int num,count = 0;
    for (num = 1; count<50; num+=2)
    {
	printf("%3d ", num);
	count++;

	if (count % 5 == 0)
	{
	    printf("\n");
	}
    }
}

void main()
{
    clrscr();
    printf("First 50 odd numbers with five numbers per line:\n");
    printOddNumbers();
    getch();
}
/*
First 50 odd numbers with five numbers per line:
  1   3   5   7   9                                                             
 11  13  15  17  19                                                             
 21  23  25  27  29                                                             
 31  33  35  37  39                                                             
 41  43  45  47  49                                                             
 51  53  55  57  59                                                             
 61  63  65  67  69                                                             
 71  73  75  77  79                                                             
 81  83  85  87  89                                                             
 91  93  95  97  99                                                             
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/