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
//			cout << "敲桌子" << endl;
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
//	cout << "请输入一个数：" << endl;
//	cin >> num;
//	int k = num;
//	do
//	{
//		sum += pow(num%10,3);
//		num /= 10;
//	} while (num != 0);
//	if (sum == k)
//	{
//		cout << "这是一个水仙花数" << endl;
//	}
//	else
//	{
//		cout << "这不是一个水仙花数" << endl;
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
//		cout << "请输入你猜的数：";
//		cin >> num;
//		if (num > ret)
//		{
//			cout << "你猜大了，请继续猜" << endl;
//		}
//		else if(num<ret)
//		{
//			cout << "你猜小了" << endl;
//		}
//		else
//		{
//			cout << "恭喜你猜对了" << endl;
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
//	cout << "请输入三只小猪的体重" << endl;
//	cin >> a>>b>>c;
//	cout << "三只小猪的体重分别为：" << a << ","<<b <<","<< c << endl;
//	if (a > b)
//	{
//		if (a > c)
//		{
//			cout << "最重的是a小猪" << endl;
//		}
//		else
//		{
//			cout << "最重的是c小猪" << endl;
//		}
//	}
//	if (a < b)
//	{
//		if (b > c)
//		{
//			cout << "最重的是b小猪" << endl;
//		}
//		else
//		{
//			cout << "最重的是c小猪" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}