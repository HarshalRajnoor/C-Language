#include <stdio.h>
#include <string.h>
struct employee // This defines a new user defined data type
{
    int id;
    float salary;
    char name[10];
}; // ; is important


typedef struct employee1
{
    int id;
    float salary;
    char name[10];
} Empy;

void show(struct employee1 emp)
{
    printf("The id of the employee is %d \n", emp.id);
    printf("The id of the employee is %.2f \n", emp.salary);
    printf("The id of the employee is %s \n", emp.name);
    strcpy(emp.name, "Nakamoto");
}

void main()
{
    /*
    1) A structure is a collections of variables different under a single name
    2) A structure creates a data type that can be used to 
       group items of possibly different types into a single type.
    3) Array of structures --> Elements of strutctures of array is stored in a contiguous memory blocks       
    */

    struct employee e1; // Creating a structure variable

    e1.id = 01;// .(full stop) --> is a member operator/dot operator, we can access data mamber using dot
    e1.salary = 50000;
    //e1.name = "Rohandas";  --> Won't work
    strcpy(e1.name, "Rohandas");

    printf("%d - %s - %.2f \n", e1.id, e1.name,e1.salary);

    //QQ - Write a program to store the details of three employees from user defined data.
    //     Use the structure defined above

    struct employee em1,em2;
    printf("Enter the ID of employee 1 \n");
    scanf("%d", &em1.id);
    printf("Enter the salary of employee 1 \n");
    scanf("%d", &em1.salary);
    printf("Enter the name of employee 1 \n");
    scanf("%s", em1.name);

    printf("Enter the ID of employee 2 \n");
    scanf("%d", &em2.id);
    printf("Enter the salary of employee 2 \n");
    scanf("%d", &em2.salary);
    printf("Enter the name of employee 2 \n");
    scanf("%s", em2.name);
    printf("%d - %s - %f \n", em1.id, em1.name,em1.salary);
    printf("%d - %s - %f \n", em2.id, em2.name,em2.salary);

    // Array of stuctures
    /*
    Just like an array of integers, an of floats and an array of characters,
    we can create an array of structures
    */
    struct employee google[100]; // An array of structures
    google[0].id = 01;
    strcpy(google[0].name, "Rohandas");
    google[0].salary = 50000;

    google[1].id = 01;
    strcpy(google[1].name, "Mohandas");
    google[1].salary = 45000;

    //Another way of initializing Structures
    struct employee rohanDas = {01,50000,"Rohandas"};
    printf("%d - %s - %.2f \n", rohanDas.id,rohanDas.name,rohanDas.salary);

    //Pointers to structure
    struct employee emp1;
    struct employee emp2;
    struct employee *ptr;
    struct employee *ptr1;
    ptr = &emp1;
    ptr1 = &emp2;

    // ptr has the address of emp1 --> value at address of emp1 will be 01
    (*ptr).id = 01; // There is another way to write this ptr -> id

    // Instead of writing (*ptr1).id we can write ptr1 -> id to access properties of structure
    ptr1 -> id = 02;// -> is the arrow operator

    printf("%u \n", &emp1);
    printf("%u \n", ptr);
    printf("%d \n", emp1.id);
    printf("%d \n", emp2.id);

    //QQ - Write a function and pass a structure to it
    struct employee Emp;
    Emp.id = 1;
    Emp.salary = 750000;
    strcpy(Emp.name, "Satoshi");

    // show(Emp);
    // printf("The id of the employee is %s \n", Emp.name);

    //typedef keyword --> is a convenience feature which helps us to make a alias name which we can 
    //                    use in place of struct <Custom data type name> <Variable name> ex: struct employee emp


    //Declaring empy and ptrr
    Empy empy;
    Empy *ptrr;

    //pointing ptrr to empy
    ptrr = &empy;
    //Setting member values for empy
    ptrr->id = 25;
    ptrr->salary = 85000;
    strcpy(ptrr->name, "Goku");

    show(empy);
}