/*
WAP to pattern 87
*/

int printpattern(const int p)
{
    int i,j,n;
    int k=1;
    // Take the number of rows as the input
    printf("Enter how many rows you want : ");
    scanf("%d",&n);

    // Lets start with 1
    // After printing the value then Negate the value '!'

    // The Outer loop goes from 1 to n
    // So It is the number of Rows
    for(i=1;i<=n;i++)
    {
	// Our Pattern is in Triangle Shape
	// So we need to stop the loop when i and j becomes equal
	// Start j from 1 and go until we reach 'i'
	for(j=1;j<=i;j++)
	{
	    // Print the value
	    printf(" %d",k);

	    // Now Negate the value.
	    k=!k;
	}

	printf("\n");
    }

    return 0;
}
void main()
{
 int p;
 clrscr();
 printpattern(p);
 getch();
}