#include<stdio.h>
#include<math.h>
 int main(){
    

    double a , b ,c , root1 , root2 , disc , img , real;
    printf(" Enter the value of a ,b , c ");
    scanf("%lf%lf%lf" , &a , &b , &c);
     disc= b*b - ( 4*a *c) ;

 if(disc==0){

printf(" The value are real and equal .\n");
 root1=root2= -b / (2*a);
  printf( " Root1 = %lf  and Root 2 = %lf"  , root1 , root2);

 }

 else if ( disc>0){

printf(" The value are real and unequal.\n");
 root1= (-b+sqrt(disc))/ (2*a);
 root2= (-b-sqrt(disc))/ (2*a);

   printf( " Root1 = %lf  and Root 2 = %lf"  , root1 , root2);



 }

  else {

      
printf(" The value are imaginary.\n ");

 real= -b/(2*a);
 img=-sqrt(-disc)/ (2*a);
 printf(" The value is \t");
 printf(" Root 1 = %lf + %lf i  and " , real , img);
 printf(" Root 2 = %lf - %lf i " , real , img);
  }








    return 0;
}