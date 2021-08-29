
#include<stdio.h>
#include<math.h>
long factorial(int j)
{
    int i;
    long fact=1;
    for(i=1;i<=j;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int i,sign=-1,n;
    float x,x1,sum=0;
    printf("Enter the value of x(in degree) and n");
    scanf("%f%d",&x,&n);
    x1=x;
    x=x*(3.1415/180);
    for(i=1;i<=n;i+=2)
    {
        sign= -1*sign;
        sum=sum + sign*pow(x,i)/factorial(i);
    }
    printf("sin(%.0f)=%.2f",x1,sum);
    return 0;
}
