#include "header.h"


void Initor(struct Addresbooks* abs)
{
	memset(abs->personArray, 0, sizeof(abs->personArray));
	abs->m_size = 0;
}


//实现添加联系人功能
void addPerson(struct Addresbooks* abs)
{
	if (abs->m_size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return ;
	}
	else
	{
		cout << "请输入联系人姓名：" ;
		cin >> abs->personArray[abs->m_size].m_name;
		cout << "请输入联系人年龄：";
		cin >> abs->personArray[abs->m_size].m_age;
		cout << "请输入联系人性别：";
		cin >> abs->personArray[abs->m_size].m_sex;
		cout << "请输入联系人电话：";
		cin >> abs->personArray[abs->m_size].m_phone;
		cout << "请输入联系人地址：";
		cin >> abs->personArray[abs->m_size].m_place;
		cout << "添加成功" << endl;
		abs->m_size++;
		system("pause");
		system("cls");
	}
	
}

//实现显示通讯录功能
void showPerson(struct Addresbooks* abs)
{
	if (abs->m_size == 0)
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_name <<"\t"<<
				"性别：" << abs->personArray[i].m_sex << "\t" <<
				"年龄：" << abs->personArray[i].m_age << "\t" <<
				"电话：" << abs->personArray[i].m_phone << "\t" <<
				"地址：" << abs->personArray[i].m_place << endl;
		}
	}
	system("pause");
	system("cls");
}

//查找所输入联系人的位置
int FindByName(struct Addresbooks* abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->personArray[i].m_name == name)
		{
			return i;
		}
	}
	return -1;
}






//实现删除联系人功能
void delPerson(struct Addresbooks* abs)
{
	string name;
	cout << "请输入要删除的联系人：";
	cin >> name;
	int ret=FindByName(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->personArray[i] = abs->personArray[i+1];
		}
		cout << "删除成功" << endl;
		abs->m_size--;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//实现查找联系人功能
void findPerson(struct Addresbooks* abs)
{
	int i = 0;
	string name;
	cout << "输入要查找联系人的姓名：";
	cin >> name;
	int ret = FindByName(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		cout << "姓名：" << abs->personArray[i].m_name << "\t" <<
			"性别：" << abs->personArray[i].m_sex << "\t" <<
			"年龄：" << abs->personArray[i].m_age << "\t" <<
			"电话：" << abs->personArray[i].m_phone << "\t" <<
			"地址：" << abs->personArray[i].m_place << endl;
	}
	system("pause");
	system("cls");
}

//实现修改联系人功能
void revPerson(struct Addresbooks* abs)
{
	string name;
	cout << "请输入要修改联系人的姓名：";
	cin >> name;
	int ret = FindByName(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		cout << "开始修改" << endl;
		cout << "请输入新联系人姓名：";
		cin >> abs->personArray[ret].m_name;
		cout << "请输入新联系人年龄：";
		cin >> abs->personArray[ret].m_age;
		cout << "请输入新联系人性别：";
		cin >> abs->personArray[ret].m_sex;
		cout << "请输入新联系人电话：";
		cin >> abs->personArray[ret].m_phone;
		cout << "请输入新联系人地址：";
		cin >> abs->personArray[ret].m_place;
		cout << "修改成功" << endl;
	}
	system("pause");
	system("cls");
}

//实现清空通讯录功能
void clearPerson(struct Addresbooks* abs)
{
	abs->m_size = 0;
	cout << "清空成功" << endl;
	system("pause");
	system("cls");
}