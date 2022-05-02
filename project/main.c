#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define max 100
int product();
void message();
int main(){
    int rel=1;
     int sum=100;
    char pro1[][max] = {"rice","beans","apple","yam","bread"};
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
  for(i=1;i<6;i++)
  {
     printf("PLEASE SELECT  THE %d  PRODUCT CODE OF YOUR CHOICE:\n",i);
     
     scanf("%d",&op);
  switch (op)
  {
  case 1000:
  printf("you picked rice    price $%d\n",rel*100);
      break;
case 1100:
printf("you picked beans     price $%d\n",rel*200);
break;
case 1110:
printf("you picked aplle     price $%d\n",rel*300);
break;
case 1111:
printf("you picked yam       price $%d\n",rel*500);
break;
case 1011:
printf("you picked bread     price $%d\n",rel*500);
break;
default:
  printf("your product was not recognised!!\n");
  return main();
      break;
  }
  sum = rel + sum;

  }
  printf("the total is %d\n",sum);
  
  
  

    return 0;
}
int product(){
    char pro1[max] = {"rice"};
   char pro2[max] = {"beans"};
   char pro3[max] = {"apple"};
   char pro4[max] = {"yam"};
   char pro5[max] = {"bread"};
   
    return 0;
}
void message(){

}