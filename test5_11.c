#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <assert.h>

//题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
//辗转相除法（欧几里得算法）
//int find(int a,int b)
//{
//	if(a%b==0)
//	{
//		return b;
//	}
//	else
//	{
//		find(b,a%b);
//	}
//}
//
//
//int main()
//{
//	int a=0,b=0,n=0,k=0;
//	printf("请输入两个正整数:>");
//	scanf("%d %d",&a,&b);
//	n=find(a,b);
//	printf("最大公约数：%d\n",n);
//	k=(a*b)/n;
//	printf("最大公倍数为:%d\n",k);
//	return 0;
//}






//题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。


//void find(const char* arr,int n)
//{
//	int i=0,count=0,k=0;
//	assert(arr);
//	for(i=0;i<n;i++)
//	{
//		if(arr[i]>='a'&&arr[i]<='z'||arr[i]>='A'&&arr[i]<='Z')
//		{
//			count++;
//		}
//		if(arr[i]>='0'&&arr[i]<='9')
//		{
//			k++;
//		}
//	}
//	printf("字符中英文字母的个数为:%d\n",count);
//	printf("字符中数字的个数为:%d\n",k);
//}
//
//int main()
//{
//	char arr[10]={0};
//	gets(arr);
//	find(arr,10);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char c;
//    int letters=0,spaces=0,digits=0,others=0;
//    printf("请输入一些字母：\n");
//    while((c=getchar())!='\n')
//    {
//        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
//            letters++;
//        else if(c>='0'&&c<='9')
//            digits++;
//        else if(c==' ')
//            spaces++;
//        else
//            others++;
//    }
//    printf("字母=%d,数字=%d,空格=%d,其他=%d\n",letters,digits,spaces,others);
//    return 0;
//}


//题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
//int main()
//{
//	int a=0,b=0,n=0,sum=0,k=0;
//	printf("请输入数字以及相加次数:");
//	scanf("%d %d",&a,&b);
//	k=a;
//	for(n=0;n<b;n++)
//	{
//		sum+=k;
//		k=k*10+a;
//	}
//	printf("%d\n",sum);
//	return 0;
//}


//题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。
//int main()
//{
//	int n=1000,i=0;
//	for(i=1;i<=n;i++)
//	{
//		int j=0,sum=0;
//		for(j=1;j<i;j++)
//		{
//			if(i%j==0)
//			{
//				sum+=j;
//			}
//		}
//		if(sum==i)
//		{
//			printf("这个数是完数:%d\n",i);
//		}
//	}
//	return 0;
//}

//题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？


//int main()
//{
//	int i=0,n=0;
//	float sum=0,hight=100;
//	sum=hight;
//	hight=hight/2;
//	for(i=2;i<=10;i++)
//	{
//		sum+=hight*2;
//		hight/=2;
//	}
//	printf("第10次落地时，共经过%f米\n",sum);
//	printf("第10次反弹%f米\n",hight);
//	return 0;
//}

//题目：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个
//第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下
//的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。


//int main()
//{
//	int i=0,x1=0,x2=1;
//	for(i=0;i<10;i++)
//	{
//		x1=(x2+1)*2;
//		x2=x1;
//	}
//	printf("%d\n",x1);
//	return 0;
//}

//题目：两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。


int main()
{

	return 0;
}