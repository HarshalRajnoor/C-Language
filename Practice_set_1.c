#include <stdio.h>
#include <math.h>
int main()
{
    //Q1 - Write a program to calculate to area of rectangle
        //Using Hard Coded Inputs
    int length = 10;
    int breadth = 10;
    printf("The area of rectangle is %d \n", length*breadth);

    // Using user input
    float len;
    printf("Enter the value of lenght \n");
    scanf("%f", &len);

    float bre;
    printf("Enter the value of breadth \n");
    scanf("%f", &bre);

    printf("The area of rectangle is %f \n", len*bre);

    // Q2 - Calculate area of circle
    printf("Enter the value of Radius \n");
    float radius;
    scanf("%f", &radius);

    float area = M_PI * radius*radius;
    printf("The area of Circle is %f \n", area);

    printf("Enter the value of Radius \n");
    float radius;
    scanf("%f", &radius);
    printf("Enter the value of Height \n");
    float height;
    scanf("%f", &height);

    float area = M_PI * radius*radius * height;
    printf("The Volume of Cylinder is %f \n", area);

    //Q3 Write a program to convert Celsius toFahrenheit
    printf("Enter the temperature in Celsius \n");
    float Celsius;
    scanf("%f", &Celsius);
    float Fahrenheit = Celsius * 1.8 + 32;
    printf("The temperature in Fahrenheit is %f \n", Fahrenheit);

    //Q 4 -- calculate the simple interest 
    printf("Enter the value of principal \n");
    float principal;
    scanf("%f", &principal);
    
    printf("Enter the value of rate \n");
    float rate;
    scanf("%f", &rate);
    
    printf("Enter the years \n");
    float years;
    scanf("%f", &years);

    printf("The value of simple interest is %f", (principal*rate*years)/100);
    return 0;
}