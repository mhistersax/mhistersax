#include <stdio.h>
#include <stdlib.h>
int retryii();
int main()
{
   //Mr Chris second assignment
   //Program that detect your gender, and print out the  complete statement

   //initializing variable
   char name[20];
   printf("---------------------------------------------------------------------------------------------------");
   printf("\n---------------------------------------------------------------------------------------------------");
   printf("\nWHAT YOUR NAME: \n");
   scanf("%s",&name);

     printf("\n---------------------------------------------------------------------------------------------------");
   printf("\n---------------------------------------------------------------------------------------------------");
   printf("\n\t\t\t\tWELCOME %s",name);
   printf("\n---------------------------------------------------------------------------------------------------");
   printf("\n---------------------------------------------------------------------------------------------------");

   int gender;
   printf("\nDEAR %s, I WOULD LOVE TO KNOW YOU MORE:\n",name);
   printf("PLEASE SPECIFY YOUR GENDER [1. FOR M OR 2. FOR F ??]: \n");
   printf("---------------------------------------------------------------------------------------------------");
   printf("\n---------------------------------------------------------------------------------------------------");
   printf("\nYOU ARE WHICH GENDER: ");
   scanf("%d",&gender);



   switch (gender){

   case 1 :
    printf("\nYOU ARE A MALE %s",name);
    printf("\n---------------------------------------------------------------------------------------------------");
    break;
   case 2 :
    printf("YOU ARE A FEMALE %s\n",name);
    printf("\n---------------------------------------------------------------------------------------------------");
    break;
   default:
    printf("YOUR INPUT WAS NOT RECOGNISED!!!!\n");
    printf("\n---------------------------------------------------------------------------------------------------");
    printf("\n\t\t\tYOU HAVE ONE MORE CHANCE TO FILL THIS FORM");
    printf("\n---------------------------------------------------------------------------------------------------");
    return (retryii());
    //printf("---------------------------------------------------------------------------------------------------");
    //printf("\n---------------------------------------------------------------------------------------------------");
    break;



   }
   printf("---------------------------------------------------------------------------------------------------");

   printf("\n---------------------------------------------------------------------------------------------------\n\n");

   //greeting the user

     return 0;
}

  int retryii(){

       int retry;
        printf("\nPLEASE SPECIFY YOUR GENDER [1. FOR M OR 2. FOR F ??]: \n");

   scanf("%d",&retry);
   printf("---------------------------------------------------------------------------------------------------");
   printf("\n---------------------------------------------------------------------------------------------------");


       switch (retry){
   case 1 :
    printf("\nYOU ARE A MALE ");
    printf("\n---------------------------------------------------------------------------------------------------");
    printf("\n---------------------------------------------------------------------------------------------------");
    break;
   case 2 :
    printf("YOU ARE A FEMALE \n");
    printf("---------------------------------------------------------------------------------------------------");
    printf("\n---------------------------------------------------------------------------------------------------");
    break;
   default:
       printf("\n---------------------------------------------------------------------------------------------------");
       printf("\n---------------------------------------------------------------------------------------------------");
    printf("\nYOUR CHANCE OF CHOOSING IS UP!!!!");
    printf("\n---------------------------------------------------------------------------------------------------");
    printf("\n---------------------------------------------------------------------------------------------------");
    exit(0);
    break;

}
  }