#include <stdio.h>
#define max 100
int main(){
    int arr[max];
    int i,s,a;
    int *p = arr;
    printf("Please enter the size of the array\n");
    scanf("%d", &s);
    for(i=0; i<s; i++){
        printf("enter element of the array\n");
        scanf("%d",&arr[i]);
    }
    p = arr;
    
    
    return 0;
}