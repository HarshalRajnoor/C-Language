#include <stdio.h>

int main()
{

    // Q1- Write a program to print a multiplication of a given number n
    // int n;
    // printf("Enter the value of n \n");
    // scanf("%d", &n);

    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d X %2d = %3d \n", n, i, n * i);
    // }

    // Q2- Write a program to print multiplication table of 10 in reverse order
    // int a = 10;
    // for (int j = 10; j >= 0; j--)
    // {
    //     printf(" %d X %2d = %3d \n", a, j, a * j);
    // }

    // Q5- Write a program to sum first 10 natural numbers using while loops
    // int sum = 0, s = 0;
    // while(s<=10){
    //     sum+=s;
    //     printf("%d \n", sum);
    //     s++;
    // }

    // Q7- Write a program to sum the numbers occuring in the multiplication table of 8
    // int x = 8;
    // int result;
    // int sum1 = 0;
    // for (int y = 0; y <= 10; y++)
    // {
    //     result = x * y;
    //     sum1 += result;
    // }
    // printf("%d \n", sum1);

    // Q8- Write a program to calculate factorial of a number
    // int f;
    // printf("Enter the value of f to calculate factorial \n");
    // scanf("%d", &f);

    // int factorial = 1;
    // for(int m = 1; m<=f; m++){
    //     factorial *= m;

    // }printf("The value of %d factorial is %d \n",f, factorial);

    //Q9- Write a program to check whether a number is prime or not
    int p;
    printf("Enter a number \n");
    scanf("%d", &p);
    int prime = 1;
    for (int r = 2; r < p; r++)
    {
        if (p % r == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0 && p!=2)
    {
        printf("This is not a prime number\n");
    }
    else
    {
        printf("This is a prime number\n");
    }
    return 0;
}