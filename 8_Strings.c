#include <stdio.h>
void main()
{
    /*
    1) A string is a 1D character array which is terminated using null character(\0)
    2) %s format specifier can used to print a string instead of loops
    3) We can use %s with scanf and take input as strings from the user
    4) Once a string is defined using char st[] = "Harshal"; , it cannot be reinitialized to something else
    5) A string defined using pointers caan be reinitialized --> ptr = "Harshal Sunil Rajnoor"
    */
    // char s[] = {'H', 'A', 'R', 'S', 'H', 'A', 'L', '\0'};
    // char *j = s;
    // // \0 is a null character it is used to terminate character strings
    // for (int i = 0; i < 7; i++)
    // {
    //     // printf("%c", s[i]);
    //     printf("%d \n", j);
    //     j++;
    // }

    //QQ - Create an array using "" and print it
    // char str[] = "Harshal";    // convenience feature - in this case C adds a null character automatically

    // char *ptr = str;

    // while (ptr != '\0')//ptr != \0 --> is true and when ptr ==\0 its false and program terminates 
    // {
    //     printf("%c\n", str[i]);
    // }

    // %s - A String - Format specifier
    // char ch[] = "Harshal Sunil Rajnoor";
    // char *chr = "Harshal Sunil Rajnoor";
    // printf("%s \n",ch);
    // printf("%s \n",chr);

    // Using %s with scanf (Note: scanf cannot be used to input multi word strings with spaces)
    // char s[50];
    // printf("Enter your name: \n");
    // scanf("%s", s);// scanf add the null character automatically when the enter key is pressed
    // printf("Your name is %s \n", s);
    
    // gets() and puts()
    // gets() is a function which can be used to recieve a multi word string
    // puts()
    // char c[50];
    // printf("Enter your name: \n");
    // gets(c);// the entered string is stotred in c
    // // puts(c);// prints the string and places the cursor on next line
    // printf("Your name is %s \n", c);

    //Declaring a string using pointers
    // char *chptr = "Harshal";
    // char chptr[] = "Harshal";
    // //This tells the compiler to store the string in memory and assigned address is stored in a char pointer
    // printf("%s \n", chptr);

    //Difference between char st[] and char *st
    // char st[] = "Harshal";// cannot be reinitialized again 
    char *st= "Harshal";
    st = "Harshal Sunil Rajnoor";// can be reinitialized
    printf("%s \n", st);
}