
//    To find the number of digit in the inputed number
#include<stdio.h>



 int main(){
    

    int num;
     printf(" Enter the number");
     scanf("%d" , &num);
      int count=0;
       while(num!=0){

           count++;
            num/=10; 
            //  i.e num= num/10;
             
       }
        printf(" The total number of digit is %d" , count);
        
    return 0;
}