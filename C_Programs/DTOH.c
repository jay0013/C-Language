/*
to convert decimal to hexadecimal
*/
#include <stdio.h>
#include <conio.h>
// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimal, char hexadecimal[]) 
{
    int index = 0;
    
    while (decimal > 0) 
	{
        int remainder = decimal % 16;
        
        if (remainder < 10) 
	{
            hexadecimal[index] = remainder + '0';
        } 
	else 
	{
            hexadecimal[index] = remainder - 10 + 'A';
        }
        
        decimal /= 16;
        index++;
    }
    
    // Adding null terminator to the string
    hexadecimal[index] = '\0';
    
    // Reverse the string to get the correct hexadecimal representation
    int start = 0,end;
    end = index - 1;
    
    while (start < end) 
	{
        char temp = hexadecimal[start];
        hexadecimal[start] = hexadecimal[end];
        hexadecimal[end] = temp;
        start++;
        end--;
    }
}

void main() 	
{
    int decimal;
    char hexadecimal[100];
    clrscr();
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToHexadecimal(decimal, hexadecimal);

    printf("Hexadecimal representation: %s\n", hexadecimal);

    getch();
}
