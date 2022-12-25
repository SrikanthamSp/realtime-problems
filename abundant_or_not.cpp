#include<iostream>
using namespace std;
int main()
{
	int num;
	int temp;
	cin >> num;
	int sum = 0;
	for(int i = 1; i < num; i++)
	{
		if(num % i == 0)
		{
			sum = sum + i;
		}
	}
	if(num < sum)
		cout << “Abundant Number”;
	else
		cout << “Not Abundant Number”;
	return 0;
}
