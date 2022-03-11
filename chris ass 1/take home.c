#include <stdio.h>
int main(){
    int arr[4][5],rol,col;
    for (rol=0;rol<4;rol++)
    {
        for(col=0;col<5;col++)
        {
            printf("INPUT %d - %d\n",rol,col);
            scanf("%d",&arr[rol][col]);
        }


    }
    printf("this are all the inputed element in ths array!!!\n");
    for(rol=0;rol<4;rol++)
    {
        printf("\n");
        for(col=0;col<5;col++)
        {
            printf("%d |\t",arr[rol][col]);

        }
    }
    return 0;
}

/*#include <stdio.h>    
int main (){  
int arr[4][5],rows,cols;//4 for rows 5 for cols    
    for (rows=0;rows<4;rows++)//for user input  
    {    
        for (cols=0;cols<5;cols++)//since cols<5 it will go back to 'i' and increment it by 1
        {  
            printf("Input element in %d-%d: ",rows,cols);                
            scanf("%d",&arr[rows][cols]);    
        }    
    } */   