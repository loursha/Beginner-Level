#include<stdio.h>

int main()
{
   int n;
   
   scanf("%d", &n);
   
   if(n > 0)
      printf("\nNegative Value");
   else if(n < 0)
      printf("\nPositive Value ");
      
   return 0;
}
