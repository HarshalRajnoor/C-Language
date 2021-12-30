#include <stdio.h>
// Call by value
int sum(int a, int b);

// Call by reference
void wrongSwap(int a, int b);

int swap(int *a, int *b);

int main()
{
    /*
    Based on how we pass arguments function calls are of two types
    1) Call by value --> sending the values of arguments, the copies of arguments 
                         are copied to the function's parameters
    2) Call by reference --> sending the address of arguments 
    */

    // Call by value
    int a = 2, b = 2;
    printf(" %d \n", sum(a, b));

        // Call by reference
    int x = 3, y = 4;
    printf("The value of x ant y before swap is %d and %d \n", x, y);
    wrongSwap(x,y); // will not work due to call by value
    swap(&x, &y);
    printf("The value of x ant y after is %d and %d \n", x, y);

    return 0;
}

// Call by value
int sum(int a, int b)
{
    int c;

    c = a + b;
    a = 5;
    b = 5;
    return c;
}


void wrongSwap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// Call by reference
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}