#include <stdio.h>
int main(){
    int arr[2][3][4];
    int i,j,k;
    int a,b,c,d;
            
             printf("%d\n",d);
    int size1,size2,size3;
    printf("THE FIRST SIZE FOR THE 3D ARRAY!\n");
    scanf("%d",&size1);
    printf("THE SECOUND SIZE FOR THE 3D ARRAY!!\n");
    scanf("%d",&size2);
    printf("THE THIRD SIZE FOR THE 3D ARRAY!!\n");
    scanf("%d",&size3);

    for(i=0;i<size1;i++)
    {
        printf("\n");
        for(j=0;j<size2;j++)
        {
            printf("\n");
            for(k=0;k<size3;k++)
            {
        printf("ENTER THE %d-%d-%d ELEMRNT\n",i,j,k);
        scanf("%d",&arr[i][j][k]);
            }
        }
    }

   for(i=0;i<size1;i++)
    {
        for(j=0;j<size2;j++)
        {
            for(k=0;k<size3;k++)
            {
                
            printf("%d\n\n",arr[i][j][k]);
            
a = i;
            b = j;
            c = k;
            d = size2 * size3 ;
            
            }
        }
        
    }
    printf("%d\n",d);
   



    /*printf("this is the 2d array!!\n");
    int b;
    int a = size2 * size3;
    int arr1;
    a = arr1;
    b = size1;*/
    int arr1;
    for(i=0;i<size1;i++)
    {
        for(j=0;j<d;j++)
        {
            printf("%d\n",i,j);
        }
    }

    
    return 0;
}