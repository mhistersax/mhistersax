#include <stdio.h>
#include <stdlib.h>
int add1();
int sub1();
int div1();
int mult1();
int main(){
    int m,n,sum;
    int op;
    printf("ENETR 1ST NUM:\n");
    scanf("%d",&m);
    printf("ENTER 2ND NUM:\n");
    scanf("%d",&n);
    printf("ENETR 1 FOR ADD\n2 FOR SUB\n3 FOR DIVITION\n4 FOR MULT\n");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
    goto try;
    break;
        break;
    case 2:
    goto try1;
    break;
        break;
    case 3:
    goto try2;
    break;
        break;
    case 4:
    goto try3;
        break; 
    default:
    printf("invalid!\n");
        break;
    }
    int sum1;
    int sum2;
    int sum3;
    int m1,n1,m3,m4,n4,m5,n5; 
    try:
    sum = add1(m,n);
    
    try1:
    sum1 = sub1(m,n);
    try2:
    sum2 = div1(m,n);
    try3:
    sum3 = mult1(m,n);
    return 0;
}
int add1(int m, int n)
{
    int resu;
    resu = m+n;
    printf("the addition of this operation is %d\n",resu);
    exit(0);
}
int sub1(int m1, int n1)
{
    int resu;
    resu = m1-n1;
    printf("the subtraction of this operation is %d\n",resu);
    exit(0);
}
int mult1(int m2, int n2)
{
   int resu;
   resu = m2*n2;
   printf("the multiplication of this operation is %d\n",resu);
   exit(0);
}
int div1(int m3, int n3)
{
   int resu;
   resu = m3/n3;
   printf("the division of this operation is %d\n",resu);
   exit(0);
}