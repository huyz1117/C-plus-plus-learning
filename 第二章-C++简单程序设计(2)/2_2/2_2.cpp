// 输入一个年份，判断是否是闰年

/* 闰年判断方法，满足下列两者之一即为闰年：
   1、能被4整除而不能被100整除
   2、能被400整除
*/

#include<iostream>
using namespace std;

int main()
{
    int year;
    bool flag;
    
    cout << "Please enter a year: ";
    cin >> year;
    flag = ((year % 4 == 0 && year % 100 != 0)) || ((year % 400 == 0));

    if (flag)
    {
        cout << year << " is a leap year" << endl;
    }
    else
    {
        cout << year << " is not a leap year" << endl;
    }

    return 0;
}