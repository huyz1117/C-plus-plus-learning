/*
声明一个表示时间的结构体，可以精确表示年、月、日、小时、分、秒；
提示用户输入年、月、日、小时、分、秒的值，
然后完整的显示出来
*/

#include <iostream>
using namespace std;

struct MyTimeStruct
{
	unsigned int year;
	unsigned int month;
	unsigned int day;

	unsigned int hour;
	unsigned int min;
	unsigned int sec;
};

int main()
{
	MyTimeStruct myTime = { 2015, 3, 16, 12, 0, 0 };

	cout << "Please input year: ";
	cin >> myTime.year;

	cout << "Please input month: ";
	cin >> myTime.month;

	cout << "Please input day: ";
	cin >> myTime.day;

	cout << "Please input hour: ";
	cin >> myTime.hour;

	cout << "Please input min: ";
	cin >> myTime.min;

	cout << "Please input sec: ";
	cin >> myTime.sec;

	cout << "the time is set to: " << myTime.year << "/"
		<< myTime.month << "/"
		<< myTime.day << " "
		<< myTime.hour << ":"
		<< myTime.min << ":"
		<< myTime.sec << endl;

	return 0;
}