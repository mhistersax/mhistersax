#include <stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int *a,*b;
    arr[0] = *a;
    arr[2] = *b;
    printf("the first element is %d\n",a);
    printf("the first element is %d\n",b);

    a = &arr[0];
    b =  &arr[2];
    printf("the first element is %d\n",a);
    printf("the first element is %d\n",b);


    
    return 0;
}