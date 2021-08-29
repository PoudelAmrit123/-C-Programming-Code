#include<stdio.h>

 int main(){
         int a , b , temp;
           printf(" Enter the number ");
           scanf("%d%d" , &a ,&b);

           printf(" The value before swapping is %d and %d \n " , a , b);

             temp=a;
             a=b;
             b=temp;

           printf(" The value after  swapping is %d and %d " , a , b);




    return 0;
}