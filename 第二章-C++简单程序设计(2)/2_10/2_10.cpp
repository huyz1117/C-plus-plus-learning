/*
��ĳ�����������ľȹ������ֿ��ܣ�ʤ��WIN��������LOSE����ƽ�֣�TIE��������ȡ����CANCLE��
��д����˳��������������

�������ֻ�����ֿ��ܣ���������һ��ö������
*/

#include <iostream>
using namespace std;

enum GameResult {WIN, LOSE, TIE, CANCLE};
int main()
{
	GameResult result;		// ����ö�����͵ı���
	enum GameResult omit = CANCLE;		// ����ö�����͵ı���
	for (int count = WIN; count <= CANCLE; count++)		// ö�ٳ���ֵ�����͸�ֵ��ö��ֵ���Ը�int����֮����бȽ�
	{
		result = GameResult(count);			// ǿ�ƽ�������ת��
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