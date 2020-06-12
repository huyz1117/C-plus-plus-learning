// 2_4

#include <iostream>
using namespace std;

int main()
{
	// 无符号整数不能表示负数
	unsigned int x;
	// int x;
	unsigned int y = 100;
	unsigned int z = 50;
	x = y - z;
	cout << "Difference is: " << x << endl;
	x = z - y;
	cout << "Now difference is: " << x << endl;

	return 0;
}
