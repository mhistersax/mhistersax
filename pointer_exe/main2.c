#include <stdio.h>

#define max 100

int main()
{
    int arr[max];
int i, size;
int *pp = arr;
printf("plz input your size of array: \n");
scanf("%d",&size);
for (i=0;i<size;i++)
{
    printf("enter element %d of %d\n",i,size);
    scanf("%d", (pp + i));
}
printf("this are the elemnt in the array: \n");
for (i=0;i<size;i++)
{
    printf("%d, ", (*pp + i));
}

    return 0;
}

/*

*/