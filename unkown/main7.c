#include <stdio.h>
int main(){
    int n;
    printf("ENETR LIMITS:\n");
    scanf("%d",&n);
    int i,sum=0;
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            sum = sum + i;
             printf("%d + ",i);
            
        }
    
    }
    printf("= %d\n",sum);
    return 0;
}