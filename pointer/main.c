#include <stdio.h>
int main(){
    #define max 100 //this statement means i am using the word max as 100, so anywhere i apply max it will show 100
    int arr[max]; // declare my array with size of ma (100)
    arr[0] = 1; //first array elemnt
    arr[1] = 2; //second elemnt
    arr[2] = 3; //third elemnt
    arr[3] = 4; //fourth element
    arr[4] = 5; //fifth element

    printf("the first value of this array is %d with memory address of %d\n",arr[0],&arr[0]); //i used  arr[0] because i was addressing the first element
    //using &arr[0] means i want c to print the adress 
    printf("the first value of this array is %d with memory address of %d\n",arr[2],&arr[2]);


    
    return 0;
}