#include <stdio.h>
#include <string.h>
void main()
{

    //Q1 - Write a program to read three integers from a file
    FILE *ptr;
    int a, b,c;
    ptr = fopen("sample2.txt","r");
    fscanf(ptr, "%d %d %d",&a, &b, &c);
    printf("The values of a, b and c is %d %d %d \n",a, b,c);

    //Q2 - Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted
    FILE *pt;
    int n;
    printf("Enter a number to print multiplication table \n");
    scanf("%d", &n);
    pt = fopen("sample2.txt", "w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(pt, "%d X %2d = %3d \n", n, i, n * i);
    }
    printf("Successfully generated multiplication table of %d \n", n);

    //Q3 - Write a program to read a text file character by charater and write its content twice in a seperete file
    FILE *ptr1;
    FILE *ptr2;
    int num = 2;
    char c1;
    ptr1 = fopen("problem3.txt", "r");
    ptr2 = fopen("problem3_1.txt", "w");
    c1 = fgetc(ptr1);

    while (c1 != EOF)
    {

        fputc(c1, ptr2);
        fputc(c1, ptr2);
        c1 = fgetc(ptr1);
    }

    fclose(ptr1);
    fclose(ptr2);

    //Q4 - Take name and salary of two employees as an input from the user and write them to a text file in the following format: name1, salary name2, salary
    FILE *p1;
    char name[10];
    int salary;
    int empnum;
    int counter = 0;
    printf("Enter the number of empolyees \n");
    scanf("%d", &empnum);
    p1 = fopen("generated.txt", "w");
    printf("Enter the name of the employee \n");
    scanf("%s", name);
    printf("Enter the salary of the employee \n");
    scanf("%d", &salary);
    fprintf(p1, "%s , %d \n", name, salary);

    //Q5 - Write a program to modify a file containing an integer to double its value.
    FILE *point1;
    FILE *point2;
    int u;
    point1 = fopen("generated.txt", "r");
    fscanf(point1, "%d", &u);
    point2 = fopen("generated.txt", "w");
    fprintf(point2, "%d \n", u * 2);
}