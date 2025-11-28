//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
#include <string.h>

// 1. Define the Structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    // 2. Initialize a structure variable
    struct Student s1 = {"Alice", 101, 85.5};
    
    // 3. Create a pointer pointing to s1
    struct Student *ptr = &s1;

    // --- Display Initial Values ---
    printf("Original Data:\n");
    printf("Name: %s | Roll: %d | Marks: %.2f\n\n", ptr->name, ptr->roll, ptr->marks);

    // 4. Modify data using the arrow operator (->)
    // We cannot assign strings directly with =, so we use strcpy
    strcpy(ptr->name, "Bob"); 
    ptr->roll = 102;
    ptr->marks = 92.0;

    // --- Display Modified Values ---
    printf("Modified Data (using -> operator):\n");
    printf("Name: %s | Roll: %d | Marks: %.2f\n", ptr->name, ptr->roll, ptr->marks);

    return 0;
}