// swap using  passing by value / reference 

//   we cannnot swap as usual doing function so we should pass address to the  function


#include<stdio.h>
void swap(int *a , int *b){

int temp;
 temp=*a;
 *a=*b;
 *b=temp;


}
 int main(){

  int a , b ;
  printf(" Enter the value of the  character");
  scanf("%d%d" , &a , &b);

    printf(" The value before swapping is %d and %d \n"  , a, b);
    swap(&a, &b);
    printf(" The  value after swapping is %d and %d" , a , b);




    return 0;
}