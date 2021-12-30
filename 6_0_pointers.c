#include <stdio.h>

int main()
{
    /*
    1) int *j --> declare a variable j of int pointer and it's same for other data types as well
    5) int ** --> declares a pointer to a pointer, if it  stores the address of a pointer j
                  then pointer j is also storing address of some other variable and 
                  it can be formed to any level
                  
    2) & is the 'address of' operator
    3) * is the 'value at address' operator
    4) *(&j) --> value at address of j
    5) Format specifier for printing a pointer is '%u'

*/
    int i = 72;
    int *j = &i;
    printf("\n");
    printf("1) The address of integer i is %u \n \n", j);

    printf("2) The value of integer i is %d \n \n", *j); // uses %d format specifier
    printf("3) The value of integer i is %u \n \n", *j); // uses %u format specifier

    printf("4) The address of integer j is %u \n \n", &j);
    
    printf("5) The value stored at the address of pointer variable j is %u \n \n", *(&j));
    // 5) prints the value at address of j

    printf("6) The address of i is %u \n \n", &i); //directly printing address of variable i

    return 0;
}