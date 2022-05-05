#include <stdio.h>

int main() {
    int i;
    int j;
    int amt;
    printf("plz enter your value");
    scanf("%d",&amt);
    for(i=0; i<amt; i++)
    {
    for (j=i; j<amt; j++)
    {
        printf(" ");
    }
    for (j=0; j<(2 * i-1); j++)
    {
        printf("#");
    }
    printf("\n");
    }
    return 0;
}