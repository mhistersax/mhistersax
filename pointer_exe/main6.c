#include<stdio.h>  
  
#define max 100
  
int main()  
{  
    int arr[max], i, *ptr;  
    int size;
  
    
    printf("enetr size : \n");
    scanf("%d",&size);

    for(i = 0; i < size; i++){
         printf("enetr element %d of %d\n",i,size);
        scanf("%d", &arr[i]);

    }  
     
  
    ptr = &arr[size - 1];  
  
    printf("\nElements of array in reverse order ...\n");  
    for(i = 0; i < size; i++)
    { 
        printf("%d\n", *ptr--);

    }
          
  
    return 0;  
}  