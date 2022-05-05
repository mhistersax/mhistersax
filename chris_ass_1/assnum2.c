#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,b=1;
    int arr[100];
    int size;
    printf("plz enter your size of array\n");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("ENETR ELEMENT INTO ARRAY: %d = ",i);
        scanf("%d",&arr[i]);

    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i] == arr[j])
            {
                b++;
                break;
            
            
            }

        }
    }
     
    printf("THE TOTAL NUMBER OF DUBLICATED ARRAY DECTECTED IS %d",b);
    
    return 0;
}