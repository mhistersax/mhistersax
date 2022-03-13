#include <stdio.h>
int main(){
    int i,j;
    #define max 100
    int arr[max];
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,re1,re2,re3;
    int b,a,c;
    b=-1;

    printf("HELLO WELCOME\n");
    printf("THIS PROGRAM WIL ONLY BE FOR 3 X 3 MATRICS!!\n");
    printf("ENTER THE FIRST ELEMENT: \n");
    scanf("%d",&arr[0]);
    printf("ENTER THE SECOUND ELEMENT: \n");
    scanf("%d",&arr[1]);
    printf("ENTER THE THIRD ELEMENT: \n");
    scanf("%d",&arr[2]);
    printf("ENTER THE FOURTH ELEMENT: \n");
    scanf("%d",&arr[3]);
    printf("ENTER THE FIFTH ELEMENT: \n");
    scanf("%d",&arr[4]);
    printf("ENTER THE SIXTH ELEMENT: \n");
    scanf("%d",&arr[5]);
    printf("ENTER THE SEVENTH  ELEMENT: \n");
    scanf("%d",&arr[6]);
    printf("ENTER THE EIGHT ELEMENT: \n");
    scanf("%d",&arr[7]);
    printf("ENTER THE LAST ELEMENT: \n");
    scanf("%d",&arr[8]);

    printf("THIS IS THE DISPLAY OF YOUR INPUTED NUMBERS\n");
    printf("%d\t\t%d\t\t%d\n%d\t\t%d\t\t%d\n%d\t\t%d\t\t%d\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8]);
    printf("INORDER TO SOLVE A 3 X 3 MATRIX DETERMINAT YOU HAVE TO FOLLOW THIS STEPS\n");
    printf("FIRST SPECIFY WHICH ROWS YOU WANT TO SOLVE\n");
    //printf("THEN THE DETERMINAT WILL BE SOLVED\n");
    printf("YOU WILL NOTICE THAT AT THE END OF EVERY ROWS THERE ARE ARITHMETIC SIGNS\n");
    printf("THIS SIGNS ARE THERE TO GUIDE YOU WHEN SOLVING THE DETERMINAT!!\n");
    printf("%d\t\t%d\t\t%d +  -  +\n%d\t\t%d\t\t%d  -  +  -\n%d\t\t%d\t\t%d  +  -  +\n\n\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8]);
    printf("+%d|   |%d|\t|-%d|\t|+%d|\n",arr[0],arr[0],arr[1],arr[2]);
    printf("  |   | |\t| |\t| |\n");
    printf("-%d|   |%d|\t|+%d|\t|-%d|\n",arr[3],arr[3],arr[4],arr[5]);
    printf("  |   | |\t| |\t| |\n");
    printf("+%d|   |%d|\t|-%d|\t|+%d|\n",arr[6],arr[6],arr[7],arr[8]);
    printf("  |   | |\t| |\t| |\n");

    int op;
    printf("WHICH ROW DO YOU WANT TO FIND THE DETERMINAT!!\n");
    scanf("%d",&op);
    switch(op)
    {
    case 1:
    printf("\n\nWE WOULD SOLVE THE FIRST BATCH\n");
    printf("%d %d\n%d %d\n",arr[4],arr[5],arr[7],arr[8]);
    printf("WE WOULD MULTIPLY %d & %d\n",arr[4],arr[8]);
    printf("AND ALSO MULTIPLY %d & %d\n",arr[5],arr[7]);
    num1 = arr[4] * arr[8];
    num2 = arr[5] * arr[7];
    printf("THE TOTAL OF %d & %d = %d\nTHE TOTAL OF %d & %d = %d\n",arr[4],arr[8],num1,arr[5],arr[7],num2);
    re1 = arr[0]*(num2 - num1);
    printf("THE RESULT OF THIS BATCH IS = %d\n",re1);

    printf("\n\nWE WOULD SOLVE THE SECOND BATCH!!!\n");
    printf("%d %d\n%d %d\n",arr[3],arr[5],arr[6],arr[8]);
    printf("WE WOULD MULTIPLY %d & %d\n",arr[3],arr[5]);
    printf("AND ALSO MULTIPLY %d & %d\n",arr[6],arr[8]);
    a = arr[1] * b;
    num3 = arr[3] * arr[8];
    num4 = arr[6] * arr[5];
    printf("THE TOTAL OF %d & %d = %d\nTHE TOTAL OF %d & %d = %d\n",arr[3],arr[8],num3,arr[6],arr[5],num4);
    re2 = a * (num4 - num3);
    printf("THE RESULT OF THIS BATCH IS = %d\n",re2);

    printf("\n\nWE WOULD SOLVE THE THIRD BATCH!!!\n");
    printf("%d %d\n%d %d\n",arr[3],arr[4],arr[6],arr[7]);
    printf("WE WOULD MULTIPLY %d & %d\n",arr[3],arr[4]);
    printf("AND ALSO MULTIPLY %d & %d\n",arr[6],arr[7]);
    num5 = arr[3] * arr[7];
    num6 = arr[6] * arr[4];
    printf("THE TOTAL OF %d & %d = %d\nTHE TOTAL OF %d & %d = %d\n",arr[3],arr[7],num5,arr[6],arr[4],num6);
    re3 = arr[2]*(num6 - num5);
    printf("THE RESULT OF THIS BATCH IS %d\n",re3);

        break;

    case 2:
    printf("WE WOULD SOLVE FOR THE SECOUND BATCH!!!");
    
    default:
    printf("go sleep");
        break;
    }

    
    return 0;
}