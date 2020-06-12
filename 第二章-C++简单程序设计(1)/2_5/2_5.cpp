// 2_5： cin的用法
// 求解a、b差值的绝对值

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cout << "Please enter the value of a=";
	cin >> a;

	cout << "Please enter the value of b=";
	cin >> b;

	// 条件运算符
	c = (a - b) > 0 ? (a - b) : (b - a);

	cout << "The difference of a and b is: " << c << endl;

	return 0;

}
