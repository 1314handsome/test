#include "header.h"


void Initor(struct Addresbooks* abs)
{
	memset(abs->personArray, 0, sizeof(abs->personArray));
	abs->m_size = 0;
}


//ʵ�������ϵ�˹���
void addPerson(struct Addresbooks* abs)
{
	if (abs->m_size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return ;
	}
	else
	{
		cout << "��������ϵ��������" ;
		cin >> abs->personArray[abs->m_size].m_name;
		cout << "��������ϵ�����䣺";
		cin >> abs->personArray[abs->m_size].m_age;
		cout << "��������ϵ���Ա�";
		cin >> abs->personArray[abs->m_size].m_sex;
		cout << "��������ϵ�˵绰��";
		cin >> abs->personArray[abs->m_size].m_phone;
		cout << "��������ϵ�˵�ַ��";
		cin >> abs->personArray[abs->m_size].m_place;
		cout << "��ӳɹ�" << endl;
		abs->m_size++;
		system("pause");
		system("cls");
	}
	
}

//ʵ����ʾͨѶ¼����
void showPerson(struct Addresbooks* abs)
{
	if (abs->m_size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "������" << abs->personArray[i].m_name <<"\t"<<
				"�Ա�" << abs->personArray[i].m_sex << "\t" <<
				"���䣺" << abs->personArray[i].m_age << "\t" <<
				"�绰��" << abs->personArray[i].m_phone << "\t" <<
				"��ַ��" << abs->personArray[i].m_place << endl;
		}
	}
	system("pause");
	system("cls");
}

//������������ϵ�˵�λ��
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






//ʵ��ɾ����ϵ�˹���
void delPerson(struct Addresbooks* abs)
{
	string name;
	cout << "������Ҫɾ������ϵ�ˣ�";
	cin >> name;
	int ret=FindByName(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->personArray[i] = abs->personArray[i+1];
		}
		cout << "ɾ���ɹ�" << endl;
		abs->m_size--;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//ʵ�ֲ�����ϵ�˹���
void findPerson(struct Addresbooks* abs)
{
	int i = 0;
	string name;
	cout << "����Ҫ������ϵ�˵�������";
	cin >> name;
	int ret = FindByName(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "������" << abs->personArray[i].m_name << "\t" <<
			"�Ա�" << abs->personArray[i].m_sex << "\t" <<
			"���䣺" << abs->personArray[i].m_age << "\t" <<
			"�绰��" << abs->personArray[i].m_phone << "\t" <<
			"��ַ��" << abs->personArray[i].m_place << endl;
	}
	system("pause");
	system("cls");
}

//ʵ���޸���ϵ�˹���
void revPerson(struct Addresbooks* abs)
{
	string name;
	cout << "������Ҫ�޸���ϵ�˵�������";
	cin >> name;
	int ret = FindByName(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "��ʼ�޸�" << endl;
		cout << "����������ϵ��������";
		cin >> abs->personArray[ret].m_name;
		cout << "����������ϵ�����䣺";
		cin >> abs->personArray[ret].m_age;
		cout << "����������ϵ���Ա�";
		cin >> abs->personArray[ret].m_sex;
		cout << "����������ϵ�˵绰��";
		cin >> abs->personArray[ret].m_phone;
		cout << "����������ϵ�˵�ַ��";
		cin >> abs->personArray[ret].m_place;
		cout << "�޸ĳɹ�" << endl;
	}
	system("pause");
	system("cls");
}

//ʵ�����ͨѶ¼����
void clearPerson(struct Addresbooks* abs)
{
	abs->m_size = 0;
	cout << "��ճɹ�" << endl;
	system("pause");
	system("cls");
}