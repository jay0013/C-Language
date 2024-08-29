#include <stdio.h>
#include <string.h>
#include <conio.h>
#define MAX_STUDENTS 100

// Define the Student structure
struct Student {
    int rollno;
    char name[50];
    float marks;
};

// Function to add a student record
void addStudent(struct Student students[], int *numStudents) {
    if (*numStudents < MAX_STUDENTS)
    {
	printf("Enter Roll No: ");
	scanf("%d", &students[*numStudents].rollno);
	printf("Enter Name: ");
	scanf("%s", students[*numStudents].name);
	printf("Enter Marks: ");
	scanf("%f", &students[*numStudents].marks);

	(*numStudents)++;
	printf("Student record added successfully.\n");
    } else {
	printf("Maximum number of students reached.\n");
    }
}

// Function to search for a student by name
void searchStudentByName(struct Student students[], int numStudents) {
    int found = 0,i;

    char searchName[50];
    printf("Enter the name to search: ");
    scanf("%s", searchName);



    for ( i = 0; i < numStudents; i++) {
	if (strcmp(students[i].name, searchName) == 0) {
	    printf("Student found:\n");
	    printf("Roll No: %d\n", students[i].rollno);
	    printf("Name: %s\n", students[i].name);
	    printf("Marks: %.2f\n", students[i].marks);
	    found = 1;
	    break;
	}
    }

    if (!found) {
	printf("Student with name '%s' not found.\n", searchName);
    }
}

// Function to sort students by name (using bubble sort)
void sortStudentsByName(struct Student students[], int numStudents) {
    int i,j;
    for ( i = 0; i < numStudents - 1; i++) {
	for ( j = 0; j < numStudents - i - 1; j++)
	{
	    if (strcmp(students[j].name, students[j + 1].name) > 0) {
		// Swap the two students
		struct Student temp = students[j];
		students[j] = students[j + 1];
		students[j + 1] = temp;
	    }
	}
    }
    printf("Students sorted by name.\n");
}

// Function to print all student records
void printAllStudents(struct Student students[], int numStudents) {
    int i;
    printf("Student Records:\n");
    for ( i = 0; i < numStudents; i++)
    {
	printf("Roll No: %d\n", students[i].rollno);
	printf("Name: %s\n", students[i].name);
	printf("Marks: %.2f\n\n", students[i].marks);
    }
}

void main()
{
    struct Student students[MAX_STUDENTS];
    int numStudents = 0;
    int choice;
    clrscr();
    do
    {
	printf("\nMenu:\n");
	printf("1. Add Student Record\n");
	printf("2. Search Student by Name\n");
	printf("3. Sort Students by Name\n");
	printf("4. Print All Records\n");
	printf("5. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch (choice)
	{
	    case 1:
		addStudent(students, &numStudents);
		break;
	    case 2:
		searchStudentByName(students, numStudents);
		break;
	    case 3:
		sortStudentsByName(students, numStudents);
		break;
	    case 4:
		printAllStudents(students, numStudents);
		break;
	    case 5:
		printf("Exiting program.\n");
		break;
	    default:
		printf("Invalid choice. Please try again.\n");
	}
    } while (choice != 5);

    getch();
}
