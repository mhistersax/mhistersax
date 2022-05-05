#include <stdio.h>
int main(){
    int i; //for the loop
    int size; //for the size of array
   int arr[100]; //declare arr size of 100
   int min; //declare a variable min for minimum value
   int max; //declare a variable max for maximum value
   printf("WELCOME!!!\n"); //welcome user
   printf("ENTER THE SIZE OF ARRAY\n"); // asking for the size of array from the user
   scanf("%d",&size); // save the input into "size"
   for(i=0;i<size;i++) //this loop means: for i means my loop should start counting from o and stop at size
   {
       printf("ENTER THE ELEMENT %d\n",i); //asking the user to input the elemnt into the arr
       scanf("%d",&arr[i]); //keyword responsible for saving your input into the arr
       
   }
   max = arr[0]; //here i made my max variable to have arr size of 0, because it will iterate through the arr to find the max
   min = arr[0]; //here i made my min variable to have arr size of 0, because it will iterate through the arr to find the min
   for(i=0;i<size;i++)
   {
       if(arr[i] > max)//this statement means if all the arr element is greater than arr[0], make my max variable the specific element
       {
           max = arr[i];
       }

       if(arr[i] < min)
       {
           min = arr[i];
       }

   }
   printf("THE MAXIMUm VALUE IS %d\n",max);
   printf("THE MINIMUM VALUE IS %d\n",min);
   
     
    return 0;
}