#include <iostream>
using namespace std;
#include <string>

int main()
{
	string str = "hello";
	cout << "请输入str的内容：" << endl;
	cin >> str;
	cout << "str的内容是：" << str << endl;
	cout << sizeof(string) << endl;
	cout << sizeof(int) << endl;
	system("pause");
	return 0;
}