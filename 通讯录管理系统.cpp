#include "header.h"


void menu()
{
	cout << "***********************" << endl;
	cout << "***  1�������ϵ��  ***" << endl;
	cout << "***  2����ʾ��ϵ��  ***" << endl;
	cout << "***  3��ɾ����ϵ��  ***" << endl;
	cout << "***  4��������ϵ��  ***" << endl;
	cout << "***  5���޸���ϵ��  ***" << endl;
	cout << "***  6�����ͨѶ¼  ***" << endl;
	cout << "***  0���˳�ͨѶ¼  ***" << endl;
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
		cout << "������ѡ�";
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
			cout << "�˳�ͨѶ¼�ɹ�" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "����ѡ���������������" << endl;
			break;
		}
		

	}
	system("pause");
	return 0;
}