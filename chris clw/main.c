#include <stdio.h>
int main(){
    int sum;
    sum = 0;
    //4row five colo
    //
    int arr[4][5];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[0][3] = 4;
    arr[0][4] = 5;
    arr[1][0] = 6;
    arr[1][1] = 7;
    arr[1][2] = 8;
    arr[1][3] = 9;
    arr[1][4] = 10;
    arr[2][0] = 11;
    arr[2][1] = 12;
    arr[2][2] = 13;
    arr[2][3] = 14;
    arr[2][4] = 15;
    arr[3][0] = 16;
    arr[3][1] = 17;
    arr[3][2] = 18;
    arr[3][3] = 19;
    arr[3][4] = 20;

    /*printf("THE FIRST ROW AND SECOUND ELEMENT IS %d\n",arr[0][1]);
    printf("THE SECOUND ROW AND THIRD ELEMENT IS %d\n",arr[1][2]);
    printf("THE THIRD ROW AND FOURTH ELEMENT IS %d\n",arr[2][4]);
    printf("THE FOURTH ROW AND FIRST ELEMENT %d\n",arr[3][0]);
    sum = sum + arr[3][4];
   printf("THE TOTAL OF THIS ARRAY IS  %d",sum);*/

   int i,j;
   for (i=0;i<4;i++)
   {
       for (j=0;j<5;j++)
    {
        printf("%d\n",arr[i][j]);
    }
   }
    



    return 0;
}