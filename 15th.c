//  With   argument and  with return type  

#include<stdio.h>



  int add( int a , int b){

  int c ;
   c= a+b;

    return c;


  }
 int main(){
    
  int a , b , sum ;
   printf(" Enter  the value of the number");
    scanf("%d%d"  , &a , &b);

    sum= add(a , b);


      printf(" The sum of the given number is %d" , sum);




    return 0;
}