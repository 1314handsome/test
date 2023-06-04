#include "header.h"


void menu()
{
	cout << "***********************" << endl;
	cout << "***  1：添加联系人  ***" << endl;
	cout << "***  2：显示联系人  ***" << endl;
	cout << "***  3：删除联系人  ***" << endl;
	cout << "***  4：查找联系人  ***" << endl;
	cout << "***  5：修改联系人  ***" << endl;
	cout << "***  6：清空通讯录  ***" << endl;
	cout << "***  0：退出通讯录  ***" << endl;
}



int main()
{
	struct Addresbooks abs;
	int selec=0;
	abs.m_size = 0;
	//Initor(&abs);
	while (true)
	{
		menu();
		cout << "请输入选项：";
		cin >> selec;
		switch (selec)
		{
		case 1:
			addPerson(&abs);
			break;
		case 2:
			showPerson(&abs);
			break;
		case 3:
			delPerson(&abs);
			break;
		case 4:
			findPerson(&abs);
			break;
		case 5:
			revPerson(&abs);
			break;
		case 6:
			clearPerson(&abs);
			break;
		case 0:
			cout << "退出通讯录成功" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入选项错误，请重新输入" << endl;
			break;
		}
		

	}
	system("pause");
	return 0;
}