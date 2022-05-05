#include <stdio.h>
int main(){
   printf("HELLO WELCOME!!!");
    printf("PLZ ENTER YOUR NAME!!!\n");
    char fname[40],lname[40];
    printf("PLZ ENTER YOUR FULL NAME: \n");
    scanf("%s %s",fname,lname);
    printf("YOUR NAME IS %s %s\n",fname,lname);
    int dd,mm,yy;
    printf("PLZ ENTER YOUR DATE OF BIRTH MM/DD/YY!:\n");
    scanf("%d %d %d",&dd,&mm,&yy);
    printf("YOU ARE BORN %d %d %d\n",dd,mm,yy);
    char op;
    printf("PLZ SELECT YOUR GENDER \nPRESS M TO CHOOSE MALE\nPRESS F TO CHOOSE FEMALE\n");
    //getchar();
    scanf("%s",&op);
    switch (op)
    {
    case 'M':
    printf(" YOU ARE A MALE!!!: \n");

        break;
        case 'F':
        printf(" YOU ARE A FEMALE!!!: \n");
        break;
    
    default:
    printf("GUY YOU ARE NOT OF THIS EARTH(--__--)\n");
        break;
    }

    return 0;
}