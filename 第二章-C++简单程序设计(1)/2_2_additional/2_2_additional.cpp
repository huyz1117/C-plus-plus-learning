// 补充2-2：为常量命名
// 主要知识点：符号常量

#include <iostream>
using namespace std;

int main()
{
	const double PI = 3.14159;		//定义符号常量PI
	int radius;		//定义变量，int表示变量是整数类型

	cout << "Please enter the radius: ";
	cin >> radius;		//从标准输入设备读入一个整数存放到radius中
	cout << "The radius is: " << radius << "\n";		//输出变量radius的值及说明信息
	cout << "The PI is: " << PI << "\n";		//输出常量PI的值及说明信息
	cout << "Please enter a different radius: ";		
	cin >> radius;		//输入一个新的radius的值，也存放到radius的中
	cout << "Now the radius is channged to: " << radius << "\n";		//输出变量radius的新的值，及说明信息
	cout << "The PI is still: " << PI << "\n";		//再次输出常量PI的值，这个值是没有变的

	return 0;
}
