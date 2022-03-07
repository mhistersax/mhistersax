#include <stdio.h>
#include <stdlib.h>




int main()
{
     //INTRODUCTION
    printf("\t\t\t\t\tWELCOME TO MY BILLING SYSTEM");
    printf("\nKINDLY CHOOSE ANY THIS PRODUCT\n");
    printf("NOTE YOU CAN ONLY CHOSOSE 5 PODUCT\n\n\n");
    //LIST OF ITEMS AVAILABLE IN OUR STORE
    printf("PRODUCTS NAMES INCLUDE;\n");
    printf("1.RICE | PRO1111 \n");
    printf("2.BREAD| PRO1112 \n");
    printf("3.CHOCOLATE| PRO1113\n");
    printf("4.BEANS| PRO1114\n");
    printf("5.YAM| PRO1115\n");
    printf("6.COCO| PRO1116\n\n\n");
    //END OF LIST

    // initializing products

    //PRINTING THE MENU TO THE CUSTOMER

    printf("\t\t\t\t#THE PRICE LIST FOR THE PRODUCT\n");
    printf("\t\t\t\t#RICE IS $100\n");
    printf("\t\t\t\t#BREAD IS $200\n");
    printf("\t\t\t\t#CHOCOLATE IS $300\n");
    printf("\t\t\t\t#BEANS IS $400\n");
    printf("\t\t\t\t#YAM IS $500\n");
    printf("\t\t\t\t#COCO IS $600\n\n\n");
    //END OF PRICE LIST

    //THE CHART

    int select;
    printf("PLZ CHOOSE THE FIRST PRODUCT OF YOUR CHOICE\n");
    scanf("%d",&select);
    if (select==1){
        printf("YOU CHOSSED RICE---- AMOUNT IS $100\n");
    }
    else if (select==2){
        printf("YOU CHOOSED BREAD----AMOUNT IS $200\n");
    }
    else if (select==3){
        printf("YOU CHOOSED CHOCOLATE---AMOUNT IS $300\n");
    }
    else if (select==4){
        printf("YOU CHOSSED BEANS---AMOUNT IS $400\n");
    }
    else if (select==5){
        printf("YOU CHOOOSED YAM---AMOUNT IS $500\n");
    }
    else if (select==6){
        printf("YOU CHOSSED COCO---PRICE IS $600\n");
    }
    else if (select==7){
        printf("ERROR PLZ CHOOSE ONLY 5 PRODUCT\n");
        //enforcing user to only pick one option at a time

    }


    int select2;
    printf("\nPLZ CHOOSE THE SECOUND PRODUCT OF YOUR CHOICE\n");
    scanf("%d",&select2);
    if (select2==1){
        printf("YOU HAVE CHOOSEN THIS OPTION BEFORE, PLZ DONT CHOOSE AGAIN\n");
    }
    else if (select2==2){
        printf("YOU CHOOSED BREAD----AMOUNT IS $200\n");
    }
    else if (select2==3){
        printf("YOU CHOOSED CHOCOLATE---AMOUNT IS $300\n");
    }
    else if (select2==4){
        printf("YOU CHOSSED BEANS---AMOUNT IS $400\n");
    }
    else if (select2==5){
        printf("YOU CHOOOSED YAM---AMOUNT IS $500\n");
    }
    else if (select2==6){
        printf("YOU CHOSSED COCO---PRICE IS $600\n");
    }
    else if (select2==7){
            printf("ERROR PLZ CHOOSE ONLY 5 PRODUCT\n");

    }


     int select3;
    printf("\nPLZ CHOOSE THE THIRD PRODUCT OF YOUR CHOICE\n");
    scanf("%d",&select3);
    if (select3==1){
        printf("YOU CHOSSED RICE---- AMOUNT IS $100\n");
    }
    else if (select3==2){
        printf("YOU HAVE CHOOSEN THIS OPTION BEFORE, DONT CHOOSE IT AGAIN\n");
    }
    else if (select3==3){
        printf("YOU CHOOSED CHOCOLATE---AMOUNT IS $300\n");
    }
    else if (select3==4){
        printf("YOU CHOSSED BEANS---AMOUNT IS $400\n");
    }
    else if (select3==5){
        printf("YOU CHOOOSED YAM---AMOUNT IS $500\n");
    }
    else if (select3==6){
        printf("YOU CHOSSED COCO---PRICE IS $600\n");
    }
    else if (select3==7){
            printf("ERROR PLZ CHOOSE ONLY 5 PRODUCT\n");

    }

 int select4;
    printf("\nPLZ CHOOSE THE FORTH PRODUCT OF YOUR CHOICE\n");
    scanf("%d",&select4);
    if (select4==1){
        printf("YOU CHOSSED RICE---- AMOUNT IS $100\n");
    }
    else if (select4==2){
        printf("YOU CHOOSED BREAD----AMOUNT IS $200\n");
    }
    else if (select4==3){
        printf("YOU HAVE CHOOSEN THIS OPTION BEFORE, PLZ DONT CHOOSE IT AGAIN\n");
    }
    else if (select4==4){
        printf("YOU CHOSSED BEANS---AMOUNT IS $400\n");
    }
    else if (select4==5){
        printf("YOU CHOOOSED YAM---AMOUNT IS $500\n");
    }
    else if (select4==6){
        printf("YOU CHOSSED COCO---PRICE IS $600\n");
    }
    else if (select4==7){
            printf("ERROR PLZ CHOOSE ONLY 5 PRODUCT\n");

    }

 int select5;
    printf("\nPLZ CHOOSE THE FIFTH PRODUCT OF YOUR CHOICE\n");
    scanf("%d",&select5);
    if (select5==1){
        printf("YOU CHOSSED RICE---- AMOUNT IS $100\n");
    }
    else if (select5==2){
        printf("YOU CHOOSED BREAD----AMOUNT IS $200\n");
    }
    else if (select5==3){
        printf("YOU CHOOSED CHOCOLATE---AMOUNT IS $300\n");
    }
    else if (select5==4){
        printf("YOU HAVE CHOOSEN THIS PRODUCT, PLZ DONT CHOOSE IT AGAIN.\n");
    }
    else if (select5==5){
        printf("YOU CHOOOSED YAM---AMOUNT IS $500\n");
    }
    else if (select5==6){
        printf("YOU CHOSSED COCO---PRICE IS $600\n\n\n");
    }
    else if (select5==7){
            printf("ERROR PLZ CHOOSE ONLY 5 PRODUCT\n\n\n");

    }



    printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n");

    float pri2;
	float pri3;
	float pri4;
	float pri5;
	float pri6;

	pri2 = 100;
	pri3 = 200;
	pri4 = 300;
	pri5 = 400;
	pri6 = 500;

	pri2+=pri3+=pri4+=pri5+=pri6;
	printf("THANK YOU FOR CHOOSING, YOUR TOTAL IS---> $ %lf\n\n",pri2);
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    return 0;
}
	