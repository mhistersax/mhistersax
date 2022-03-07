#include <stdio.h>
int main(){
int array[100];//made my array 100 as the maximum size
int size,i,add = 0;//declared my variables as size, i and add
printf("input the size of your array below\n");
scanf("%d",&size);//this is to read the users input for the array size
for (i=0;i<size;i++){
printf("input your element: ");//the user inputs the elements then the 'for loop' repeats the amount the user inputed for the array size
scanf("%d", &array[i]);
}
for (i=0; i<size;i++){ 
add = add + array[i];//since 'add is = 0' this adds all the elements inputed from the user and brings out the sum
}
printf("\nSum of your elements are: %d\n",add);
return 0;
}