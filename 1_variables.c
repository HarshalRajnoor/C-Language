#include <stdio.h>
int main()
{

    int a = 15;
    printf("The value of a is: %d \n", a);

//  & Returns the address of a variable.
 
    printf("Enter the number");
    int b;
    scanf("%d", &b);
    printf("The value of b is:%d \n", b);

    int aa = 10;
    int bb = 11.12;
    float cf = 4.5;
    char cc = '$';
    printf("%d \n", aa);
    printf("%d \n", bb);
    printf("%f \n", cf);
    printf("%c \n", cc);

    printf("The sum of aa & bb is %d \n", aa + bb);
    return 0;
}