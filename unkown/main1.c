#include <stdio.h>
int sec();
int main(){
    FILE *fp;
  int num;
  fp = fopen("data.txt","w");
  printf("enetr number:\n");
  scanf("%d",&num);
  fprintf(fp,"%d",num);
  fclose(fp);
     return sec();
    return 0;
}
int sec(){
    FILE *fp;
  int num;
  fp = fopen("data.txt","r");
  fscanf(fp,"%d",&num);
  if(num%2==0)
  {
      printf("%d is even\n",num);
  }
  else{
      printf("%d is odd",num);
  }
  fclose(fp);
}