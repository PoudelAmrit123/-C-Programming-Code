//  a  simple calculator
//    using switch 

#include<stdio.h>

 int main(){
    
    float a , b ;
    printf(" Enter the numbers");
    scanf("%f%f" , &a , &b);
    char op;
    float ans;
    printf(" Enter + , - , * , / as per their symbol");
    scanf(" %c" , &op);

      switch(op){

   case '+': ans=a+b;
       printf(" The sum of the given number is %.2f"  , ans);
          break;

          case '-': ans= a-b;
            printf(" The subtraction of the given number is %.2f"  , ans);
          break;


          case '*': ans= a*b;
            printf(" The  Multiplication of the given number is %.2f"  , ans);
          break;


          case '/': ans= a/b;
            printf(" The  divison of the given number is %.2f"  , ans);
          break;

          default: printf(" 404  Error");
      }
    return 0;
}