#include <stdio.h>
int main()
{ /*
    Dcesion making in C 
    1--> if-else statement
    2--> switch-case statement
    */
    //  C progrsm to check whether a number is odd or even
    int a, b;
    printf("Enter the number \n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is even \n", a);
    }
    else
    {
        printf("%d is odd \n", a);
    }

    //  Relational operators in C

    /*
    ==	Equal to	                5 == 3  is evaluated to 0
    >	Greater than	            5 > 3   is evaluated to 1
    <	Less than	                5 < 3   is evaluated to 0
    !=	Not equal to	            5 != 3  is evaluated to 1
    >=	Greater than or equal to	5 >= 3  is evaluated to 1
    <=	Less than or equal to	    5 <= 3  is evaluated to 0
*/

    int age;
    printf("Enter your age \n");
    scanf("%d", &age);

    if (age != 15)
    {
        printf("You cannot drive \n");
    }
    else
    {
        printf("You can drive \n");
    }
    /*
    = --> is used as an assignment operator which assigns a value 
    == --> is used as an relational operator for equality check

    Here == is not used, which does creates any error but it is an assignment operator and in C 
    any non-zero number is true

    if (age = 15)
    {
        printf("You cannot drive \n");
    }
    */

    // Logical operators in C
    /*
    &&	Called Logical AND operator. If both the operands are non-zero, then the condition becomes true.	                                                         (A && B) is false.
   ||	Called Logical OR Operator. If any of the two operands is non-zero, then the condition becomes true.	                                                     (A || B) is true.
   !	Called Logical NOT Operator. It is used to reverse the logical state of its operand. If a condition is true, then Logical NOT operator will make it false. 	!(A && B) is true.
*/
    int vipPass = 1;
    int vipPass = 0;
    if ((age <= 70 && age >= 18) || vipPass == 1)
    {
        printf("You can drive");
    }
    else
    {
        printf("You cannot drive");
    }

    // Operator Precedence in C

    // if else can be written using conditional operators or ternary operators
    
    // Ternary operators ? : --> ternary operators
    // Condition? expression if true : expression if false
    int x;
    printf("Enter a number \n");
    scanf("%d", &x);
    (x<5)?printf("%d is less than 5\n", x):printf("%d is greater than 5\n", x);


    // Switch case 
    int rating;
    printf("Enter your Rating (1-5) \n");
    scanf("%d", &rating);

    switch(rating){
        case 1 : printf("Your rating is 1 \n");
        break;

        case 2: printf("Your rating is 2 \n");
        break;

        case 3: printf("Your rating is 3 \n");
        break;

        case 4: printf("Your rating is 4 \n");
        break;

        case 5: printf("Your rating is 5 \n");
        break;

        default : printf("Invalid rating");
    }
    return 0;
}