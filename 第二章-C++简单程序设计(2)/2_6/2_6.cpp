// 2_6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 使用do-while语句实现计算1-10之和

#include<iostream>
using namespace std;

int main()
{
	int n = 0, sum = 0;
	do
	{
		sum += n;
		n++;
	} while (n<=10);
	cout << "sum = " << sum << endl;

	return 0;
}
