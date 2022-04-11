#include <stdio.h>
int sec();
int main(){
    int mun1,num2,sum;
    printf("enetr 1st um: \n");
    scanf("%d",&mun1);
    printf("enter 2nd num: \n");
    scanf("%d",&num2);
    sum = sec(mun1, num2);
    return 0;
}
int sec(int a, int b)
{
    int result1;
    result1= a+b;
    printf("the total is %d\n",result1);

}