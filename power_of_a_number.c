#include <stdio.h>
#include <math.h>
int main()
{
int base, exponent;
printf(“\nEnter the base value : “);
scanf(“%d”, &base);
printf(“\nEnter the exponent value : “);
scanf(“%d”, &exponent);
int result = pow(base,exponent);
printf(“\nResultant value : %d\n”, result);
return 0;
}
