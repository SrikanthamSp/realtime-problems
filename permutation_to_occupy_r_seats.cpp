#include<stdio.h>
 int factorial(int num)
{
    int fact=1;
    for(int i=num; i>=1 ;i--)
        fact*=i;
    return fact;
}
int main()
{
    int n,r;
    printf("Enter number of people: ");
     scanf("%d",&n);
    printf("Enter number of seats: ");
    scanf("%d", &r);
       int p = factorial(r)/factorial(r-n);
    printf("Total possible arrangements: %d",p);
    return 0;
}
