#include<stdio.h>
#include <math.h>
#define pi 3.14 
 int main(){
    
     float radius , area ;
       printf(" Enter the radius ");
  scanf("%f" , &radius);
    area = pi * pow( radius , 2) ;
      printf(" The Final result  of Area is %f"  , area);
       
    return 0;
}