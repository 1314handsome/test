//#include <iostream>
//using namespace std;
//#include <ctime>
//#include <cmath>
//

//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j << "*" << i <<"=" << i * j<<"  ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 7 == 0|| i / 10 == 7|| i % 10 == 7)
//		{
//			cout << "������" << endl;
//		}
//		else
//		{
//			cout << i << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int num = 0;
//	int sum = 0;
//	cout << "������һ������" << endl;
//	cin >> num;
//	int k = num;
//	do
//	{
//		sum += pow(num%10,3);
//		num /= 10;
//	} while (num != 0);
//	if (sum == k)
//	{
//		cout << "����һ��ˮ�ɻ���" << endl;
//	}
//	else
//	{
//		cout << "�ⲻ��һ��ˮ�ɻ���" << endl;
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	srand((unsigned int)time(NULL));
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	while (num != ret)
//	{
//		cout << "��������µ�����";
//		cin >> num;
//		if (num > ret)
//		{
//			cout << "��´��ˣ��������" << endl;
//		}
//		else if(num<ret)
//		{
//			cout << "���С��" << endl;
//		}
//		else
//		{
//			cout << "��ϲ��¶���" << endl;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	cout << "��������ֻС�������" << endl;
//	cin >> a>>b>>c;
//	cout << "��ֻС������طֱ�Ϊ��" << a << ","<<b <<","<< c << endl;
//	if (a > b)
//	{
//		if (a > c)
//		{
//			cout << "���ص���aС��" << endl;
//		}
//		else
//		{
//			cout << "���ص���cС��" << endl;
//		}
//	}
//	if (a < b)
//	{
//		if (b > c)
//		{
//			cout << "���ص���bС��" << endl;
//		}
//		else
//		{
//			cout << "���ص���cС��" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}