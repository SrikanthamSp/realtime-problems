#include
#include
int main()
{
int number, temp, remainder, result = 0, n = 0 ;
printf(“Enter an integer: “);
scanf(“%d”, &number);
temp = number;
while (temp != 0)
{
temp /= 10;
++n;
}
temp = number;
while (temp != 0)
{
remainder = temp%10;
result += pow(remainder, n);
temp /= 10;
}
if(result == number)
printf(“%d is an Armstrong number\n”, number);
else
printf(“%d is not an Armstrong number\n”, number);
return 0;
}
