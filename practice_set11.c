#include <stdio.h>
#include <stdlib.h>

void main()
{

    //Q1 - Write a program to dynamically create an array of size 6 capable of storing 6 integers

    int *ptr;
    ptr = (int *)calloc(6, sizeof(int));

    //Q2 - Use the array in problem1 to store 6 integers entered by the user

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element \n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is %d\n", i, ptr[i]);
    }
    //Q3 - Solve problem 1 using calloc()

    //Q4 - Create an array dynamicallycapable of storing 5 integers. Now realloc so that it can now store 10 integers
    ptr = realloc(ptr, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d element \n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d element is %d\n", i, ptr[i]);
    }

    //Q5 - Create an array of multiplication table of 7 upto 10. Use realloc() to make it store 15 numbers.
    
    int *pt;
    pt = (int *)calloc(10,sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        pt[i] = 7*(i+1);
        printf("7 X %2d = %2d \n",i+1,pt[i]);
    }
    printf("\n\n");
    pt = realloc(pt, 15*sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        pt[i] = 7*(i+1);
        printf("7 X %2d = %2d \n",i+1,pt[i]);
    }
    //Q6 - Attempt problem 4 using calloc()
}