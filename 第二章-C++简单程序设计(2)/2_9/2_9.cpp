// 2_9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

/*
编程计算图形的面积
程序可计算圆形、长方形、正方形的面积，运行时先提示用户选择图形的类型，然后，对圆形要求用户输入半径值，
对长方形要求用户输入长和宽的值，对正方形要求用户输入边长的值，计算出面积的值后将其显示出来。
*/

#include<iostream>
using namespace std;

int main()
{
	int type;
	float area, radius, height, width, length;
	const float PI = 3.14;
	cout << "Please enter the type(1-圆形，2-长方形，3-正方形)";
	cin >> type;

	switch (type)
	{
	case 1:
		cout << "Please enter the radius: ";
		cin >> radius;
		area = PI * radius * radius;
		cout << "The area is: " << area;
		break;
	case 2:
		cout << "Please enter the height: ";
		cin >> height;
		cout << "Please enter the width: ";
		cin >> width;

		area = height * width;
		cout << "The area is: " << area;
		break;
	case 3:
		cout << "Please enter the length: ";
		cin >> length;
		area = length * length;
		cout << "The area is: " << area;
		break;
	default:
		cout << "Please enter the right number(1, 2 or 3)!";
		break;
	}
	

	return 0;
}
