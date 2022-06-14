#include<stdio.h>
#include<stdlib.h>
//declaring functions
int menu();
int iniamt(int a, int b);
int deposit(int a, int b);
int withdraw(int a, int b);
int checkbalance(int a, int b);
 int main(){
     int pin,pin2,rel,a,b,choice;
     char fname[30], sname[30]; 
     printf("______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO  BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
     printf("WELCOME DEAR USER\n");
        printf("PLEASE ENTER YOUR FIRST AND LAST NAME ONLY\n");
        scanf("%s %s",fname,sname);
         printf("WELCOME %s %s\n",fname,sname);
         printf("Please create your four digit pin below\n");
         scanf("%d",&pin);
          printf("Please create your four digit pin below\n");
         scanf("%d",&pin2);
         rel = iniamt(pin,pin2);
         if(pin!=pin2)
         {
             printf("PIN DOES NOT MATCH\n");
             return main();
         }
         
         printf("Congratulations your four digit pin is %d\n",pin);
         return menu();
         system("CLS");
         return menu();
         return 0;
     }
int menu(){
    //printf("hello");
     int pin,pin2,rel,a,b,c,d,choice;
     printf("______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO  BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
     printf("\n[1] Open account with any amount \n");
    printf("[2] Deposit\n");
    printf("[3] Withdraw\n");
    printf("[4] Display balance\n");
    printf("[5] Cancle transaction\n");
    printf("\nSelect your transaction: \n\n");
    scanf("%d", &choice);
    switch (choice) {
            case 1:
            //system("CLS");
               return iniamt(a,b);
                //menu(&choice);
                break;
            case 2:
            //system("CLS");
                return deposit(c,d);
               // menu(&choice);
                break;
            case 3:
            //system("CLS");
               return  withdraw(a,b);
                //menu(&choice);
                break;
            case 4:
            //system("CLS");
               return checkbalance(a,b);
               // menu(&choice);
                break;
            case 5:
            //system("CLS");
                printf("Thank you for using JAY BANK PLC");
                exit(0);
                break;
            default:
                printf("invalid Choice");
               // menu(&choice);
                break;
     }
}
int iniamt(int a,int b){
    int op,j,rel;
    printf("______________________________________________________________________________________\n");
     printf("\t\t                  WELCOME TO  BANK PLC......\n");
     printf("______________________________________________________________________________________\n");
    printf("Input an amount you will like to start your account with: \n");
    scanf("%d",&j);
    printf("input your four digit pin for confirmation: \n");
    scanf("%d",&op);
    if(a==op)
    {
    // rel =deposit(j,b);
    printf("______________________________________________________________________________________\n");
     printf("\n                                          Your new balance is %d\n", j);
     printf("______________________________________________________________________________________\n");
     //system("CLS");
     return menu();
     //rel =deposit(j,b);
     //system("CLS");
     return menu();
    }
    else{
        printf("wrong pin\n");
        system("CLS");
        return iniamt(a,b);
    }
    
    return 0;
}
//deposit
int deposit(int a ,int b){
    /*int op,j,rel;
    int depositAmount;
    printf("______________________________________________________________________________________\n");
     printf("\t\t             WELCOME TO JAY BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
    printf("Enter an amount you would like to deposit: \n");
    scanf("%d",&depositAmount);
    printf("input your four digit pin for confirmation: \n");
    scanf("%d",&op);
    if(b==op)
    {
     a += depositAmount;
     rel = withdraw(a,b);
     printf("______________________________________________________________________________________\n");
    printf("\n                                           Your balance is %d\n", a);
    printf("______________________________________________________________________________________\n");
    return menu();
    //system("CLS");
     return menu();
    }
    else{
        printf("wrong pin\n");
        system("CLS");
        return deposit(a,b);
    }
    
    return 0;*/
}
//withdraw
int withdraw(int a, int b){
     /*int op,j,rel;
    int withdrawAmount;
    printf("______________________________________________________________________________________\n");
     printf("\t\t             WELCOME TO  BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
    printf("Enter the amount you would like to withdraw: \n");
    scanf("%d",&withdrawAmount);
    if (a<withdrawAmount){
        printf("Sorry, you do not have enough balance. Please try again. . . \n");
        return withdraw(a,b);
    }
     printf("input your four digit pin for confirmation: \n");
    scanf("%d",&op);
    if(b==op)
    {
     a -= withdrawAmount;
     printf("______________________________________________________________________________________\n");
    printf("\n                                                           Your balance is %d\n", a);
    printf("______________________________________________________________________________________\n");
    //system("CLS");
    return menu();
    rel = checkbalance(a,b);
     return menu();
    }
    else{
        printf("wrong pin\n");
        system("CLS");
        return withdraw(a,b);
    }
    
    
    return 0;*/
}
//displaying the balance
int checkbalance(int a, int b){
    /*int op;
    printf("______________________________________________________________________________________\n");
     printf("\t\t                   WELCOME TO BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
    printf("input your four digit pin for confirmation: \n");
    scanf("%d",&op);
    if(b==op)
    {
        printf("______________________________________________________________________________________\n");
        printf("                                         Your current balence is: $%d\n", a);
        printf("______________________________________________________________________________________\n");
        exit(0);
    }
    else {
        printf("wrong pin\n");
    }
    
    return 0;*/
}