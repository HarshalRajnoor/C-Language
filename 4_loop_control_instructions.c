#include <stdio.h>

int main()
{
    /*
      i = i+1 is same as i++
      i+=10; increments i by 10 and it a compound assignment operator as -= , *= , /= and %=
     i++ --> is the post increment operator - first prints and then increments 
     ++i --> is the pre increment operator - first increment and then prints
     same goes for decrement operator --i or i--

     Primarily there are three type of loops
    1 --> while loop
    2 --> do while loop
    3 --> for loop

    In loops, the code in the loop keeps executing until the condition for the loop is false
    */

    // 1) While Loops in C

    int i = 0;

    while (i<=20)
    {
        if(i>=10){
            printf("The value of i is %d \n", i);
        }
        i++;
    }

    // 2) do-while loop
    /*
    ** do-while loop is a loop which exeutes at least once **

     do-while works same as while loop
     while    --> checks the condition ans then executes the code
     do-while --> first executes the code code and then checks the condition, 
                  if the condition in do-while is true then & then only it returns or 
                  otherwise it goes down

    */
    int a = 0;
    do{
        printf("The value of a is %d \n", a);
        a++;
    }while(a<=10);

    int x=0;
    int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    do{
        printf("The value of x is %d \n",x+1);
        x++;
    }while(x<n);

    // 3) for loop
    /*
    for(initialize ; condition / test ; increment / decrement)
       initialize          --> setting a loop counter to initial an initial value 
       test                --> checking a condition
       increment/decrement --> updating the loop counter 
    */
    for(int h = 0; h<=10; h++){
        printf(" the value of h is %d \n", h);
    }

    
    // Break statement in C
    /*
    The break statement is used to exit the loop irrespective of the conditon is true or false
    */
    int e = 0;
    do
    {
        printf("The value of e is %d \n", e);
        if(e ==5){
            break;
        }
        e++;
    } while (e <= 10);

    // The continue statement in C
    /*
    The continue statement is used to immedeately move to the next iteration of the loop

    */
    int skip = 5;
    int f = 0;
    while (f < 10)
    {
        f++;
        if (f != skip) // when the if is false (which is true except for 5) it prints else statement 
        {
            continue;
        }
        else
        {
            printf("%d \n", f);
        }
    }

    return 0;
}
