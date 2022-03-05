#include <stdio.h>
 
int main(int argc, char **argv)
{
  int i;
  for (i=1; i<=100; i++)
 {
    //if the number divides, remainder will be 0 
    // we use the ! to change it to 1 so that the overall condition 
    //becomes TRUE
      if (!(i % 3) && !(i % 5)) //checking if it divides by 3 AND 5 by taking % (modulus)
	printf("%d Divisible by 3 and 5", i);   
      else if (!(i % 3)) //checking if it divides by just 3 
	printf("%d Divisible by 3", i);
      else if (!(i % 5)) //checking if it divides by just 5
	printf("%d divisible by 5", i);
      else
	printf("%d", i);
      printf("\n");
 }
  return 0;
}