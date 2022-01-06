#include <stdio.h>

void arrayReversal(int *arr, int n)
{
    int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void positiveInt(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    printf("The number of positive integers is %d \n", count);
}
void printTable(int *arr, int num, int n){
    printf("The multiplication table of %d is: \n", num);
    for(int i = 0; i<n; i++){
        arr[i] = num * (i+1);
    }
    for(int i = 0; i<n; i++){
        printf("%d X %2d = %2d \n", num,i+1, arr[i]);
    }
    printf("*****************************************************\n\n");
}
int main()
{

    //QQ - Create a 2d array by taking input from the user. Write a display function to print the content on the screen.
    int arr[2][5] = {{451, 452, 453, 454, 455}, {551, 552, 553, 554, 555}};
    int n = 2, m = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("The element %d %d is %d \n", i, j, arr[i][j]);
        }
    }

    //Q1- Create an array of 10 numbers. Verify using pointer arithmetic that (ptr + 2) points to the third element where ptr
    //   is a pointer pointing to the first element of the array

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int *ptr = &array[0];
    int *ptr = &array[0];
    for (int i = 0; i < 10; i++)
    {
        printf("The elements of the array are %2d with address %u \n", *ptr, &array[i]);
        ptr++;
    // }
    ptr = ptr+2;
    if(ptr==&array[2]){
        printf("The address of pointer matches with the address of the array \n");
    }
    else{
        printf("The address of pointer does not matches with the address of the array \n");

    }

    // Q3 - Write a program to create an array of 10 integers and store the multiplication table of 5 in it
    int number = 5;

    int arr[10];

    for (int i = 1; i < 10; i++)
    {
        arr[i] = 5*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %2d = %2d \n", number,i+1,arr[i]);
    }
    //Q4 - Repeat problem 3 for a general input provided by the user by using scanf
    int num;
    printf("Enter the number to print the multiplication table of \n");
    scanf("%d", &num);
    int arr[10];

    for (int i = 0; i <= 10; i++)
    {
        arr[i] = num*(i);
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %2d = %2d \n", num,i,arr[i]);
    }

    //Q5 - Write a program containing a function which reverses an array passed to it
    int array[] = {1,2,3,4,5,6,7};
    // for(int i = 9; i>=0; i--){
    //     printf("%d\n",array[i]);
    // }
    arrayReversal(array, 7);
    for(int i = 0; i<7; i++){
        printf("The value of element %d is %d \n",i, array[i]);
    }

    //Q6 - Write a program containing functions which counts the number of positive integers in an array
    int ar[] = {1,2,3,-4,5};
    positiveInt(ar, 5);

    //Q7 - Create an array of size 3X10 containing tables of 2,7 and 9 respectively
    int multiTable[3][10];
 
    for (int i = 0; i < 10; i++)
    {
        multiTable[0][i] = 2 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {

        printf("2 X %2d = %2d \n", i + 1, multiTable[0][i]);
    }

    printTable(multiTable[0], 2 , 10);
    printf("\n");
    printTable(multiTable[1], 7 , 10);
    printf("\n");
    printTable(multiTable[2], 9 , 10);

    //Q9 - Write a program to print the address of a 3D array
    int arr[2][3][4];
    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            for(int k = 0; k <4;k++){
                printf("The adrress of arr[%d][%d][%d] is %u \n", i,j,k,&arr[i][j][k]); 
            }
        }
    }
    return 0;
}