#include <stdio.h>
#define max 100
int main(){
    int arr[max],s;
    int *a;
    int sum = 0;

    printf("plz enetr size: \n");
    scanf("%d",&s);
    int i;

    for( i =0;i<s;i++)
    {
        printf("element %d of %d\n",i,s);
        scanf("%d", &arr[i]);
        
        

    }

    a = arr;

    for (i = 0; i<s;i++)
    {
        sum = sum + *a;
        a++;
        
    }
    printf("the sum of this operation is %d\n",sum);


    
    return 0;
}