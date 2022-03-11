#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, size1, sum=0;

    /* Input size of the array */
    printf("THE FIRST SIZE FOR THE  ARRAY!\n");
    scanf("%d",&size1);

    /* Input elements in array */
    
    for(i=0; i<size1; i++)
    {
        printf("Enter %d elements in the array: \n", i);
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size1; i++)
    {
        printf("%d \n", arr[i]);
        //scanf("%d", &arr[i]);
    }

    /*
     * Add each array element to sum
     */
    for(i=0; i<size1; i++)
    {
        sum = sum + arr[i];
    }


    printf("Sum of all elements of array = %d", sum);

    return 0;
}