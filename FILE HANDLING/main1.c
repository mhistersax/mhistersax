#include <stdio.h>
//c program that read a text file
//written by mhistersax
int main(){
    //*fp means file pointer
    FILE *fp;
    fp = fopen("text.txt","r");//oprn text.txt file and read it
    if(fp==NULL)// if the file does not exist
    {
        printf("ERROR FILE NOT FOUND!!\n");//return this message

    }
    
   char c;//declare c
   while ((c = fgetc(fp))!=EOF)//reads each character of the text file and save it in c
   {
      printf("%c",c);//print each alphabet untill it get to the end of file EOF
   }
   fclose(fp);//close our file
    return 0;
}