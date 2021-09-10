
#include<stdio.h>
#include<math.h>

 long factorial( int j){



     int i;
     long fact =1;
     for (i=1 ; i<=j ; i++){


         fact= fact *i;

     }
     return fact;
 }
 int main(){
    
  int i , sign=-1 , n;
  float x , sum=0;

  printf(" Enter the value of x( in degree) and n");
  scanf("%f%d" , &x , &n);

     x= x*(3.1415/180);

     for( int i=1; i<=n ; i+=2){

   sign= -1 * sign ;
   sum= sum + sign*pow(x, i)/ factorial(i);


     }
 printf(" sin(%.0f)=%.2f"  , x , sum);




    return 0;
}