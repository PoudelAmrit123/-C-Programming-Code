#include<stdio.h>
#include<math.h>
 int main(){
      int a , b , c ;
       float area , s ;


        printf(" Enter the side of the traingle");
         scanf("%d%d%d" , &a , &b , &c);

         if( (a+b)>c && (b+c)>a && (a+c)>b){
   s=  (float)( a+b +c)/2 ;

     area= sqrt(s*(s-a)*(s-b)*(s-c));
       printf(" The required Value of  area of the triangle is %f " ,  area);







         }
else{
     printf(" The Inputed data is incorrect");
}






    return 0;
}