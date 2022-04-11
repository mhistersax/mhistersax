#include <stdio.h>
#include <stdlib.h>
int sec();
int main(){
    
    FILE *pp;
    pp = fopen("data.txt", "w");
    if(pp==NULL)
    {
        printf("error!!!\n");
    }
    int num1,num2;
    printf("enetr num1: \n");
    scanf("%d",&num1);
    printf("enetr secound number: \n");
    scanf("%d",&num2);

    fprintf(pp,"%d\n",num1);
    fprintf(pp,"%d\n",num2);
    fclose(pp);
    system ("CLS");
    return sec();

return 0;
}
int sec(){
     FILE *fp;
     int n,nn;
     fp = fopen("data.txt","r");
     fscanf(fp,"%d",&n);
     fscanf(fp,"%d",&nn);
     printf("the new value of num2 is %d\n",n);
     printf("the new value of num1 is %d\n",nn);
     
}
