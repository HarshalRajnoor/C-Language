#include <stdio.h>
#include <stdlib.h>

void main()
{
    //malloc() - malloc stands for memory allocation. It takes number of bytes to be allocated as an input and returns a pointer of type void
    /*
    (int *)     --> casting void pointer to int 
    6           --> space for 6 ints 
    sizeof(int) --> return size of 1 int
    */

    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));

       for(int i =0; i<6;i++){
           printf("Enter the value of %d element \n", i);
           scanf("%d", &ptr[i]);
       }
       for(int i =0; i<6;i++){
           printf("The value of %d element is %d\n", i, ptr[i]);
       }

    //calloc() function - calloc stands for continuous allocation. It initializes each memory block with a default value of 0

    int *ptrr;
    int n;
    printf("Enter the number of elements \n");
    scanf("%d", &n);
    ptrr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element \n", i);
        scanf("%d", &ptrr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is %d\n", i, ptrr[i]);
    }
    free(ptrr);
    //free() function - We can free() function to de-allocate the memory. The memory allocated using malloc/calloc is not deallocated automatically.

    //realloc() function - Sometimes the dynamicaly allocated memory is insuffient or more than required. realloc() is used to allocate memory of new size using the previous pointer and size.

    int *fptr;
    fptr = (int *)malloc (6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element \n", i);
        scanf("%d", &fptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is %d\n", i, fptr[i]);
    }

    //reallocate fptr using realloc()
    fptr = realloc(fptr, 10*sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d element \n", i);
        scanf("%d", &fptr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d element is %d\n", i, fptr[i]);
    }
}