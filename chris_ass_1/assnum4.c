#include <stdio.h>
int main(){
    int i; //for the loop
    int size; //for the size of array
   int arr[100]; //declare arr size of 100
   
   printf("WELCOME!!!\n"); //welcome user
   printf("ENTER THE SIZE OF ARRAY\n"); // asking for the size of array from the user
   scanf("%d",&size); // save the input into "size"
   for(i=0;i<size;i++) //this loop means: for i means my loop should start counting from o and stop at size
   {
       printf("ENTER THE ELEMENT %d\n",i); //asking the user to input the elemnt into the arr
       scanf("%d",&arr[i]); //keyword responsible for saving your input into the arr
       
   }
   
   
   for(i=0;i<size;i++)
   {
       if(arr[i] % 2 ==0)
       {
           printf(" this are the even number\n%d\n",arr[i]);
       }
       else{
           printf("the odd number is \n%d\n",arr[i]);
           
       }
   }

  
    return 0;
}