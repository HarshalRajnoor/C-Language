#include <stdio.h>

void main()
{
    /*
    1) File Pointer - A file pointer is a structure which needs to be created for opening the file
                      A file pointer is a pointer to this structure of the file
                      File pointer is needed for communication between the file and the program.
    */

    //Creating a file pointer --> FIle *ptr; ptr = fopen("Filename.ext","mode");
    FILE *ptr;
    ptr = fopen("first.c", "r"); // For reading the file
    ptr = fopen("first.c", "w"); // For writing to a file

    /*
    File opening modes in C File I/O
    "r"   --> open for reading 
    "rb"  --> open for reading in binary 
    If the file does not exist, fopen return NULL

    "w"  --> open for writing //if file does not exist it generates it automatically
    "wb" --> open for writing in binary
    If the file exists, the contents contents will be overwritten

    "a"  --> open for append (ex. add something to the end of a written document)
    If the does not exist, it will be created
    */

    /*
    There are two types of files
    1) Text files(.txt, .c)
    2) Binary files (.jpg, .dat)
   */

    //File reading
    FILE *ptr1;
    int num;
    int num2;
    ptr1 = fopen("sample.txt", "r");

    if (ptr1 == NULL)
    {
        printf("This file does not exist \n");
    }
    else
    {
        //fscanf is file counterpart of scanf
        //This will read an integer from file in num variable

        fscanf(ptr1, "%d", &num); //fscanf performs scanf operation in a file
        fscanf(ptr1, "%d", &num2);

        fclose(ptr1); //
        printf("The value of num is %d \n", num);
        printf("The value of num2 is %d \n", num2);
    }
    //QQ - Modify the program above to check whether the file exists or not before opening the file

    /*Closing the file
    It is very important to close the file after read or write. It is achieved using fclose as follows:

    fclose(ptr1);
    This will tell the compiler that we are done working with the file and the associated resources could be freed.
    */

    //Writing to a file - We can write to a file in a very similar manner like we read the file
    FILE *fptr;
    int number = 100;
    fptr = fopen("generated.txt", "w");
    //The fprintf() function is used to write set of characters into file
    fprintf(fptr,"Hello There \n");
    fprintf(fptr,"The number is %d \n",number);
    fprintf(fptr,"Thanks for using fprintf \n");
    fclose(fptr);

    //fgetc() and fputc() --> are useed to read and write a characterfrom/to a file

    //fgetc() --> used to read a character from a file

    //fgetc() for reading the sample1.txt file
    FILE *pt;
    pt = fopen("sample1.txt","r");
    // char c= fgetc(pt);
    printf("%c ", fgetc(pt));

    //fputc() --> used to write character 'c' to the file
        pt = fopen("sample1.txt", "w");
        fputc('$',pt);
        fclose(pt);

    //Reading a file using fgetc()
    FILE *ptrr;
    char c1;
    ptrr = fopen("sample1.txt", "r");
    c1 = fgetc(ptrr);
    while (c1 != EOF)
    {
        printf("%c", c1);
        c1 = fgetc(ptrr);
    }

    //EOF : End of File --> fgetc returns EOF when all the characters from a file have been read. 
    //                      So we cna write a check like below to detect end of file
}