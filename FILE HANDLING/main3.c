#include <stdio.h>
#include <string.h>
#include <stdbool.h>


#define max 1000

int main(){
FILE *fp;
char buffer[max];

fp = fopen("text.txt","a");
if(fp == NULL)
{
    printf("ERROR OPENING FILE!!\n");
    return 1;
}
printf("enetr kill to quite\n");
do
{
    fgets(buffer,max,stdin);
    if (strcmp(buffer, "kill\n") == 0)
        break;
    fputs(buffer, fp);

} while (true);

fclose(fp);
    return 0;
}