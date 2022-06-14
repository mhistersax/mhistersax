#include <stdio.h>
#include <stdlib.h>
int main(){
    int pin,pin2,rel,a,b,choice,j;
    char fname[30], sname[30];
    FILE *fp;
    fp = fopen("Backend.txt","W");
    if (fp==NULL)
    {
        printf("ERROR READING CODE!!\n");
        //exit(0);
    }
   /* printf("______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO  BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
     printf("WELCOME DEAR USER\n");
        printf("PLEASE ENTER YOUR FIRST AND LAST NAME ONLY\n");
        scanf("%s %s",fname,sname);
         printf("WELCOME %s %s\n",fname,sname);
         printf("Input an amount you will like to start your account with: \n");
        scanf("%d",&j);
         printf("Please create your four digit pin below\n");
         scanf("%d",&pin);
          printf("Please create your four digit pin below\n");
         scanf("%d",&pin2);
         if(pin!=pin2)
         {
             printf("PIN DOES NOT MATCH\n");
         }
         printf("Congratulations your four digit pin is %d\n",pin);
         fprintf(fp,"%s %s\n",fname,sname);
         fprintf(fp,"%d\n",pin);
         fprintf(fp,"%d\n",j);
         fclose(fp);*/

    return 0;
}