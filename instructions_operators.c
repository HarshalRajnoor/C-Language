#include <stdio.h>
#include <math.h>
int main()
{

// Type decleration instruction

    int aa = 10,bb,c; 
    bb = c =aa;
    printf("The value of aa is %d \n",aa);
    printf("The value of bb is %d \n",bb);
    printf("The value of c is %d \n",c);

    float a = 1.1;
    float b = a + 8.9;
    printf("The value of b is %f \n",b);
    

    // Arithmetic Instructions
    
    //Arithmetic Operation is performed on cperands with the help of operators
    
    /*
        Arithmetic Operators
    +	Adds two operands.	A + B = 30

    −	Subtracts second operand from the first.	A − B = -10

    *	Multiplies both operands.	A * B = 200

    /	Divides numerator by de-numerator.	B / A = 2

    %	Modulus Operator returns the  remainder after division.	B % A = 0 (10 % 3 = 1 and -10 % 3 = -1 and 10 % -3 = 1 )

    ++	Increment operator increases the integer value by one.	A++ = 11

    --	Decrement operator decreases the integer value by one.
*/
    int x = 10;
    int y = 3;
    printf("The value of x + y is %d \n", x+y);
    printf("The value of x - y is %d \n", x-y);
    printf("The value of x * y is %d \n", x*y);
    printf("The value of x / y is %d \n", x/y);

    printf("10 when divided by 3 leaves the remainder of %d \n", x%y);

//  Exponentiation in C
    // printf("10^3 is %d \n", x^y); Wrong
    printf("5^3 is %f \n", pow(5, 3)); 


    return 0;
}