//  With   argument and  without return type  

#include<stdio.h>

void add( int a , int b)
{

  int c;
   c= a+b;
    printf(" The value of c is %d"  , c);

}
 int main(){
    

    int a , b ;
     printf(" Enter the  value of a and b");
      scanf("%d%d" , &a , &b);
      add(a , b);

    return 0;
}