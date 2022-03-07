#include <stdio.h>
int main(){
    int a, spec, sum=0;
    int arr[50];

    printf("INPUT THE SIZE OF THE ARRAY!!\n");
    scanf("%d",&spec);

    for (a=0; a<spec; a++)
    {
        printf("ENTER THE ELEMENT OF ARRAY!!!: \n");
        scanf("%d",&arr[a]);

    }

    for (a=0;a<spec;a++)
    {
        sum += arr[a];
      }
        printf("THE TOTAL IS %d\n",sum);

       
         

    
        
    
    
    return 0;
}