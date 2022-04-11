#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int add();
int sub();
int divi();
int mut();
int sqri();
int main(){
    printf("WELCOME TO MY CAL:\n");
    printf("PRESS \n1. ADDITION\n2. SUBTRACTION\n3. DIVISION\n4. SQURE ROOT\n");
    int op;
    scanf("%d",&op);
    switch (op)
    {
    case 1:
    system("CLS");
    return add();
        break;
    case 2:
    system("CLS");
    return sub();
    break;
    case 3:
    system("CLS");
    return divi();
    break;
    case 4:
    system("CLS");
    return sqri();
    
    default:
    printf("INVALID !!!");
    exit(0);
        break;
    }
    
    return 0;
}
int add(){
    int num1,num2;
    printf("ENETR NUM1: \n");
    scanf("%d",&num1);
    printf("ENTER NUM2: \n");
    scanf("%d",&num2);
    num1+=num2;
    printf("THE RESULT OF THIS OPERATION IS = %d\n",num1);
     printf("PRESS THE ENTER KEY TO GO BACK TO MAIN MENU \n");
    getchar();
    getchar();
    system("CLS");
    return main();


}
int sub(){
    int num1,num2;
    printf("ENETR NUM1: \n");
    scanf("%d",&num1);
    printf("ENTER NUM2: \n");
    scanf("%d",&num2);
    num1-=num2;
    printf("THE RESULT OF THIS OPERATION IS = %d\n",num1);
     printf("PRESS THE ENTER KEY TO GO BACK TO MAIN MENU \n");
    getchar();
    getchar();
    system("CLS");
    return main();

}
int divi(){
    int num1,num2;
    printf("ENETR NUM1: \n");
    scanf("%d",&num1);
    printf("ENTER NUM2: \n");
    scanf("%d",&num2);
    num1/=num2;
    printf("THE RESULT OF THIS OPERATION IS = %d\n",num1);
     printf("PRESS THE ENTER KEY TO GO BACK TO MAIN MENU \n");
    getchar();
    getchar();
    system("CLS");
    return main();

}
int mut(){
    int num1,num2;
    printf("ENETR NUM1: \n");
    scanf("%d",&num1);
    printf("ENTER NUM2: \n");
    scanf("%d",&num2);
    num1*=num2;
    printf("THE RESULT OF THIS OPERATION IS = %d\n",num1);
    printf("PRESS THE ENTER KEY TO GO BACK TO MAIN MENU \n");
    getchar();
    getchar();
    system("CLS");
    return main();

}
int sqri(){
    int num1,c;
    printf("ENETR THE NUM TO SQURE: \n");
    scanf("%d",&num1);
    c = sqrt(num1);
    printf("THE RESULT OF THIS OPERATION IS = %d\n",c);
     printf("PRESS THE ENTER KEY TO GO BACK TO MAIN MENU \n");
    getchar();
    getchar();
    system("CLS");
    return main();

}