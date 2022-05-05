#include<stdio.h>
#include"myatm.h"
   void transaction(){
       int another_transaction; 
             printf("\t\t#======*YOU ARE HIGHLY WELCOME TO BENNYJAY'S BANKING PLC*======# \n");
           while(pin!=2410){
                 printf("\n KINDLY INPUT YOUR PIN : ");
                 scanf("%d",&pin);
            if(pin == 2410){
                printf("SUCCESSFUL!!!");
            }else{
                 printf("INVALID PIN!!!");
            }
               }
               printf("\n\t\t\t\t#======*AVAILABLE TRANSACTIONS*======#");
               printf("\n\n\t\t1.Withdrawal");
               printf("\n\n\t\t2.Deposit");
               printf("\n\n\t\t3.Balance Check");
             printf("\n\n\t\tPlease select any option: ");
               scanf("%d",&option);
              
               switch (option)
               {
               case 1:
               do{
                    printf(">>SAVINGS(1)");
                printf("\n>>CURRENT(2)");
               printf("\n Select from option");
                 scanf("%d",&option_opt);
                 
                  } while(option_opt > 2 );
                     if(option_opt<= 2 ){
                 printf("\nPick from the following options :");
                printf("\n>>1000(1)");printf("\n\t\t\t>>2000(2)");
                printf("\n>>5000(3)");printf("\n\t\t\t>>10000(4)");
                printf("\n>>15000(5)");
                            scanf("%d",&opt);
                           if (opt == 1){
                                    printf("DEAR CUSTOMER YOU'VE SUCCESSFULLY WITHDRAWN 1000");
                                    
                           }
                      else if(opt == 2){
                          printf("YOU'VE SUCCESSFULLY WITHDRAWN 2000");
                      }
                       else if(opt == 3){
                          printf("YOU'VE SUCCESSFULLY WITHDRAWN 5000");
                 }
                          else if(opt == 4){
                          printf("YOU'VE SUCCESSFULLY WITHDRAWN 10000");
                          }
                           
                              else if(opt == 5){
                          printf("YOU'VE SUCCESSFULLY WITHDRAWN 15000");
                              }
                                }
                                 printf("\n\n\t\tDo you want another transaction? \n Press 1 to proceed and 2 to exit \n\n");
                scanf("%d",&another_transaction);
                if(another_transaction==1){
                    //call our transaction method here
                    transaction();
                }
                                 break;
                                 case 2:
                                 //DEPOSIT
                     printf("\n\n\t\tKINDLY ENTER AMOUNT TO DEPOSIT : ");
                     scanf("%d",&deposit);
                     //updating balance variable
                     balance = balance + deposit;
                     printf("DEAR CUSTOMER THANK YOU FOR DEPOSITING......\n");
                     printf("YOUR NEW BALANCE IS %d",balance);
                                 //request for another transaction
                                 printf("\n\n\t\tDo you want another transaction? \n Press 1 to proceed and 2 to exit \n\n");
                scanf("%d",&another_transaction);
                if(another_transaction==1){
                    //call our transaction meyhod here
                    transaction();
                }  break;  
                      case 3:
                      //BALANCE
                       printf("\n\nYour bank balance is : %d",balance);
                           //request for another transaction
                                 printf("\n\n\t\tDo you want another transaction? \n Press 1 to proceed and 2 to exit \n\n");
                scanf("%d",&another_transaction);
                if(another_transaction==1){
                    //call our transaction method here
                    transaction();
                }
                  break;  
               }
               }
int main(){
       transaction();
           
    return 0;
}
