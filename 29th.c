//  Adding the sum of inputed digit in the number 

#include<stdio.h>

 int main(){
    


    int num, sum=0 , rem;
    printf(" Enter The Given Number");
    scanf("%d" , &num);

      while(num!=0){
    rem= num%10;
        sum= sum+rem;
          num/=10;



      }

       printf(" The sum  is %d" , sum);


    return 0;
}