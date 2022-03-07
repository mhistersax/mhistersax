#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int re;
    char ch;
    printf("PLZ ENTER YOUR OPERATOR:\n");
    scanf("%c",&ch);

    printf("WELCOME TO MY CALCULATOR:\n");
    printf("PLZ ENTER YOUR FIRST NUM: \n");
    scanf("%d",&a);
    printf("PlZ ENTER YOUR SECOUND NUM: \n");
    scanf("%d",&b);

    if (ch=='+')
    {
        re = a + b;
    printf("THE TOTAL RESULT OF YOUR OPERATION IS %d \n",re);

    }
    else if (ch=='-')
    {
        re = a - b;
        printf("THE TOTAL RESULT OF YOUR OPERATION IS %d \n",re);

    }
     else if (ch=='/')
    {
        re = a / b;
        printf("THE TOTAL RESULT OF YOUR OPERATION IS %d \n",re);
    }
     else if (ch=='*')
    {
        re = a * b;
        printf("THE TOTAL RESULT OF YOUR OPERATION IS %d \n",re);
    }
    else{
        printf("INVALID OPERATOR DECTECTED!!!!\n");
        exit(0);
    }



    return 0;
}