#include <stdio.h>
#define MAX 100
#define max1 100

int main()
{
    int a[MAX], b[max1];
    
    int i, size;

    /* Input size of the array */
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    /* Input array elements */
    printf("Enter elements of source array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }

    /*
     * Copy all elements from source array to dest array
     */
    for(i=0; i<size; i++)
    {
        b[i] = a[i];
    }

    /* 
     * Print all elements of source array
     */
    printf("\nElements of source array are : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", a[i]);
    }

    /*
     * Print all elements of dest array
     */
    printf("\nElements of dest array are : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", b[i]);
    }

    return 0;
}