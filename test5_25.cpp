#include <iostream>
using namespace std;
#include <string>

int main()
{
	string str = "hello";
	cout << "������str�����ݣ�" << endl;
	cin >> str;
	cout << "str�������ǣ�" << str << endl;
	cout << sizeof(string) << endl;
	cout << sizeof(int) << endl;
	system("pause");
	return 0;
}