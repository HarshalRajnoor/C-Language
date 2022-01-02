#include <stdio.h>
int main()
{
    /*
    1) An array ia a collection of similar items
    2) One variable --> capable of storing multiple similar values

    3)
    int marks [90] --> Integer array
    char name [20] --> Character array or string
    float percentage [50] --> Float array

    4) It is important to note that array index starts with 0
    5) 1 integer = 4 bytes
    */
    int marks[5];
    marks[0] = 0;
    marks[1] = 88;
    marks[2] = 25;
    marks[3] = 37;
    marks[4] = 49;
    marks[5] = 55;
    int a;
    printf("Enter the value of a \n");
    scanf("%d", &a);

    printf("The %d element of the array is %d \n", a, marks[a]);
    printf("The first element of the array is %d \n", marks[0]);
    for (int i = 0; i <= 5; i++)
    {
        printf("%d \n", marks[i]);
    }
    //Array user input using scanf function
    int rollno[4];

    printf("Enter your roll number \n");
    scanf("%d", &rollno[0]);// roll 0 will be treated as an integer

    printf("Enter your roll number \n");
    scanf("%d", &rollno[1]);

    printf("Enter your roll number \n");
    scanf("%d", &rollno[2]);

    printf("Enter your roll number \n");
    scanf("%d", &rollno[3]);

    printf("The entered roll numbers are %d %d %d and %d \n",
           rollno[0],rollno[1], rollno[2],rollno[3]);

    // QQ - Write a program to accept marks of five studnts in an array and print them to the screen
    int marks2[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of your marks for student: %d \n", i + 1);
        scanf("%d", &marks2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks for student: %d is: %d \n", i + 1, marks2[i]);
    }

    // Initilization of an array
    int s[] = {11,12,13};// initiliazation and declaration at same time
    printf("The value of s[0] is %d \n", s[0]);
    printf("The value of s[1] is %d \n", s[1]);
    printf("The value of s[2] is %d \n", s[2]);
    printf("\n");

    // float t[] = {11.2,1.2,2.13};// initiliazation and declaration at same time in a floating array
    // printf("The value of s[0] is %f \n", t[0]);
    // printf("The value of s[1] is %f \n", t[1]);
    // printf("The value of s[2] is %f \n", t[2]);

    //Pointer Arithmetic - incrementing and decrementing addrdees of an array to next or previous location
    int p = 10;
    int *ptr = &p;
    printf("The value of ptr is %u \n", ptr);
    ptr++;// adds 4 bytes to the address because that the size of an integer and moves to next location
    printf("The value of ptr is %u \n", ptr);
    ptr--;// substracts 4 bytes from the address because that the size of an integer and moves to previous location
    printf("The value of ptr is %u \n", ptr);

    char p = '@';
    char *ptr = &p;
    printf("The value of ptr is %u \n", ptr);
    ptr++;// adds 1 byte to the address because that the size of an character and moves to next location
    printf("The value of ptr is %u \n", ptr);
    ptr--;// substracts 1 byte from the address because that the size of an character and moves to previous location
    printf("The value of ptr is %u \n", ptr);

    /*Following operations can be performed on pointers
    int i = 22;
    int *ptr = &i;

    1)Addition of a number to a pointer --> ptr = ptr + 1;
    2)Substraction of a number from a pointer --> ptr = ptr - 1;
    3)Substtraction of one pointer from another --> x = ptr2 - ptr1;
    4)Comparison of two pointer variables --> ptr1 > ptr2;
    */

    //QQ - try the above operations
    int x = 80;
    int *y = &x;
    int *z = &x;
    int w;

    y = y + 1; //addition of ptr with a number
    printf("%u \n", y);
    y = y - 1;
    printf("%u \n", y); //Substraction of ptr with a number
    //Substracting one pointer from another
    y = y + 1;
    z = z + 3;
    w = z - y;
    printf("The difference is of: %u integer \n", w);
    //Comparison of two pointer variable
    y = (int *)5;// int casting from pointer --> datatype to convert followed by a *
    z = (int *)2;

    if(y>z){
        printf("y is greater than z \n");
    }
    
        return 0;
}