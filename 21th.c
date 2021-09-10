#include<stdio.h>

 int main(){
    int year;
      printf(" Enter the year");
      scanf("%d" , &year);

  if(year%4==0){

      if(year%100==0){
          if(year%400==0){
               printf(" The inputed year is leap year"); 
          } else{
              printf(" The inputed year is not leap year ");
          }
      return 0;

      }
        printf(" The inputed year is leap year");
     


  }
  else{
 printf(" The inputed year is not leap year");

  }

    return 0;
}