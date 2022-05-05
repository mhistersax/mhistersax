#include <stdio.h>
#define max 100
int sec(int l, int r);
int main(){
    int unsorted[] = {5,4,3,2,1,9,8,7,6,10,12,11};
    int sorted[] =   {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[max];
    int i,s,b;
    printf("enetr size of array\n");
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        printf("enetr %d-%d\n",s,i);
        scanf("%d", &arr[i]);
    }
    printf("element entered is \n");
    for(i=0;i<s;i++)
    {
        printf(" %d, ",arr[i]);
        
    }
   FILE *fp;
   fp = fopen("textt.txt","w");
   if(fp==NULL)
   {
       printf("ERROR!!!\n");
   }

 for(i=0;i<s;i++)
    {
        fprintf(fp,"%d\n",arr[i]);
        
    }
    fclose(fp);


    return 0;
}
int sec(int l, int r)
{
    FILE *fp;
    
}