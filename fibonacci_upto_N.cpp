#include<iostream>
using namespace std;
int main()
{
int sum = 0, n;
int a = 0;
int b = 1;
cout << "Enter the nth value: ";
cin >> n;
cout << "Fibonacci series: ";
while(sum <= n)
{
cout << sum << " ";
a = b;
b = sum;
sum = a + b; 
}
return 0;
}
