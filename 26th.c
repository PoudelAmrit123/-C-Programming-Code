// sum of natural number
// sum = 1+ 2+ 3 + 4 + 5 
// sum=0

#include<stdio.h>

 int main(){
    

    int number ;
     int sum=0;
     printf(" Enter the number");
     scanf("%d" , &number);
     for( int i=1 ; i<=number ; i++){

  sum=sum+i;
   


     }
      printf(" The sum of then inputed number is %d" , sum);
    return 0;
}