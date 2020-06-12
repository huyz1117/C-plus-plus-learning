// 2_8.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 循环结构与选择结构的嵌套
// 输入一系列的整数，统计出正整数个数和负整数个数，遇到0则结束

#include<iostream>
using namespace std;

int main()
{
	int i = 0, j = 0, n;
	cout << "Please enter some numbers(enter 0 to quit): ";

	cin >> n;
	while (n!=0)
	{
		if (n>0)
		{
			i += 1;
		}
		else
		{
			j += 1;
		}
		cin >> n;
	}
	cout << "Count of positive number is: " << i << endl;
	cout << "Count of positive number is: " << j << endl;

	return 0;

}
