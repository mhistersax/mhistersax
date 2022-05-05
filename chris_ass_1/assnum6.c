#include <stdio.h>
int main(){
    int i;
    int j;
    //int k;
    int size1;
    int size2;
    #define max 100
    #define low 100
    //int size3;
   int num1,num2,num3;
    int arr[max][low];

  /*  printf("%d\n",arr[1][0][4]);
    printf("%d\n",arr[0][1][2]);
    printf("%d\n",arr[0][2][2]);*/
    printf("THE FIRST SIZE FOR THE 3D ARRAY!\n");
    scanf("%d",&size1);
    printf("THE SECOUND SIZE FOR THE 3D ARRAY!!\n");
    scanf("%d",&size2);
     
     for(i=0;i<size1;i++)
     {
         for(j=0;j<size2;j++)
         {
             printf("ENTER ELEMENT %d-%d\n",i,j);
             scanf("%d",&arr[i][j]);
         }
     }
     for(i=0;i<size1;i++)
     {printf("\n");
         //printf("\n");
         //printf("\t");
         for(j=0;j<size2;j++)
         {
             
             //printf("\t");
             //printf("\n");
             printf("%d\t",arr[i][j]);
            // printf("\t\t");
         }
     }
     num1=0;

      for(i=0; i<size1; i++)
    {
        for(j=0;j<size2;j++)
        {
            num1 = num1 + arr[i][j];

        }
        
    }
    printf("\nSum of all rows of array = %d\n", num1);
num2=0;
    
        for(j=0;j<size2;j++)
        {
            for(i=0; i<size1; i++)
          {
              num2 = num2 + arr[j][i];

          } 
            

        }
        
    
    printf("Sum of all column of array = %d\n", num2);
     
      
     


    return 0;
}