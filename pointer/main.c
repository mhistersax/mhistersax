#include <stdio.h>
int main(){
    #define max 100
    int arr[max];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    printf("the first value of this array is %d with memory address of %d\n",arr[0],&arr[0]);
    printf("the first value of this array is %d with memory address of %d\n",arr[2],&arr[2]);


    
    return 0;
}