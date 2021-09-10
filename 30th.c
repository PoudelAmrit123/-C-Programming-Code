// Armstrong Number
#include <stdio.h>

int main()
{

    int num, sum = 0, rem, original = 0;
    printf(" Enter The Given Number");
    scanf("%d", &num);
    original = num;

    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem * rem * rem;
        num /= 10;
    }

    if (original == sum)
    {

        printf(" %d is Armstrong Number", original);
    }
    else
    {
        printf(" %d is not Armstrong Number", original);
    }

    return 0;
}