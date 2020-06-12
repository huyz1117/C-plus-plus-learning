// 2_7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 输入一个整数，求出他的所有因子

#include<iostream>
using namespace std;

int main()
{
	int n, i;
	cout << "Please enter a positive number: ";
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}
