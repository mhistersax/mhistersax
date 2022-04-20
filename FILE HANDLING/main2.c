#include <stdio.h>
#include <stdlib.h>
#define max 100
//C PROGRAMME TO SAVE INFORMATION LINE BY LINE IN A TEXT FILE
//written by mhistersax
int sec();//DECLARE FUNCTION SEC
int man();//DECLARE FUNCTION MAN
int main(){
    printf("WELCOME!!(--__--)\n");
    printf("PRESS 1 TO WRITE \nPRESS 2 TO READ YOUR WRITING\n");
    int op;
    scanf("%d",&op);//SCAN USER'S INPUT
    if(op==1)
    {
     return man();//IF USER'S INPUT = 1 RETURN TO MAN FUNCTION
    }
    if(op==2)
    {
        return sec();//IF USER'S INPUT = 2 RETURN TO SEC FUNCTION
    }
    return 0;
}
int man(){//MAN FUNCTION
     FILE *fp;
     fp = fopen("text1.txt","w");//POINTER FP SHOULD OPEN TEXT1.TXT AND WRITE INTO FILE
     if(fp==NULL)//IF TEXT1 COULD NOT BE FOUND 
    {
       printf("ERROR CREATING FILE\n");//RETURN THIS MESSAGE
    }
 printf("HEY!!, WELCOME\n");
    printf("PLEASE INPUT YOUR NAME: \n");
    char na[max];
    scanf("%s", na);
    char ag[max],ff[max],gg[max],hh[max];
    printf("PLEASE ENTER YOUR AGE: \n");
    scanf("%s", ag);
    printf("PLZ INPUT THE NAME OF YOUR SCHOOL\n");
    scanf("%s", ff);
    printf("PLZ NAME OF YOUR PHONE\n");
    scanf("%s", gg);
    printf("PLZ INPUT YOUR HUBBY\n");
    scanf("%s", hh);
    /*
    FROM LINE 30 TO LINE 41
    WAS ALL ABOUT ASKING THE USERS FOR INFORMATION
    WHICH WOULD BE SAVED INTO THE TEXT1 FILE 
    */
    fprintf(fp,"Your name is %s\n",na);
    fprintf(fp,"You are %s years of age\n",ag);
    fprintf(fp,"The name of your school is %s\n",ff);
    fprintf(fp,"The name of your phone is %s\n",gg);
    fprintf(fp,"Your hubby is %s\n",hh);
     fclose(fp);//CLOSE ALL THE FILE HANDLING OPERATION
     printf("CREDENTIALS HAVE BEEN SAVED\n");
     printf("PRESS THE ENTER KEY TO CONTINUE \n");
        getchar();
        system("CLS");
        /*
        LINE 53 TO LINE 55
        WAS ADDED TO MAKE THIS CODE MOE INTERACTIVE */
        /*
        FROM LINE 47 TO LINE 51
        ALL INFORMATION RECEIVED FROM THE USER
        WAS BEEN WRITTEN INTO TEXT1 FILE
        WITH THE REQUIRED PREFIX 
    */
    return main();
}
int sec(){
    /*
    FUNCTION TO READ OUT ALL FILE CONTENT INTO THE TERMINAL*/
    FILE *fp1;
    fp1 = fopen("text1.txt","r");
    if(fp1==NULL)
    {
        printf("YOUR WRITING WAS NOT FOUND PLZ RE-WRITE\n");
        printf("PRESS THE ENTER KEY TO CONTINUE \n");
        getchar();
        getchar();
        return main();
    }
    char c;//declare c
   while ((c = fgetc(fp1))!=EOF)//reads each character of the text file and save it in c
   {
      printf("%c",c);//print each alphabet untill it get to the end of file EOF
   }
   fclose(fp1);
    

}