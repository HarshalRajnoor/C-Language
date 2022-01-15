#include <stdio.h>
//#include <string.h>

int strlen1(char *st)
{
    char *ptr = st;
    int length = 0;
    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }
    return length;
}

void slice(char *str1, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        str1[i] = str1[i + m];
        i++;
    }
    str1[i] = '\0';
}

void encrypt(char *e){
    char *ptr = e;
    while(*ptr != '\0'){
        *ptr = *ptr+1;
        ptr++;
    }
}
void decrypt(char *e){
    char *ptr = e;
    while(*ptr != '\0'){
        *ptr = *ptr-1;
        ptr++;
    }
}

int occurence(char *st, char c)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

void checkChar(char *str, char c)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            printf("The entered character exist in the sting \n");
            break;
        }

        else
        {
            printf("The entered character does not exist in the sting \n");
        }
        ptr++;
    }
}
void main()
{
    //Q2 - Write a program to take string as an input from the user using %c and %s. Confirm that that
    //    the strings are equal
    char arr1[34];
    char arr2[34];
    char c;
    int i = 0;

    printf("Enter the value of first string \n");
    scanf("%s", arr1);
    printf("Enter the value of second string character by character \n");

    while(c!= '\n'){
        fflush(stdin);
    scanf("%c", &c);
    arr2[i] = c;
    i++;
    }
    arr2[i-1] = '\0';
    printf("%d \n",i);
    printf("The value of arr1 is %s \n", arr1);
    printf("The value of arr2 is %s \n", arr2);
    printf("strcmp for these strings is %d \n", strcmp(arr1, arr2));

    //Q3 - Write your version of strlen form function from <string.h>
    //    char str[] = "Harshal";
    //    int len = strlen1(str);
    //    printf("The length of the string is %d \n", len);

    /*Q4 - Write a program slice() to slice a string. It should change the original string such that 
           it is now sliced string. Take m and n as the starting and the ending point of the slice
    */
    char str1[] = " Harshal ";
    slice(str1, 0, 8);
    printf("%s", str1);

    //Q5 - Write your version of strcpy from strings.h
    char c1[20] = {'H', 'A', 'R', 'S', 'H', 'A', 'L', '\0'};
    char c2[20] = {'R', 'A', 'J', 'N', 'O', 'O', 'R', '\0'};
    int u = 0;
    int v = 0;
    while(u != '\0'){

        v++;
    }

    //Q6 - Write a program to encrypt a string by adding 1 to the ascii value of its characters
    char e[] = "Harshal";
    encrypt(e);
    printf("Encrypted string is %s \n",e);

    // //Q7 - Write a program to decrypt the encrypted string in problem 6
    decrypt(e);
    printf("Decrypted string is %s \n",e);

    //Q8 - Write a program to count the occurence of a character in a string
    char strng[] = "harshal sunil rajnoor";
    int count = occurence(strng, 'a');
    printf("The occurence is %d \n", count);

    //Q9 - Write a program to check whether a given character is present in the string or not
    char *z = "harshal";
    checkChar(z, 'a');
    
}