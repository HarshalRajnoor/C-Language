#include <stdio.h>
float average(int a, int b, int c);

float temperature(int t);

float force(float m);

int fibonacci(int f);

int sumNumbers(int n);

void printPattern(int p);

void pattern(int o);
int main()
{
    //Q1- Write a function to calculate average of three numbers
    // int a;
    // printf("Enter the value of a \n");
    // scanf("%d", &a);
    // int b;
    // printf("Enter the value of b \n");
    // scanf("%d", &b);
    // int c;
    // printf("Enter the value of c \n");
    // scanf("%d", &c);
    // printf("The value of average is %f \n", average(a, b, c));

    //Q2- Write a program to convert celsius to Fahrenheit
    // int t ;
    // printf("Enter the value of Temperature \n");
    // scanf("%d", &t);
    // printf("The value of temperature in Fahrenheit is %f \n", temperature(t));

    //Q3- Write a program to calculate force of attraction on a body of mass m exerted by the the earth
    // float m;
    // printf("Enter the value of mass \n");
    // scanf("%f", &m);
    // printf("The force of attraction with mass %.1f kg is %.2f N \n",m , force(m));

    //Q4- Write a program using recursion to calculate nth element of fibonacci series
    // int f;
    // printf("Enter the number \n");
    // scanf("%d", &f);
    // printf("The element of the fibonacci series is %d \n", fibonacci(f));

    //Q5- What will this print int x = 3; printf(" %d %d %d, x, ++x, x++");
    // int x = 3;
    // printf("%d %d %d \n", x, ++x, x++);// --> printf statement executes from right to left
    // int y = 5;
    // printf("%d %d %d \n", y, y++,++y);// --> printf statement executes from right to left

    //Q6- Write a recursive function to sum first n natural numbers
    // int s;
    // printf("Enter the number to calculate sum \n");
    // scanf("%d", &s);

    // printf("The sum of first %d natural numbers is %d \n", s, sumNumbers(s));

    //Q7- Write a program to print progrs=am with n lines
    // int p;
    // printf("Enter the value of p to print pattern \n");
    // scanf("%d", &p);
    // printPattern(p);

    //Q8
    int o;
    printf("Enter the value of o \n");
    scanf("%d", &o);
    pattern(o);

    return 0;
}
//Q1
float average(int a, int b, int c)
{
    float average;
    average = (float)(a + b + c) / 3;
    return average;
}

//Q2
float temperature(int t)
{
    float celsius = (t * 9 / 5) + 32.00;
    return celsius;
}

//Q3
float force(float m)
{
    float force = m * 9.8;
    return force;
}

//Q4
int fibonacci(int f)
{
    if (f == 1)
    {
        return 1;
    }
    else if (f == 0)
    {
        return 0;
    }
    else
    {
        int fibonacci = (f - 1) + (f - 2);
        return fibonacci;
    }
}

//Q6
int sumNumbers(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum+=i;
    }
    return sum;
}

//Q7
void printPattern(int p){
   for(int i = 0; i<=p; i++){
        for(int j = 0; j<i; j++){
            printf("*");
        }
        printf("* \n");
    }
}
//Q8
void pattern(int o){
    if(o==1){
        printf("*\n");
        return;
    }
    pattern(o-1);
    for(int i = 0; i<(2*o-1); i++){
        printf("*");
    }
    printf("\n");
}