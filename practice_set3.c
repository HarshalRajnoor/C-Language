#include <stdio.h>
int main()
{
    //Q2 - Write a program to find out whether a student is passed or fail
    float physics;
    printf("Enter your marks in physics \n");
    scanf("%f", &physics);

    float chemistry;
    printf("Enter your marks in chemistry \n");
    scanf("%f", &chemistry);

    float maths;
    printf("Enter your marks in maths \n");
    scanf("%f", &maths);

    float total = physics + chemistry + maths;
    float percentage = (total / 300) * 100;

    if ((percentage >= 40) || physics >= 33 || chemistry >= 33 || maths >= 33)
    {
        printf("Your percentage is %f and you are pass \n", percentage);
    }
    else
    {
        printf("Your percentage is %f and you are fail \n", percentage);
    }

    //Q3 - Calculate income tax paid by an employee
    float income, tax = 0;
    printf("Enter your income amount \n");
    scanf("%f", &income);

    if (income > 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income > 500000 && income <= 1000000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income > 1000000)
    {
       tax = tax + 0.05 * (income - 250000);
    }
    printf("The tax to be paid is %f \n", tax);

    return 0;
}