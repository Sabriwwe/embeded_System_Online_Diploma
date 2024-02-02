/*
name : sabri elenani
lab1
*/

#include <stdio.h>

int main() {
    float R=0 ;
    char ch ;
    float Rs=0;
    
    printf("enter the circle raduis : ");
    fflush(stdin); fflush(stdout);
    scanf ("%f",&R);
    
    printf("\n enter your choice (a to print the area , c to print the circumference ) : ");
    fflush(stdin); fflush(stdout);
    scanf ("%c",&ch);
        
    if (ch == 'a')
    {
        Rs=3.14*R*R;
        printf("the area= %f ", Rs);
    }
    else if (ch == 'c')
    {
        Rs=3.14*R*2;
        printf("the circumference= %f ", Rs);
    }
    else 
    {
        printf ("wrong char");
    }

}
