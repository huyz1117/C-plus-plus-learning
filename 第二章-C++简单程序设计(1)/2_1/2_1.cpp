// 2_1.cpp

#include <iostream>
// 命名空间可以避免命名冲突，打开std命名空间，后面再用里面的名字时可以不带std这个名字
using namespace std;

// int表示该函数返回结果是整型
int main()
{
	// cout属于C++预定义好的，在使用之前应该先声明，所以需要将与它相关的头文件include进来，此时就可以用cout了
	cout << "Hello" << endl;
	cout << "Welcome to C++" << endl;

	return 0;
}