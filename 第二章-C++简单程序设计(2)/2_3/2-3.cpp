// 输入一个0-6的整数，转换成星期输出

/*
可以使用if else，但是结构过于啰嗦，且运行效率较低
*/

#include<iostream>
using namespace std;

int main()
{
	int day;
	cout << "Please enter a day: ";
	cin  >> day;

	switch (day)
	{
	case 0:
		cout << "Sunday!" << endl;
		break;
	case 1:
		cout << "Monday!" << endl;
		break;
	case 2:
		cout << "Thuesday!" << endl;
		break;
	case 3:
		cout << "Wednesday!" << endl;
		break;
	case 4:
		cout << "Thursday!" << endl;
		break;
	case 5:
		cout << "Friday!" << endl;
		break;
	case 6:
		cout << "Saturday!" << endl;
		break;
	default:
		cout << "Day out of range Sunday ... Saturday!" << endl;
		break;
	}
	return 0;
}
