//  factorial using recursion

  #include<stdio.h>
  
   long factorial( int n){

      if(n==0)
           return 1;
     
      else 
  return n*(factorial(n-1));

    

   }


   int main(){
        int n;
         long fact;
         printf(" Enter your number");
         scanf("%d" , &n);

            fact = factorial(n);

            printf(" %d! = %d" , n , fact);


      return 0;
  }