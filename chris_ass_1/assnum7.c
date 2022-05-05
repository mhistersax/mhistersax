#include <stdio.h>
//#include <stdlib.h>
#define max 100
int main(){
    int i,j,num1;
    int arr[max];
    printf("welcome\n");
    printf("ENTER SIZE OF ARRAY\n");
    scanf("%d",&num1);
    if(num1<=3)
    {
        printf("SIZE NOT SUFFICENT FOR CREATING A TRIANGLE\n");
        //exit(0);

    }
    else
    {
        for(i=0;i<num1;i++)
    {
        printf("ENTER ELEMT %d\n",i);
        scanf("%d",&arr[i]);

    }

    }
printf("THIS IS THE TRIANGLE FORMED FROMT HIS ARAY!!!\n");
    for(i=0;i<num1;i++)
    {
        for(j=i;j<num1;j++)
        {
            printf(" ");
        }
        for(j=0; j<(2 * i-0); j++)
        {
            printf("%d",arr[i]);
        }
        printf("\n");
    }
    

    return 0;
}