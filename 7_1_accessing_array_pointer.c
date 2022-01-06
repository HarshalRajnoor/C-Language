#include<stdio.h>

void printArray(int *ptr, int n){
    for(int i = 0; i<n;i++){
        printf("The value of %d element is %d \n", i+1,*(ptr+i));
    }
}
// void printArray1(int ptr[], int n){
//     for(int i = 0; i<n;i++){
//         printf("The value of %d element is %d \n", i+1,ptr[i]);
//     }
//     ptr[2] = 456;//changes the value in main as well
// }
int main(){
    // int marks[4];
    // int *ptr;
    // // ptr = marks;
    // ptr = &marks[0];
    // for(int i = 0; i<4; i++){
    //     printf("Enter the marks of %d student \n", i + 1);
    //     scanf("%d", ptr);
    //     ptr ++;
    // }
    // for(int i = 0; i<4; i++){
    //     printf("The marks of %d student is %d \n",i+1, marks[i]);
        
    // }

    // passing arrays to functions
    // int arr[] = {771,255,23,423,53,6,7};
    // printArray(arr, 7);

    // printArray1(arr,7);
    // printf("%d \n", arr[2]);

    //Multi-Dimensional Array
    int n_students = 3;
    int n_subjects = 5;
    int marks[3][5];
    for(int i = 0; i<n_students; i++){
        for(int j = 0; j<n_subjects; j++){
            printf("Enter the marks of student %d in subject %d \n", i+1, j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i = 0; i<n_students; i++){
        for(int j = 0; j<n_subjects; j++){
            printf("The marks of student %d in subject %d is %d \n", i+1, j+1,marks[i][j]);
            
        }
    }
    return 0;
}