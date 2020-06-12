// 补充2-1：读入并显示整数

#include <iostream>
using namespace std;

int main()
{
	int radius;		//定义变量，int表示变量是整数类型
	cout << "Please enter the radius: ";
	cin >> radius;		//从标准输入设备中读入一个整数并存放到radius中
	cout << "The radius is: " << radius << "\n";	//输出变量radius的值及说明信息
	cout << "The PI is: " << 3.14 << "\n";		//输出常量3.14及说明信息
	cout << "Please enter a different radius:  ";
	cin >> radius;		//输入一个不同的值，也存放到radius中
	cout << "Now the radius is changed to: " << radius << "\n";		//输出变量radius的值

	return 0;
}
