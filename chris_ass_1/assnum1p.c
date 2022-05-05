#include <stdio.h>
int main(){
    int arr[100];
    int arr2[100];
    int i,size;

    printf("PLZ ENTER SIZE OF ARRAY!!: \n");
    scanf("%d",&size);


    
    for (i=0;i<size;i++)
    {
        printf("element- %d\n",i);
        scanf("%d",&arr[i]);
    }

    for (i=0;i<size;i++)
    {
        arr2[i] = arr[i];
    }

    printf("THIS ARE THE ELEMRNT YOU INPUTED!!:\n");
    for(i=0;i<size;i++)
    {
        printf("%d||\t",arr[i]);
    }
    printf("DUPLICATION SUCCESFUL!!! \nPRINTING YOUR INPUT INTO ANOTHER ARRAY\n PLZ WAIT\n");

    for(i=0;i<size;i++)
    {
        printf("%d||\t",arr2[i]);
    }
    printf("THIS IS THE DUBLICATE\nGOODBYE(--__--)");



    return 0;
}