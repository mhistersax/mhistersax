#include <stdio.h>
int main(){
    int a,b,*c,*d,e;
    printf("enter first num: \n");
    scanf("%d",&a);
    printf("enter second num: \n");
    scanf("%d",&b);
     c = &a;
     d = &b;

     printf("this result are been swapped\n\n");
     printf("the new value of num 1 = %d\n",*d);
     printf("the new value of num 2 = %d\n",*c);

    return 0;
}