#include <stdio.h>
#include <string.h>
struct vector
{
    int x;
    int y;
};
struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
typedef struct complex
{
    int real;
    int imag;
} comp;

void display(comp c)
{
    printf("The value of real part is %d \n", c.real);
    printf("The value of imaginary part is %d \n", c.imag);
}

typedef struct bankAccount
{
    int accountNo;
    char accountName[20];
    float balance;
} bank;

typedef struct date
{
    int date;
    int month;
    int year;
} date;

void displayDate(date d){
    printf("The date is %d/%d/%d\n",d.date,d.month,d.year);
}

int dateCompare(date d1, date d2){
    //Make decision on the basis of year comparison
    if(d1.year>d2.year){
        return 1;
    }
    if (d1.year<d2.year){
        return -1;
    }
    //Make decision on the basis of month comparison
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    //Make decision on the basis of date comparison
    if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date){
        return -1;
    }
    return 0;
}
void main()
{
    //Q1 - Create a two dimensional vector using structures in C

    // struct vector v1, v2, sum;
    // v1.x = 10;
    // v1.y = 20;
    // printf("X dim is %d and Y dim is %d \n", v1.x, v1.y);
    // v2.x = 10;
    // v2.y = 20;
    // printf("X dim is %d and Y dim is %d \n", v2.x, v2.y);

    //Q2 - Write a function sumVector which returns the sum of two vectors passed to it. The vector must be two dimensional
    // sum = sumVector(v1, v2);
    // printf("X dim of result is %d and Y dim of result is %d \n", sum.x, sum.y);

    //Q4 - Write a program to illustrate the use of arrows -> operators in C
    // struct vector vec;
    // struct vector *ptr;
    // ptr = &vec;
    // (*ptr).x = 10;
    // printf("%d \n", vec.x);
    // ptr->y = 20; //Answer for Q4
    // printf("%d \n", vec.y);

    //Q5 - Write a program with a structure representing a complex number
    comp real, imag;
    // real.real = 10;
    // imag.imag = 20;
    // printf("%d + i %d\n", real.real, imag.imag);

    //Q6 - Create an array of 5 complex numbers created in problem 5 and display them with the hrlp of display function. The values must be taken as an input from the user.
    // comp cnums[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter the real value for %d \n", i + 1);
    //     scanf("%d", &cnums[i].real);

    //     printf("Enter the imag value for %d \n", i + 1);
    //     scanf("%d", &cnums[i].imag);
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     display(cnums[i]);
    // }

    //Q8 - create a structure representing a bank account of a customer.
    // bank rohanDas;
    // rohanDas.accountNo = 45544554;
    // strcpy(rohanDas.accountName, "Rohandas");
    // rohanDas.balance = 100000;
    // printf("Ac - %d \nname-%s\nBalance -%.2f",rohanDas.accountNo,rohanDas.accountName,rohanDas.balance);

    //Q9 - Write a structure capable of storing date. Write a function to compare these dates.
    date d1 = {18, 1, 2022};
    date d2 = {1, 11, 1022};
    displayDate(d1);
    displayDate(d2);
    int a = dateCompare(d1, d2);
    printf("Date comparison function returns %d\n", a);
}