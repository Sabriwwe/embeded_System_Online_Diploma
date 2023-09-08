/*
name : sabri elenani .
lab_5 coding .
*/

#include <stdio.h>

int main() {
    
    // num for student numbers , sumdg for summation of degrees 
      int num = 0 , i =0, sumdg = 0 ;
      
      printf("enter the number of students :");
      scanf("%d", &num);
      
      for (i ; i < num; i++)
      {
          int std = 0 ;
          printf("enter the student %d deg : ",i);
          scanf("%d", &std);
          sumdg += std ;
      }
      
      printf("average degrees = %d ", (sumdg/num) );
    return 0;
}
