/*
name : sabri elenani
lab_2 code
*/
#include <stdio.h>

int main() {
    
      int a ,b ,c ;
      printf("enter three nums : ");
      fflush(stdin); fflush(stdout);
      scanf ("%d",&a);
      scanf ("%d",&b);
      scanf ("%d",&c);
      if (a > b )
      {
          if (a > c)
          {
              printf("the largest value = %d ",a);
          }
          else
          {
              printf("the largest value = %d ",c);
          }
      }
      else if (b > a)
      {
          if (b > c)
          {
              printf("the largest value = %d ",b);
          }
          else
          {
              printf("the largest value = %d ",c);
          }
      }
    }
