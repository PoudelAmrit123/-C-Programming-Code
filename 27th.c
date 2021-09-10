// to check wheather the number is prime or not 

#include<stdio.h>

 int main(){
    


    int num;
     int total=0;
     printf(" Entter the number");
     scanf("%d" , &num);
      int i;
       int flag=0;
       for( i=2; i<= num/2 ; i++){

    if( num%i==0){

         flag=1;
        total+=flag;

        
         break;
    }

       }



       if(flag==0){
           printf(" The number is prime");

       } else {
            printf(" The number is composite");
       }
       printf(" number ofprime number is %d " , total);
    return 0;
}