#include <stdio.h>
int main(){
    int a, b,e;
    int *c,*d;
    printf("plz enter first num: \n");
    scanf("%d",&a);
    printf("plz enter second num: \n");
    scanf("%d",&b);
    c =&a;
    d =&b;
     e = *c + *d;

     printf("the sum of %d + %d = %d",*c,*d,e);

    

    
    return 0;
}