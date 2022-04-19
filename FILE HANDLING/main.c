#include <stdio.h>
#define max 1000
int main(){
    FILE *fp;
    fp = fopen("texfile.txt","w");
    if(fp==NULL)
    {
        printf("ERROR CREATING FILE!!\n");
    }
    else{
        printf("file created sucessfully!!(--__--)\n");
    }
    char ny[max];
    printf("PLZ ENTER ANY STATEMENT OF YOUR CHOICE WITHOUT USING SPACE\n");
    scanf("%s",&ny);
    fprintf(fp,"%s",ny);
    printf("STAEMENT SAVED SUCESFULLY!!\n");
    printf("PLZ SEARCH FOR TEXTFILE TO VIEW YOUR CONTENT \n");
    fclose(fp);
    return 0;
}