/*
设某次体育比赛的救过有四种可能：胜（WIN）、负（LOSE）、平局（TIE）、比赛取消（CANCLE）
编写程序顺序输出这四种情况

比赛结果只有四种可能，可以声明一个枚举类型
*/

#include <iostream>
using namespace std;

enum GameResult {WIN, LOSE, TIE, CANCLE};
int main()
{
	GameResult result;		// 定义枚举类型的变量
	enum GameResult omit = CANCLE;		// 定义枚举类型的变量
	for (int count = WIN; count <= CANCLE; count++)		// 枚举常量值给整型赋值，枚举值可以跟int数据之间进行比较
	{
		result = GameResult(count);			// 强制进行类型转换
		if (result==omit)
		{
			cout << "The game was cancelled" << endl;
		}
		else
		{
			cout << "The game was played ";
			if (result==WIN)
			{
				cout << "and we won!";
			}
			if (result==LOSE)
			{
				cout << "and we lost.";
			}
		}
	}
	return 0;
}