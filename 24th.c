#include<stdio.h>
 
      int function( int c , int b ){
           int  jj ;

  jj=c+b;
   return jj;
      }



 int main(){
    int a , b ;
     int sum;
    printf(" Enter the number");
    scanf("%d%d"  , &a ,   &b);

   sum= function(a , b);
       printf(" The sum of the given number is %d" , sum);


    return 0;
}