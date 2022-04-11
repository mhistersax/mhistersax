#include <stdio.h>
int sec();
int main(){
    int n,m,b;
    printf("enter 1st num: \n");
    scanf("%d",&n);
    printf("enetr 2nd num: \n");
    scanf("%d",&m);
    b = sec(n,m);

    return 0;
}
int sec(int a, int b)
{
    printf("the new value of 1st num is %d\n",b);
    printf("the new value of 2nd num is %d\n",a);

}