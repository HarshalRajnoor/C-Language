#include <stdio.h>
#include<math.h>

int add(int a, int b); // Function prototype

int factorial(int x);
int main()
{
    /*
    Imp points
    1) A function can also be nested i.e a function inside a function
    2) A function can be called directly or indirectly
    3) The value which a function takes as a input is kmown as arguments and the output is known as 
       return value which can be int, float, double etc


    There are two types of functions in C
    1) Library functions --> Commonly required functions grouped together in a file or disk
    2) User defined functions --> These functions are declared and defined by the user


    Note
    1) Parameters are the values or variable placeholders in function definition
    2) Arguments are the actual values passed to the function while makinig calls
    */
    // printf("The value of a + b is %d \n", add(5, 4));
    int c;
    c = add(5, 4); // Function Call
    printf("The value of a+b is %d \n", c);

    // Quick Quiz
    int side;
    printf("Enter the value of side \n");
    scanf("%d", &side);

    printf("The value of area is %f \n", pow(side, 2));

    // Factorial
    int y = 3;
    printf("The factorial of %d is %d \n", y , factorial(y));

    return 0;
}

int add(int a, int b) // Function Defintion
{
    int result;
    result = a + b;

    return result;
}

int factorial(int x){
    printf("Calling factorial %d \n", x);
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}