#include <stdio.h>
void ques2(int *a);

void changeValue(int *x);

void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;//the value at address of the sum is the sum of a and b and it is assigned to that address
    *avg = (float)(*sum) / 2;//the value at address of the avg is sum / 2 
}

int main()
{
    //Q1- Write a program to print the address pf a variable and use this
    //    address to get the value of this variable
    int i = 5;
    int *j = &i;
    printf("The address of i is %u \n", &i);// Address of i
    printf("The address of i is %u \n", j);// Address of i
    printf("The value of i is %u \n", *j);// Value at address of j

    //Q2- Write a program having a varible i. Print the address of i. Pass this variable to a function
    //    and print its address. Are these address sames?. Why?
    int *a;
    printf("The address of a is %u \n", &a);
    ques2(a);

    //Q3- Write a program to change the value of a variable by ten times of its current value.
    //    Write a function and pass the value by reference
    int x = 50;
    printf("The value of x is %d \n", x);
    changeValue(&x);

    //Q4- Write a program using a function which calculates the sum and average of two numbers.
    //    Use pointers and print the values of sum and average in main().
    int m = 5, n = 5, sum;
    float avg;
    sumAndAvg(m, n, &sum, &avg);
    printf("The value of sum is %d \n", sum);
    printf("The value of avg is %f \n", avg);
    
    
    //Q5- Write a program to print the value of variable i by using 'pointer to pointer' variable
    int u = 5;
    int *v = &u;
    int **w = &v;
    printf("The value of variable u is %d \n", **w);
    return 0;
}
//Q1
void ques2(int *a)
{
    printf("The address of a is %u \n", &a);
}
//Q3
void changeValue(int *x)
{

    int y = *x * 10;
    printf("The value of x after passing the value is %d \n", y);
}