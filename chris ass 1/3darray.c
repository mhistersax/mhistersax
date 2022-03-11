#include <stdio.h>
int main(){
    int i;
    int j;
    int k;
    int size1;
    int size2;
    int size3;
   // int num1,num2,num3;
    int arr[20][30][40];

  /*  printf("%d\n",arr[1][0][4]);
    printf("%d\n",arr[0][1][2]);
    printf("%d\n",arr[0][2][2]);*/
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


    for (i=0;i<size1;i++)
    {
        for(j=0;j<size2;j++)
        {
            for(k=0;k<size3;k++)
            {
                printf("||%d \t",arr[i][j][k]);
                printf("\t\t|");
            
            }
            printf("\n");
        }
    }
    return 0;
}