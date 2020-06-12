// 输入一个数，将各位数字反转输出

#include<iostream>
using namespace std;

int main()
{
	int n, right_digit;
	cout << "Please enter a number: ";
	cin >> n;

	cout << "The inverse number is: ";
	do
	{
		right_digit = n % 10;
		cout << right_digit;
		n = n / 10;
	} while (n!=0);
	cout << endl;

	return 0;
}