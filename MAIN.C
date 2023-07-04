#include "election.h"
#include <stdio.h>

/**function to handle the functionality of the student panel**/
void studentPanel()
{
printf("Welcome to the student panel!\n");
/**code for student panel functionality**/
int studentID;
printf("Enter your student ID: \n");
scanf("%d", &studentID);
printf("Hello, Student %d!\n", studentID);
}

/**Function to handle the functionality of the admin panel**/
void adminPanel()
{
printf("Welcome to the Admin Panel!\n");
/**Code for Admin Functionality**/
int adminID;
printf("Enter your Admin ID: \n");
scanf("%d", &adminID);
printf("Hello, Admin %d!\n", adminPanel);
}

/**Function to clear the buffer**/
void clearInputBuffer()
{
int c;
while ((c = getchar()) != '\n' && c != EOF)
{}
}
/**Begin Main function**/
int main()
{
while (1)
{
printf("\n\t\t\t   1. Student Panel\n\t\t\t   2. Admin Panel\n\t\t\t   3. Exit\n\t\t\t   Option: ");
char input;
if (scanf(" %c", &input) != 1) {
printf("\nInvalid input. Please try again.\n");
clearInputBuffer();
continue;
}
switch (input)
{
case '1':
studentPanel(); // Call the student panel function
break;
case '2':
adminPanel(); /**Call the admin panel function**/
break;
case '3':
printf("\nExiting the program.\n");
return (0);
default:
printf("\nInvalid option. Please try again.\n");
break;
}
}
return (0);
}
