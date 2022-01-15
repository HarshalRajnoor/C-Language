#include <stdio.h>
#include <string.h>// provides standard functions for string manipulation
void main(){
    // strlen -> this function is used to count the length of a string excluding the null character(\0)
    char *str = "Harshal Sunil Rajnoor";
    int a = strlen(str);
    printf("The length of the string is %d \n", a);

    // strcpy --> this function is used to copy the content of second string into first string passed to it 
    char source[] = "Harshal";
    char target[50];
    strcpy(target, source);
    printf("The characters in target array are %s \n", target);

    // strcat --> this function is used to concatenate two strings 
    char s1[8] = "Harshal";
    char s2[]  = "Rajnoor";
    strcat(s1,s2);// s1 contains HarshalRajnoor (no space in between)
    printf("The characters in s1 are %s \n", s1);

    /* strcmp --> 1) This function is used to compare two strings
                  2) It returns :0 if strings are equal
                  3) Negative value if first string's mismatching character's ASCII value is not greater than second string's 
                     corresponding character. It returns positive values otherwise

    */
   char s3[] = "Harshal";
   char s4[] = "Harshalz";
   int value = strcmp(s3, s4);
   printf("The value is %d \n", value);

}