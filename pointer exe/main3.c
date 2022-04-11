#include <stdio.h>
int main(){
    #define max 100
    int arr[max],arr1[max];
    int *a,*b,*c,s;
    *a = arr;
    *b = arr1;
    
    printf("plz enetr the size of array: \n");
    scanf("%d",&s);

    for(int i =0;i<s;i++)
    {
        printf("enter element %d of %d",i,s);
        scanf("%d", (a + i));
    }

    c = a[s - 1];

    
    return 0;
}