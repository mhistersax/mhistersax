#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#define max 100
int product();
int transaction();
int transaction1();
int transaction2();
int transaction3();
int main(){
    int rel=1;
     int sum=100;
    char pro2[max];
    printf("_____________________________________________________________________________________________\n");
   printf("                                 WELCOME TO OUR BILLING SYSTEM:\n");
   printf("_______________________________________________________________________________________________\n");
   printf("                          KINDLY CHOOSE ANY PRODUCT OF YOUR CHOICE\n\n");
   printf("  Product Name                      Product Code                       Product Price\n");
   printf("_______________________________________________________________________________________________\n");
   printf("Product 1 is rice                  Product code:1000                  price $100\n");            
   printf("________________________________________________________________________________________________\n");
   printf("Product 2 is beans                 Product code:1100                   price $200\n");
   printf("_________________________________________________________________________________________________\n");
   printf("Product 3 is apple                 Product code:1110                   price $300\n");
   printf("_________________________________________________________________________________________________\n");
   printf("Product 4 is yam                   Product code:1111                   price $500\n");
   printf("_________________________________________________________________________________________________\n");
   printf("Product 5 is bread                 Product code:1011                   price $500\n");
   printf("_________________________________________________________________________________________________\n");
  int op,i;
  printf("HOW MANY PRODUCT WOULD YOU LOVE TO BUY:\n");
  scanf("%d",&op);
  if(op==1)
  {
      //system("CLS");
    return product();
  }
  else if(op==2)
  {
      //system("CLS");
    return transaction();
  }
  else if(op==3)
  {
      //system("CLS");
    return transaction1();
  }
  else if(op==4)
  {
      //system("CLS");
    return transaction2();
  }
  else if(op==5)
  {
      //system("CLS");
   return transaction3();
  }
  else
  {
    printf("invalid\n");
  }
    return 0;
}
int product(){
    printf("              WELCOME TO CART \n");
    printf("ENETR THE FOLLOWING PRODUCT CODE OF YOUR CHOICE\n");
    int ope,rel=0;
    scanf("%d",&ope);
    if(ope==1000)
    {
       printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" RICE          $100          1000\n");
      rel = 100 * 1;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if(ope==1100)
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf("  BEANS          $200          1100\n");
      rel = 200 * 1;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if(ope==1110)
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf("  APPLE           $300          1110\n");;
      rel = 300 * 1;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if(ope==1111)
    {
      printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" YAM          $500          1111\n");
      rel = 500 * 1;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");   
    }
    else if(ope==1011)
    {
        printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" BREAD          $500          1011\n");
      rel = 500 * 1;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else{
       printf("invalid\n");
       exit(0);
    }
    return 0;
}
int transaction(){
    printf("       WELCOME TO CART   \n");
    int op,op1,rel=0;

      printf("ENETR THE FIRST PRODUCT CODE OF YOUR CHOICE\n");
      scanf("%d",&op);
      printf("ENETR THE SECOND PRODUCT CODE OF YOUR CHOICE\n");
      scanf("%d",&op1);
     if((op==1000) && (op1==1000))
    {
       printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" RICE          $100          1000\n");
        printf(" RICE          $100          1000\n");
      rel = 100 + 100;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1000) && (op1==1100))
    {
        printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" RICE          $100          1000\n");
        printf(" BEANS         $200          1100\n");
      rel = 100 + 200;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1000) && (op1==1110))
    {
        printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" RICE          $100          1000\n");
        printf(" APPLE         $300          1110\n");
      rel = 100 + 300;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1000) && (op1==1111))
    {
     printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" RICE          $100          1000\n");
        printf(" YAM           $500          1111\n");
      rel = 100 + 500;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");   
    }
    else if((op==1000) && (op1==1011))
    {
        printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" RICE          $100          1000\n");
        printf(" BREAD         $500          1011\n");
      rel = 100 + 500;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1100) && (op1==1000))
    {
     printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" BEANS         $200          1100\n");
        printf(" RICE          $100          1000\n");
      rel = 100 + 200;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");  
    }
    else if((op==1100) && (op1==1100))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" BEANS          $200          1100\n");
        printf(" BEANS          $200          1100\n");
      rel = 200 + 200;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1100) && (op1==1110))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" BEANS          $200          1100\n");
        printf(" APPLE          $300          1110\n");
      rel = 200 + 300;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");

    }
    else if((op==1100) && (op1==1111))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" BEANS          $200          1100\n");
        printf("  YAM           $500          1111\n");
      rel = 200 + 500;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1100) && (op1==1011))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" BEANS          $200          1100\n");
        printf("  BREAD         $500          1011\n");
      rel = 200 + 500;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1110) && (op1==1000))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" APPLE          $300          1110\n");
        printf(" RICE           $100          1000\n");
      rel = 300 + 100;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1110) && (op1==1100))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" APPLE           $300          1110\n");
        printf(" BEANS           $200          1100\n");
      rel = 300 + 200;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1110) && (op1==1110))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" APPLE           $300          1110\n");
        printf(" APPLE           $300          1110\n");
      rel = 300 + 300;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1110) && (op1==1111))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" APPLE           $300          1110\n");
        printf(" YAM             $500          1111\n");
      rel = 300 + 500;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1110) && (op1==1011))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" APPLE           $300          1110\n");
        printf(" BREAD           $500          1011\n");
      rel = 300 + 500;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1111) && (op1==1000))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" YAM           $500          1111\n");
        printf(" RICE          $100          1000\n");
      rel = 500 + 100;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1111) && (op1==1100))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" YAM            $500          1111\n");
        printf(" BEANS          $200          1100\n");
      rel = 500 + 200;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1111) && (op1==1110))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" YAM            $500          1111\n");
        printf(" APPLE          $300          1110\n");
      rel = 500 + 300;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1111) && (op1==1111))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" YAM           $500          1111\n");
        printf(" YAM           $500          1111\n");
      rel = 500 + 500;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1111) && (op1==1011))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" YAM            $500          1111\n");
        printf(" BREAD          $500          1011\n");
      rel = 500 + 500;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
     else if((op==1011) && (op1==1011))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" BREAD          $500          1011\n");
        printf(" BREAD          $500          1011\n");
      rel = 500 + 500;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
     else if((op==1011) && (op1==1000))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" BREAD          $500          1011\n");
        printf(" RICE           $100          1000\n");
      rel = 500 + 100;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
     else if((op==1011) && (op1==1100))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" BREAD          $500          1011\n");
        printf(" BEANS          $200          1100\n");
      rel = 500 + 200;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
     else if((op==1011) && (op1==1110))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" BREAD          $500          1011\n");
        printf(" APPLE          $300          1110\n");
      rel = 500 + 300;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
     else if((op==1011) && (op1==1111))
    {
         printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" BREAD          $500          1011\n");
        printf(" YAM            $500          1111\n");
      rel = 500 + 500;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else{
       printf("invalid product code inputed!!\n");
      return transaction();
    }  
}
int transaction1(){
  printf("       WELCOME TO CART   \n");
    int op,op1,op2,rel=0;
    printf("INPUT YOUR FIRST PRODUCT CODE\n");
    scanf("%d",&op);
    printf("INPUT YOUR SECOND PRODUCT CODE\n");
    scanf("%d",&op1);
    printf("INPUT YOUR THIRD PRODUCT CODE\n");
    scanf("%d",&op2);
    if((op==1000) && (op1==1100) && (op2==1110))
    {
       printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" RICE          $100          1011\n");
        printf(" BEANS         $200          1111\n");
        printf(" APPLE         $300          1111\n");
        rel = 100 + 200 + 300;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1000) && (op1==1000) && (op2==1000))
    {
       printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" RICE          $100          1000\n");
        printf(" RICE          $100          1000\n");
        printf(" RICE          $100          1000\n");
        rel = 100 + 100 + 100;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1100) && (op1==1100) && (op2==1100))
    {
       printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" BEANS         $200          1100\n");
        printf(" BEANS         $200          1100\n");
        printf(" BEANS         $200          1100\n");
        rel = 200 + 200 + 200;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
   else if((op==1110) && (op1==1110) && (op2==1110))
    {
       printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" APPLE         $300          1110\n");
        printf(" APPLE         $300          1110\n");
        printf(" APPLE         $300          1110\n");
        rel = 300 + 300 + 300;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    else if((op==1111) && (op1==1111) && (op2==1111))
    {
       printf(" PRODUCT        $PRICE        PRODUCT CODE\n");
        printf(" YAM           $500          1110\n");
        printf(" YAM           $500          1110\n");
        printf(" YAM           $500          1110\n");
        rel = 300 + 300 + 300;
      printf("_________________________________________________________________\n");
      printf("TOTTAL = $%d\n",rel);
      printf("_________________________________________________________________\n");
    }
    

}
int transaction2(){

}
int transaction3(){

}