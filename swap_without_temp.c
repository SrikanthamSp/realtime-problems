#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a = a + b;  
    b = a - b;  
    a = a - b;  
    printf("Numbers after swapping: %d %d", a, b);
}
