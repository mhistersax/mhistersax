#include <stdio.h>
int sec();
int main(){
    int n,b;
    printf("enter num: \n");
    scanf("%d",&n);
    b = sec(n);
    return 0;
}
int sec(int a)
{
    if(a%2==0)
    {
        printf("%d is even\n",a);
    }
    else 
    {
        printf("%d is odd\n",a);
    }
}