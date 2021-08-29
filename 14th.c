//  Without   argument and  with return type  

#include<stdio.h>


  int add(){

    int a , b ,c ;
      printf(" Enter the value of a and b");
      scanf("%d%d" , &a, &b);

      c= a +b ;


  return c ;


  }
 int main(){
    int sum;
     sum= add();

  printf(" The  value  of the sum is %d"  , sum);



    return 0;
}