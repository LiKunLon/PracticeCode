//#include <stdio.h>
//
//int main()
//{
//    printf("hello world\n");
//	return 0;
//	
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));//字符串长度(转义字符长度为1)
//	printf("%d\n", sizeof("c:\test\121"));//字节数=字符串长度+1
//		return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int coding = 0;
//	printf("你会去敲代码吗？（选择1 or 0）\n");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("坚持，你会有好offer\n");
//	}
//	else
//	{
//		printf("放弃，回家卖红薯\n");
//	}
//	return 0;
//}
//


//输入两个数,输出较大的
/*#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	printf("请输入两个数字\n");
	scanf("%d%d",&a,&b);
	if (a > b)
	{
		printf("%d\n", a);
	}
	else if (a==b)
	{
		printf("两个数相等\n");
	}
	else
	{
		printf("%d\n",b);
	}
	
	return 0;
}*/

/*
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	printf("输入两个操作数:>");
	scanf("%d %d", &a, &b);
	sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}
*/



//取变量地址
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	&num;//取出num的地址
//	printf("%p\n", &num);//打印地址，%p--以地址的形式打印
//	return 0;
//}


//#include <stdio.h>
//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	 int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		test();
//	}
//	return 0;
//}


/*#include <stdio.h>
int main()
{
	printf("%d\n", sizeof(char *));
	printf("%d\n", sizeof(short *));
	printf("%d\n", sizeof(int *));
	printf("%d\n", sizeof(double *));
	return 0;
}*/


//三个数字由大到小输出
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int t;
//	printf("请输入三个数字\n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)//把a,b中较大的数给a
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)//把a,c中较大的数给a
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}


//打印3的倍数
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i<=100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//
//打印1000-2000间的闰年
///*#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}*/
//
//
//打印100-200之间的素数
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i,j;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j=2; j <=i; j++)//从2开始循环
//		{
//			if (i%j == 0)//符合的话,说明不是素数
//				break;//循环终止
//		}
//		if (j >= i)//循环到i本身都没有能除尽的,是素数,输出
//			printf("%d\n", i);
//	}
//	return 0;
//}


//1-100出现9的次数
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int j = 0;//j用来计次
//	for (i = 1; i <= 100; i++)//1-100循环
//	{
//		if (i % 10 == 9)//个位数是9的
//			j++;//符合一次,j就+1
//		if (i / 10 == 9)//十位数是9的
//			j++;
//	}
//	printf("%d\n", j);
//}
//	
//	
//n个数中出现9的次数
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//	int main()
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			int ink = i;
//			while (1)
//			{
//				if (ink % 10 == 0 || ink == 0)
//				{
//					break;
//				}
//				if (ink % 10 == 9)
//				{
//					j++;
//					break;
//				}
//				ink = ink / 10;
//			}
//		}
//		printf("%d", j);
//		return 0;
//	}
//
//
//求10个数中最大的
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int max=0;
//	int arr[10];
//	printf("请输入十个数:\n");
//	for (i; i < 10; i++)//循环输入十个数
//	{
//		scanf("%d",&arr[i]);
//	}
//	max = arr[0];//把第一个数给max
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i]>max)//如果下一个数比max大
//		{
//			max = arr[i];//就把这个数给max
//		}
//	}
//	printf("最大数为:%d", max);
//	return 0;
//}

//输出99乘法表
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i < 10; i++)//1=10循环
//	{
//		for (j = 1; j < 10; j++)//1-10循环
//			printf("%d*%d=%d ", i, j, i*j);//输出格式,注意有空格(美化)
//		printf("\n");//换行(美化)
//	}
//	
//	return 0;
//}
//
//
//写一个函数求两个数较大值
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Max(int a,int b)
//{
//	if (a > b)//如果a>b,返回较大值a
//		return a;
//	else
//	{
//		return b;
//	}
//}
//int main()
//{
//	int a = 0;
//	int	b = 0;
//	printf("请输入两个待比较数:\n");
//	scanf("%d%d", &a,&b);
//	int ret = Max(a, b);//方法调用完毕,ret用来接收返回值
//	printf("较大数为:%d\n", ret);//直接调用Max函数
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 5)
//	{
//		i++;
//		printf("%s\n","加油");
//	}
//	if (i > 5)
//	{
//		printf("%s\n","牛逼");
//	}
//	return 0;
//}


//分数求和
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n;
//	float i = 1.0;//注意这里定义的是分子的1,必须是float型
//	int j = 1;
//	float sum = 0;
//	for (n = 1; n <= 100; n++)//循环100个数出来
//	{
//		sum = sum + (i/ n)*j;//数学表达式
//		j = -j;//用于正负号转换
//		
//	}
//	printf("%f\n", sum);
//	return 0;
//}
//
//写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小数点后数值大于等于5, 向上取整；小于5，则向下取整。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	float i;
//	printf("请输入一个浮点数:\n");
//	scanf("%f", &i);
//	int num = (int)i;//强制变成整数
//	float a = i - num;
//	int b = 10 * a;
//	if (b >= 5)
//	{
//		printf("该浮点数向上取整:%d\n", num + 1);
//	}
//	else
//	{
//		printf("该浮点数向下取整:%d\n", num);
//	}
//	return 0;
//}
//
//不引入新临时变量,交换两个数
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//}
//
//给定两个整形变量,进行交换
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int t = 0;
//	scanf("%d %d", &a, &b);
//	t = a;
//	a = b;
//	b = t;
//	printf("%d %d\n", a, b);
//	return 0;
//}




//写一个函数求两个数较大值
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Max(int a, int b){
//	return (a > b) ? a : b;//单目运算符:如果a>b,返回a;如果a<b,返回b
//}
//
//int main()
//{
//	int a;
//	int b;
//	scanf("%d %d",&a,&b);
//	int ret = Max(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//求数组元素个数并遍历
//#pragma warning (disable 4996)
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5};
//	int num = sizeof(arr) / sizeof(arr[0]);//求数组元素个数
//	printf("%d\n", num);
//	//遍历(依次访问一遍且只访问一次)
//	int sum = 0;
//	for (; i < num; i++)
//	{
//		printf("arr[%d]=%d\n", i, arr[i]);
//		sum = sum + arr[i];	//数组所有元素之和
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//



//给三个数,由大到小输出
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a, b, c,t;
//	printf("请输入三个待比较的整数:\n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("这三个数由大到小的顺序为:%d %d %d\n", a, b, c);
//	return 0;
//}



//1-100打印3的倍数
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)//一个数除以3没有余数就是3的倍数
//			printf("%d\n", i);
//	}
//	return 0;
//}
//
//
//指针大小
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	return 0;
//
//}
//
//结构体	
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//struct stu
//{
//	char name[30];
//	int age;
//	char sex[3];
//};
//
//int main()
//{
//	struct stu s1 = { "一", 10, 'n' };
//	struct stu s2 = { "二", 120, 'v' };
//	printf("%s %d %s\n", s1.name, s1.age, s1.sex);//.也有访问功能
//	struct stu *p = &s2;
//	printf("%s %d %s\n", (*p).name, (*p).age, (*p).sex);//.的优先级高于指针
//	printf("%s %d %s\n", p->name, p->age, p->sex);//指向符自带解引用功能
//	return 0;
//}

//三目运算符
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 0;
//	int c = 1;
//	int d = a ? (b == 1 ? c : a) : c;
//	printf("%d\n", d);
//	return 0;
//}
//
//
//
//计算n的阶乘
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n;
//	int ret = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//
//计算1!+2!+3!+...+10!
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (int n = 1; n <= 10; n++)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;
//		ret = 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//		
//}
//
//最大公约数(辗转相除法)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b,c;
//	printf("请输入两个待比较数:\n");
//	scanf("%d %d", &a, &b);
//	while (b != 0)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//打印1000-2000的闰年
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 &&i % 100 != 0 || i % 400 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//打印100-200之间的素数
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i,j;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j == i)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//1-100出现9的次数
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int j;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)//判断十位数为9的
//			j++;
//		else if (i % 10 == 9)//判断个位数为9的
//			j++;
//	}
//	printf("%d\n", j);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	float n=1.0 ;//这里的分子1必须是float型
//	int j = 1;
//	float sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum = sum + (n / i)*j;//数学表达式
//		j = -j;//用于正负号转换
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//求十个整数中的最大值
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int max = 0;
//	for (i; i < 10; i++)//循环输入十个整数
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];//把数组第一个元素给max
//	for (i = 0; i <= 9; i++)
//	{
//		if (arr[i]>max)//数组元素逐个与max比较
//			max = arr[i];//较大的给max
//	}
//	printf("%d\n", max);
//	return 0;
//}
	
//输出99乘法表
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			printf("%d*%d=%2d\t", i,j ,i*j);//制表符
//		}
//		printf(" \n");//换行(美化)
//		
//	}
//	
//	return 0;
//}

//二分查找	
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 8;
//	int len = sizeof(arr) / sizeof(arr[0]);//求数组长度
//	int left = 0;//0是下标
//	int right = len - 1;//代表最后一个元素
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)//如果中间元素大于所找数字
//		{
//			right = mid - 1;//mid之前一个元素就是新的right
//		}
//		else if (arr[mid] < key)//如果中间元素小于所找数字
//		{
//			left = mid + 1;//mid之后一个元素就是新的left
//		}
//		else
//		{
//			break;
//		}
//		//两种情况退出:1.因为break退出 2.因为循环条件不满足退出(left>right)
//	}
//	if (left <= right)//如果因为break退出,就是找到了
//	{
//		printf("找到了,下标是:%d\n", mid);
//	}
//	else
//	{
//		printf("找不到");
//	}
//	return 0;
//}


//猜数字游戏
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<string.h>
//void menu()
//{
//	printf("---------------------\n");
//	printf("----------1.开始-----\n");
//	printf("----------2.结束-----\n");
//	printf("---------------------\n");
//}
//void game()
//{
//	srand((unsigned int)time(NULL));
//	int ret = rand() % 100 + 1;//随机生成一个1-100的整数
//	int num = 0;
//	while (1)
//	{
//		printf("请输入数字:");
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (num < ret)
//		{
//			printf("猜小了\n");
//		}
//		else 
//		{
//			printf("恭喜你,猜对了\n");
//			break;
//		}		
//	}
//}
//
//
//int main()
//{
//	int quit = 0;
//	while (!quit)
//	{
//		menu();
//		printf("请输入:");
//		int select = 0;
//		scanf("%d", &select);
//		switch (select)
//		{
//
//		case 1:
//			game();
//			printf("再来一把不?\n");
//			break;
//		case 2:
//			quit = 1;
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("输入有误\n");
//			break;
//		}
//	}
//}


//编写代码，演示多个字符从两端移动，向中间汇聚
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "******************";
//	char arr2[] = "LiLan is my honey!";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		Sleep(1000);
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		left++;
//		right--;
//		printf("%s\n", arr1);
//	}
//	return 0;
//}




//模拟用户登录场景
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char passward[20] = { 0 };
//	int i = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		printf("请输入密码:");
//		scanf("%s", passward);
//		if (strcmp(passward, "1234") == 0)
//			printf("登陆成功!\n");
//		else
//		{
//			printf("密码有误,你还有%d次机会\n",3-i);
//		}
//	}
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	float j = 1.0;
//	double sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0/ i)*j;
//		j = -j;
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//二分查找
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int key = 8;
//	int right = len - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left <= right)
//		printf("找到了,下标是%d\n", mid);
//	else
//	{
//		printf("没找到!\n");
//	}
//	return 0;
//}



//最大公约数(常规法)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	int i = 0;
//	printf("请输入两个数:\n");
//	scanf("%d%d", &a, &b);
//	for ( i = a; i <= a; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//			break;
//	}
//	printf("%d\n", i);
//	return 0;
//}
//
//判断一个数是否是素数(常规法)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a;
//	int i = 0;
//	printf("请输入一个整数:\n");
//	scanf("%d", &a);
//	for ( i = 2; i < a; i++)
//	{
//		if (a%i == 0)//如果可以除尽,则不是素数
//			break;
//	}
//	//两种情况退出:①因为break②不满足循环条件i<=a
//	if (i <a)//满足循环条件,因为break退出.
//	{
//		printf("不是素数\n");
//	}
//	else
//	{
//		printf("是素数\n");
//	}
//	return 0;
//}
//
////写一函数判断一个数是否是素数(n/2法)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int isPrime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= (n/2); i++)
//	{
//		if (n%i == 0)
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数:\n");
//	scanf("%d", &num);
//	int ret = isPrime(num);
//	if (ret == 1)
//	{
//		printf("%d不是素数\n", num);
//	}
//	else
//	{
//		printf("%d是素数", num);
//	}
//	return 0;
//}
//
////写一函数判断一个数是否是素数(sqrt法)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int isPrime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//			return -1;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int a = 0;
//	printf("请输入一个数:\n");
//	scanf("%d", &a);
//	int ret = isPrime(a);
//	if (ret == -1)
//		printf("%d不是素数\n", a);
//	else
//	{
//		printf("%d是素数\n", a);
//	}
//	return 0;
//}


//写一函数判断一个数是否是素数,并用该函数输出100-200间的素数
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int isPrime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//			return -1;
//	}
//	return 0;
//
//}
//int main()
//{
//	int n = 0;
//	for (n = 100; n <= 200; n++)
//	{
//		isPrime(n);
//		int ret = isPrime(n);
//		if (ret == -1)
//			printf("%d不是素数\n",n);
//		else
//			printf("%d是素数\n",n);
//	}
//	return 0;
//}
//
//函数判断year是不是闰年
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int isLeapYear(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//	{
//		return 0;
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int year = 0;
//	printf("请输入一个年份:\n");
//	scanf("%d", &year);
//	int ret = isLeapYear(year);
//	if (ret == 0)
//	{
//		printf("%d年是闰年\n", year);
//	}
//	else
//	{
//		printf("%d不是闰年\n", year);
//	}
//	return 0;
//}
//
//
//printf函数返回值类型(返回值是输出的字符数量，包括数字，字母，标点符号，空格等)
///*#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int A = 43;
//	printf("%d", printf("%d", printf("%d", A)));
//	return 0;
//}     */       //输出4321

//写一函数交换两个整数的内容(按址传参)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Swap(int* a, int* b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}
//
//
//
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定.如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void chart(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//			printf("%d*%d=%2d\t ", i, j, i*j);
//	}
//	printf("\n ");
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	chart(n);
//	return 0;
//}


//猜数字游戏
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//void menu()
//{
//	printf("*****欢迎来到猜数字游戏****\n");
//	printf("***************************\n");
//	printf("*********1.开始游戏********\n");
//	printf("*********2.结束游戏********\n");
//	printf("***************************\n");
//}
//
//void game()
//{
//	srand((unsigned)time(NULL));
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	printf("请输入所猜数字:\n");
//	while (1)
//	{
//		//printf("请输入所猜数字:\n");
//		scanf("%d",&num);
//		if (num > ret)
//			printf("猜大了\n");
//		else if (num < ret)
//			printf("猜小了\n");
//		else
//		{
//			printf("找到了!\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int quit = 0;
//	while (!quit)
//	{
//		menu();
//		int input = 0;
//		printf("请输入数字是否开始游戏:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("再来一把不?\n");
//			break;		
//		case 2:
//			quit = 1;
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("输入有误!\n");
//		}
//	}
//	return 0;
//}


//递归实现阶乘
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Fac(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n*Fac(n - 1);	
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入数字:\n");
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("这个数字的阶乘为:%d\n", ret);
//	return 0;
//}



//最大公约数
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	int c = 0;
//	printf("请输入两个数:\n");
//	scanf("%d %d", &a, &b);
//	while (b!=0)
//	{
//		c = a%b;
//		a = b;
//		b = c;
//	}
//	if (b == 0)
//	{
//		printf("这两个数的最大公约数是:%d\n", a);
//	}
//	return 0;
//}


//在一个整形有序数组中查找具体的某个数:找到了就打印数字所在的下标，找不到则输出：找不到
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int key = 8;
//	int mid = 0;
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	//两种情况退出①:符合循环条件,break退出(找到了)②:不符合循环条件(left>right)找不到
//	if (left <= right)
//	{
//		printf("找到了,该数字下标是:%d\n", mid);
//	}
//	else
//	{
//		printf("没找到!\n");
//	}
//	return 0;
//}

//猜数字游戏
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*********************************\n");
//	printf("**********欢迎来到猜数字游戏*****\n");
//	printf("*************1.开始游戏**********\n");
//	printf("*************2.离开游戏**********\n");
//	printf("*********************************\n");
//}
//void game()
//{
//	srand((unsigned)time(NULL));
//	int num = rand() % 100 + 1;
//	int guess = 0;
//	printf("请输入所猜数字:\n");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess < num)
//		{
//			printf("猜小了!\n");
//		}
//		else if (guess>num)
//		{
//			printf("猜大了!\n");
//		}
//		else
//		{
//			printf("好兄弟,就这啊\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int quit = 0;
//	while (!quit)
//	{
//		menu();
//		int input=0;
//		printf("请输入数字是否开始游戏!\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("你这么牛逼,再来一把不?\n");
//			break;
//		case 2:
//			quit = 1;
//			printf("拜拜了您嘞\n");
//			break;
//		default:
//			printf("输错了,脑瘫\n");
//		}
//	}
//	return 0;
//}


//函数实现二分查找
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Find(int arr[], int key, int len)
//{
//	int mid = 0;
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		mid = (left + right)/2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>key)
//		{
//			right = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret = Find(arr,8, len);
//	if (ret == -1)
//	{
//		printf("没有这个数字!\n");
//	}
//	else
//	{
//		printf("找到了,这个数字的下标是:%d\n", ret);
//	}
//	return 0;
//}
//
//
//
//递归方式实现打印一个整数的每一位
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个数字:\n");
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//
//递归实现n的阶乘
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int fac(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n*fac(n - 1);
//}
//
//
//int main()
//{
//	int num = 0;
//	printf("请输入所求阶乘:\n");
//	scanf("%d",&num);
//	printf("%d", fac(num));
//	return 0;
//}
//
//
//
//非递归实现阶乘
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int  fac(int n)
//{
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int num = 0;
//	printf("请输入所求阶乘数:\n");
//	scanf("%d", &num);
//	int a = fac(num);
//	printf("%d\n", a);
//	return 0;
//}
//
//
//递归实现strlen
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int length(char *str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}	
//	return 1 + length(str + 1);
//}
//int main()
//{
//	char * p= "abcde";
//	printf("%d\n", length(p));
//	return 0;
//}
//
//
//非递归实现strlen
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char *str = "abcde";
//	int tmp = strlen(str);
//	printf("%d\n", tmp);
//	return 0;
//}
//
//
///*编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。*/
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<windows.h>
//void reverse_string(char *p)
//{
//	int len = strlen(p);
//	char tmp = *p;
//	*p = *(p + len - 1);
//	*(p + len - 1) = '\0';
//	if (strlen(p + 1) > 1)
//	{
//		reverse_string(p + 1);
//	}
//	*(p + len - 1) = tmp;
//}
//int main()
//{
//	char str[] = "abcdef";
//	printf("%s\n", str);
//	reverse_string(str);
//	printf("%s\n", str);
//	return 0;
//}
//
//
//
//非递归实现字符串逆序
//#include<stdio.h>
//#include<string.h>
//void  reverse_string(char* arr)
//{
//	char *left = arr;
//	char *right = arr + strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char* arr = "abcdef";
//	
//	printf("%s\n",reverse_string(arr));
//}
//
//#include <stdio.h>
//#include <string.h>
//
//void rev(char *buf, int size)
//{
//	int i = 0;
//	int temp;
//	for (; i< size/2; i++)
//	{
//
//		temp = buf[i];
//		buf[i] = buf[size - i - 1];
//		buf[size - i - 1] = temp;
//	}
//}
//
//int main()
//{
//	char str[20] = "hello world!";
//	int size;
//
//	size = strlen(str);
//
//	printf("%s\n", str);
//
//	rev(str, size);
//	printf("%s\n", str);
//
//	return 0;
//}
//
//
//递归实现n的k次方
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int fac(int n , int k)
//{
//	
//	if (k == 0)
//		return 1;
//	else if (k>=1)
//	{
//		return n*fac(n, k - 1);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数作为底数和乘方:\n");
//	scanf("%d %d", &a, &b);
//	int ret = fac(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//
//
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n == 0)
//	{
//		return 0;    
//	}
//	else
//	{
//		int k = n % 10;
//		return (k + DigitSum(n / 10));  
//	}
//	
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数:\n");
//	scanf("%d\n", &num);
//	printf("%d\n", DigitSum(num));
//	return 0;
//}
//
//递归实现斐波那契数列
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int num = 0;
//	printf("请输入第几个斐波那契数:\n");
//	scanf("%d", &num);
//	printf("%d\n", fib(num));
//	return 0;
//}
//
//求第n个斐波那契数
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int  fib( n);
//	{
//	    int f1 = 1;
//		int f2 = 1;
//		int f3 = 0;
//		for (int i = 3; i <= n; i++)
//		{
//			f3 = f1 + f2;
//			f1 = f2;
//			f2 = f3;
//		}
//		printf("%d\n", f3);
//	}
//}
//
//
//递归方式打印一个整数的每一位
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void pri(int n)
//{
//	if (n > 9)
//	{
//		pri(n / 10);
//	}	
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	pri(num);
//	return 0;
//}

//递归实现阶乘
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int fac(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n*fac(n - 1);
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = fac(num);
//	printf("%d\n", ret);
//	return 0;
//}

//递归实现n的k次方
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int  plus(int n,int k)
//{
//	if (k == 0)
//	
//		return 1;
//	else if (k >=1)
//	{
//		return n*plus(n,k-1);
//	}
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1,&num2);
//	int ret = plus(num1, num2);
//	printf("%d\n", ret);
//	return 0;
//}



//递归实现strlen
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int len(char* str)
//{
//	if (*str == '\0')//注意这里要加*,解引用一下
//		return 0;
//	return 1 + len(str + 1);//因为char类型指针存放的是首字符的地址,所以第二个+1是在挪首字符
//}
//
//int main()
//{
//	char* p = "abcdef";
//	int ret = len(p);
//	printf("%d\n", ret);
//	return 0;
//}



//冒泡排序
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void bubbleSort(int arr[],int len)
//{
//	//i表示趟数
//	for (int i = 0; i <= len - 1; i++)
//	{
//		//j表示每趟中比较几次
//		for (int j = 0; j < len - 1 - i; j++)//len-1-i减少不必要比较次数
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void Show(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int arr1[] = { 1, 5, 4, 65, 43, 87, 54 };
//	int len = sizeof(arr1) / sizeof(arr1[0]);
//	Show(arr1,len);
//	bubbleSort(arr1, len);
//	Show(arr1,len);
//	return 0;
//}
//
//
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 5, 4, 3, 2, 1 };
//	
//	for (; i <5; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < 5; i++)
//		printf("%d ", arr1[i]);
//	printf("\n");
//	for (i = 0; i < 5; i++)
//		printf("%d ", arr2[i]);
//	printf("\n");
//	return 0;
//}
//
//②
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//void swap(int arr1[10], int arr2[10])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
////void show(int arr1[10],int arr2[10])
////{
////	for (int i = 0; i < 10; i++)
////	{
////		printf("%d %d", arr1[i], arr2[i]);
////	}
////	printf("\n");
////}
//
//int main()
//{
//	int arr1[10];
//	int arr2[10];
//	printf("请输入1数组的值:\n");
//	for (int i = 0; i < 10; ++i)
//	{
//		int num;
//		scanf("%d", &num);
//		 arr1[i] = num;
//	}
//	printf("请输入2数组的值:\n");
//	for (int i = 0; i < 10; ++i)
//	{
//		int num;
//		scanf("%d", &num);
//		arr2[i] = num;
//	}
//	void swap(arr1,arr2);
//
//	printf("交换后1数组的值:\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\t", arr1[i]);
//	}
//	printf("交换后2数组的值:\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\t", arr2[i]);
//	}
//	return 0;
//}

//交换两个数组
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 5, 4, 3, 2, 1 };
//	for (int i = 0; i < 5; ++i)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int i = 0;
//
//
//	printf("请输入10个数字:>");
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	printf("请输入10个数字:>");
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//交换
//	for (i = 0; i<10; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	return 0;
//}

//冒泡排序
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void bubble(int arr[], int len)
//{
//	//len = sizeof(arr) / sizeof(arr[0]);//直接在main函数里求len就行
//	for (int i = 0; i <= len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i;j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void show(int arr[],int len)
//{
//	for (int i = 0; i < len ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr1[] = { 1, 5, 3, 9, 7, 17, 12, 35, 27, 21 };
//	int len = sizeof(arr1) / sizeof(arr1[0]);
//	show(arr1, len);
//	bubble(arr1, len);
//	show(arr1, len);
//	return 0;
//}


//猜数字游戏
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//void menu()
//{
//	printf("*******欢迎来到猜数字游戏****\n");
//	printf("*****************************\n");
//	printf("***********1.进入游戏********\n");
//	printf("***********2.退出游戏********\n");
//	printf("*****************************\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	srand((unsigned)time(NULL));
//	int num = rand() % 100 + 1;
//	int guess;
//	printf("来猜个数瞧一下:\n");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > num)
//		{
//			printf("猜大了,傻逼\n");
//		}
//		else if (guess < num)
//		{
//			printf("脑瘫,猜小了\n");
//		}
//		else
//		{
//			printf("搞这么多次才猜对,fw\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	
//	int quit = 0;
//	while (!quit)
//	{
//		menu();
//		printf("请输入数字是否开始游戏:\n");
//		int input;
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//				game();
//				printf("就这?再搞一把?\n");
//				break;
//		case 2:
//				quit = 1;
//				printf("赶紧走开,就你也配玩爷的游戏?\n");
//				break;
//		default:
//				printf("脑瘫吧你,一个数字输不对都!\n");
//				break;
//		}
//	}
//}

//创建一个整形数组1.实现函数init() 初始化数组为全0 
//2.实现print()  打印数组的每个元素  
//3.实现reverse()  函数完成数组元素的逆置。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void init(int arr[],int len)
//{
//	//初始化数组1-10
//	for (int i = 0; i < len ; i++)
//	{
//		arr[i] = i+1;
//	}
//}
//void pri(int arr[],int len)
//{
//	//打印数组每个元素
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void ling(int arr[], int len)
//{
//	//重新初始化数组为全0
//	int i = 0;
//	for (int i = 0; i < len; i++)
//	{
//		arr[i] = 0;
//	}
//	printf("%d ", arr[i]);
//	printf("\n");
//}
//void reverse(int arr[], int len)
//{
//	//数组元素逆置
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	init(arr,len);
//	pri(arr, len);
//	reverse(arr, len);
//	pri(arr, len);
//	ling(arr, len);
//	return 0;
//}


//三子棋
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#define ROW 3
//#define COL 3
////初始化一个二维数组当做棋盘
////展示棋盘---|||
////玩家落子
////电脑落子
////判赢
////遍历数组
////game函数(判断返回值)
////main函数控制游戏
//
//
//void initBoard(char board[][COL], int row, int col);
//void showBoard(char board[][COL], int row, int col);
//void playerMove(char board[][COL], int row, int col);
//void computerMove(char board[][COL], int row, int col);
//char isWin(char board[][COL], int row, int col);
//void menu()
//{
//	printf("******欢迎来到三子棋游戏******\n");
//	printf("******************************\n");
//	printf("***********1.要玩赶紧*********\n");
//	printf("*****************************\n");
//	printf("***********2.不玩滚蛋********\n");
//	printf("****************************\n");
//	printf("****************************\n");
//}
////初始化棋盘全为空格
//void initBoard(char board[][COL], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
////展示棋盘
//void showBoard(char board[][COL], int row, int col)
//{
//	printf("*******************************\n");
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);//棋盘输入格式为:  空X空(空O空)
//			if (j < col - 1)
//				printf("|");//输出两列 |
//		}
//		printf("\n");
//		if (i < row - 1)//控制---行数
//		{
//			for (int j = 0; j < col; j++)//循环控制---的列数
//			{
//				printf("---");//输出两行---
//				if (j < col - 1)
//				{
//					printf("|");
//				}
//			}
//			printf("\n");
//		}
//	}
//	printf("*******************************\n");
//}
////玩家落子
//void playerMove(char board[][COL], int row, int col)
//{
//	int x = 0;//代表坐标
//	int y = 0;
//	while (1)
//	{
//		printf("请输入1-3的坐标:\n");
//		scanf("%d%d", &x, &y);
//		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
//		{
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = 'X';
//				break;
//			}
//		}
//		else
//		{
//			printf("输入错误,请重新输入!\n");
//		}
//	}
//}
////电脑落子
//void computerMove(char board[][COL], int row, int col)
//{
//	while (1)
//	{
//		srand((unsigned)time(NULL));
//		int x = rand() % ROW;//row=3-->0,1,2
//		int y = rand() % COL;
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = 'O';
//			break;
//		}
//	}
//}
////判赢
//char isWin(char board[][COL], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		//行
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != " ")
//		{
//			return board[i][0];//返回这个格子的字符,看是谁赢
//		}
//
//		//列
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != " ")
//		{
//			return board[0][i];
//		}
//		//对角线(左上->右下)
//		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != " ")
//		{
//			return board[0][0];
//		}
//		//对角线(右上->左下)
//		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != " ")
//		{
//			return board[0][2];
//		}
//		//是否平局(遍历数组没空格)
//		if (isFull(board, row, col) == 1)
//		{
//			return 'Q';//平局
//		}
//	}
//	return ' ';//代表没人赢
//}
////判断棋盘是否满了
//int isFull(char board[][COL], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//			{
//				return 0;//棋盘没满
//			}
//		}
//	}
//	return 1;//棋盘满了
//}
//
//
//void game()
//{
//	char board[ROW][COL] = { 0 };
//	initBoard(board, ROW, COL);
//	showBoard(board, ROW, COL);
//	int ret = 0;
//	while (1)
//	{
//		playerMove(board, ROW, COL);
//		showBoard(board, ROW, COL);
//		ret = isWin(board, ROW, COL);
//		if (ret != ' ')
//		{
//			break;//肯定有个人赢了
//		}
//		computerMove(board, ROW, COL);
//		showBoard(board, ROW, COL);
//		ret = isWin(board, ROW, COL);
//		if (ret != ' ')
//		{
//			break;//肯定有个人赢了
//		}
//	}
//	if (ret == 'Q')
//	{
//		printf("平局\n");
//		return;
//	}
//	if (ret == 'X')
//	{
//		printf("玩家赢\n");
//		return;
//	}
//	if (ret == 'O')
//	{
//		printf("电脑赢\n");
//	}
//}
//
//
//int main()
//{	
//	int quit = 0;
//	while (!quit)
//	{
//		menu();
//		printf("扣1玩游戏,扣2拜拜->\n");
//		int input = 0;
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("就这?再来一把?\n");
//			break;
//		case 2:
//			quit = 1;
//			printf("退出游戏!\n");
//			break;
//		default:
//			printf("您的输入有误!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = sizeof(short);
//	int b = sizeof(int);
//	int c = sizeof(long);
//	int d = sizeof(long long);
//	printf("The size of short is %d bytes!\n", a);
//	printf("The size of int is %d bytes!\n", b);
//	printf("The size of long is %d bytes!\n", c);
//	printf("The size of long long is %d bytes!\n", d);
//	return 0;
//}

//printf的返回值
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = printf("Hello world!");
//	printf("\n");
//	printf("%d", a);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%4d%2d%2d", &a, &b, &c);
//	printf("year=%d\n", a);
//	printf("month=%02d\n", b);
//	printf("date=%02d\n", c);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int t = a;
//	a = b;
//	b = t;
//	printf("%d%d", a, b);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 14;
//	int b = 2;
//	int c = a / b;
//	int d = a%b;
//	printf("%d %d", c, d);
//	return 0;
//}

//将一个四位数，反向输出。
//#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int a, b[4];
//	scanf("%d", &a);
//	b[0] = a % 10;
//	b[1] = (a % 100) / 10;
//	b[2] = (a % 1000) / 100;
//	b[3] = a / 1000;
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d", b[i]);
//	}
//	return 0;
//}

//不允许创建临时变量，交换两个整数的内容
//①
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//②
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n", a, b);
//	return 0;
//}


//写一个函数返回参数二进制中 1 的个数。
//①
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int count = 0;//计数
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}
////②
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//计数
//	for (i = 0; i<32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//			count++;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}
//
//
//③
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;//计数
//	while (num)
//	{
//		count++;
//		num = num&(num - 1);
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}

//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同
//输入例子:1999 2299     输出例子:7
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Differ(int x,int y)
//{
//	int n = x^y;
//	int count = 0;
//	while (n != 0)
//	{
//		count++;
//		n = n&(n - 1);
//
//	}
//	return count;
//}
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	printf("这两个数有%d个比特位不同!\n", Differ(a, b));
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", b, a);
//	return 0;
//}

//给定一个数组{1,2,3,2,1},找到出现一次的数字
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int arr[5] = { 1, 2, 3, 2, 1 };
//	for (int i = 0; i < 5; i++)
//	{
//		a = a ^ arr[i];	
//	}
//	printf("%d\n", a);
//	return 0;
//}

//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同
//输入例子:1999 2299     输出例子:7
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int Differ(int x, int y)
//{
//	int a = x^y;//异或之后不同位上是1,相同位上为0
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int x = 1999;
//	int y = 2299;
//	int ret = Differ(x, y);
//	printf("%d\n", ret);
//	return 0;
//}


//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void pri(int *arr,int len)
//{
//	int *p = arr;
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}
//
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	pri(arr, len);
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int tmp = 0;
//	scanf("%d %d", &a, &n);
//	for (int i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//函数实现字符串逆序,要求使用指针
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//void reverse(char* str)
//{
//	char* left = str;//数组名代表首元素地址
//	char* right = str + strlen(str) - 1;//str加数组元素个数等于最后一个元素的地址
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		++left;
//		--right;
//	}
//}
//
//int main()
//{
//	char str1[] = "woaiLiLan";
//	reverse(str1);
//	printf("%s\n", str1);
//	return 0;
//}
//
//
//水仙花数(0-100000)
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//#include<windows.h>
//void Flower()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		int n = i;
//		int num = 0;
//		int sum = 0;
//		while (n)//求这是个几位数
//		{
//			n = n / 10;
//			num++;//确定次方数
//		}
//		n = i;
//		while (n)
//		{
//			//pow(n,m)表示n的m次方;
//			sum = sum + (int)pow(n % 10, num);//每次n%10得到的是最后一位数字;
//			n = n / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//}
//
//int main()
//{
//	Flower();
//	system("pause");
//	return 0;
//}


//扫雷
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<windows.h>
//#include<time.h>
//#define ROW 12
//#define COL 12
//#define NUM 20//部署20个雷
//void  initBoard(char board[][COL], int row, int col, char elem);
//void  setMine(char mine[][COL], int row, int col);
//void  showBoard(char board[][COL], int row, int col);
//char  getNum(char mine[][COL], int x, int y);//'0','1','2'
//
//void  initBoard(char board[][COL], int row, int col, char elem)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			board[i][j] = elem;
//		}
//	}
//}
//void  setMine(char mine[][COL], int row, int col)
//{
//	int n = NUM;
//	while (n)
//	{
//		int x = rand() % (row - 2) + 1;
//		int y = rand() % (col - 2) + 1;
//		mine[x][y] = '1';
//		n--;
//	}
//}
//void  showBoard(char board[][COL], int row, int col)
//{
//	int i = 1;
//	printf("   ");
//	for (; i <= col - 2; i++)
//	{
//		printf(" %-2d|", i);
//	}
//	printf("\n");
//	for (i = 1; i <= col - 2; i++)
//	{
//		printf("%3s", "----");
//	}
//	printf("---\n");
//
//	for (i = 1; i <= row - 2; i++)
//	{
//		printf("%2d|", i);
//		int j = 1;
//		for (; j <= col - 2; j++)
//		{
//			printf(" %-2c|", board[i][j]);
//		}
//		printf("\n");
//		for (j = 1; j <= col - 2; j++)
//		{
//			printf("%3s", "----");
//		}
//		printf("---\n");
//	}
//}
//char  getNum(char mine[][COL], int x, int y)
//{
//	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + \
//		mine[x][y - 1] + mine[x][y + 1] + \
//		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 7 * '0';
//}
//void game()
//{
//	srand((unsigned)time(NULL));
//	char board[ROW][COL];
//	char mine[ROW][COL];
//	initBoard(board, ROW, COL, '*');//初始化面板为全*
//	initBoard(mine, ROW, COL, '0');
//	setMine(mine, ROW, COL);//布雷 
//	int count = (ROW - 2)*(COL - 2) - NUM;//没雷格子总数
//	do
//	{
//		int x = 0;
//		int y = 0;
//		showBoard(board, ROW, COL);
//		printf("输入要扫的位置-> ");
//		scanf("%d %d", &x, &y);
//		if (x<1 || x>10 || y<1 || y>10)
//		{
//			printf("输入有误!\n");
//			continue;//结束本次循环,恢复到最开始
//		}
//		if (board[x][y] != '*')
//		{
//			printf("已经被扫过了!\n");
//			continue;
//		}
//		if (mine[x][y] == '0')
//		{
//			count--;//排除完没雷的格子
//			char num = getNum(mine, x, y);
//			board[x][y] = num;
//		}
//		else
//		{
//			printf("这坐标(%d,%d)有雷,这个b被炸死!\n", x, y);
//			break;
//		}
//	} while (count>0);
//	//两种情况退出循环:①break②不满足循环条件
//	if (count > 0)
//	{
//		printf("你直接被炸飞!\n");
//	}
//	else
//	{
//		printf("恭喜这个b扫雷成功!\n");
//	}
//	showBoard(mine, ROW, COL);
//}
//void menu()
//{
//	printf("********欢迎来到扫雷游戏******\n");
//	printf("*****************************\n");
//	printf("**************1.play*********\n");
//	printf("**************2.quit*********\n");
//	printf("*****************************\n");
//}
//int main()
//{
//	int quit = 0;
//	while (!quit)
//	{
//		menu();
//		int input;
//		printf("请输入数字是否开始游戏:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("就这?再搞一把?\n");
//			break;
//		case 2:
//			quit = 1;
//			printf("真别玩了!\n");
//			break;
//		default:
//			printf("就俩数字输不对?重新输!\n");
//			break;
//		}
//	}
//	return 0;
//}

//模拟实现库函数strlen
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int len(char* p)
//{
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + len(p + 1);
//	}
//}
//int main()
//{
//	char str[500] = "LiLan is my honey!";
//	printf("%d\n", len(str));
//	return 0;
//}

//模拟实现库函数strcpy
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void copy(char* str1,char* str2)
//{
//	for (int i = 0; ; i++)
//	{
//		*(str1 + i) = *(str2 + i);
//		if (*(str2 + i) == '\0')
//			break;
//	}
//}
//
//int main()
//{
//	char str1[99999];
//	char str2[99999];
//	scanf("%s", str2);
//	copy(str1, str2);
//	printf("复制后str2的内容为:%s\n", str1);
//	return 0;
//}


//指针打印数组
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void Print(int *arr, int len)
//{
//	int *p = arr;//把数组首元素的地址给p
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\t", *(p + i));//指针依次向后挪,解引用打印所存储的内容
//      //printf("%d\t",p[i])作用一样,[]具有解引用功能
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, len);
//	return 0;
//}

//指针实现strcpy
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void copy(char* str1,char* str2)
//{
//	for (int i = 0;; i++)
//	{
//		*(str2 + i) = *(str1 + i);
//		if (*(str1+i) == '\0')
//			break;
//	}
//}
//int main()	
//{
//	char str1[500];
//	char str2[500];
//	scanf("%s",str1);
//	copy(str1,str2);
//	printf("复制后str2的内容为:%s\n", str2);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str1[9999];
//	//char str2 = "LiLan is my honey!"
//	strcpy(str1, "LiLan is my honey!");
//	printf("%s\n", str1);
//	return 0;
//}


//实现库函数strlen
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int len(char* p)
//{
//	
//	if ( *p== '\0')
//		return 0;
//	else
//	{
//		return 1 + len(p + 1);//用递归
//	}
//}
//int main()
//{
//	char str[] = "wo ai wo ma ma !";
//	printf("%d\n", len(str));
//	return 0;
//}


//指针实现strlen
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int myStrlen(char *p)
//{
//	char *s = p;
//	while (*s != '\0')
//	{
//		s++;
//	}
//	return s - p;
//}
//
//int main()
//{
//	char *z = "lilan is my girl!";
//	printf("%d\n", myStrlen(z));
//	return 0;
//}

//猜数字游戏
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//void menu()
//{
//	printf("*******欢迎来到猜数字游戏*******\n");
//	printf("*******************************\n");
//	printf("****************1.play*********\n");
//	printf("****************2.quit********\n");
//	printf("******************************\n");
//}
//void game()
//{
//	srand((unsigned)time(NULL));
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	printf("请输入所猜数字:\n");
//	while (1)
//	{		
//		scanf("%d", &guess);
//		if (ret > guess)
//		{
//			printf("猜小了!\n");
//		}
//		if (ret < guess)
//		{
//			printf("猜大了!\n");
//		}
//		if (ret == guess)
//		{
//			printf("恭喜你,猜对了!\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int quit = 0;
//	while (!quit)
//	{
//		menu();
//		int input;
//		printf("请输入你的选择是否开始游戏:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("开始游戏!\n");
//			game();
//			printf("是否再开始下一把?\n");
//			break;
//		case 2:
//			quit = 1;
//			printf("退出游戏,祝你好运!\n");
//			break;
//		default:
//			printf("你的输入有误!\n");
//			break;
//		}
//	}
//	return 0;
//}


//水仙花数1-100000
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//void Water()
//{
//	for (int i = 0; i < 100000; i++)
//	{
//		int n = i;
//		int num = 0;
//		int sum = 0;
//		while (n)//看这是个几位数,确定次方数
//		{
//			n = n / 10;
//			num++;//每除一次加一次
//		}
//		n = i;
//		while (n)
//		{
//			sum = sum + (int)pow(n%10,num);
//			n = n / 10;
//		}
//		if (sum == i)
//			printf("%d\n", i);
//	}
//}
//
//int main()
//{
//	Water();
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	//int *p = NULL;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	printf("%d", arr);
//	printf("\n");
//	printf("%d", &arr+1);
//	return 0;
//}


//qsort(排序函数)
//void qsort(void *base, int num, int width, int( *compare)( void *elem1,  void *elem2));
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void *elem1, const void *elem2)
//{
//    return	*((int*)elem1) - *((int*)elem2);
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, len, sizeof(int), cmp_int);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//排序函数(普遍)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void*elem1, const void*elem2)
//{
//	return *((int *)elem1) - *((int *)elem2);
//}
////一定要加i
//void swap(void*elem1, void*elem2, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		//一个字节一个字节交换
//		char tmp = *((char*)elem1 + i);
//		*((char*)elem1 + i) = *((char*)elem2 + i);
//		*((char*)elem2 + i) = tmp;
//	}
//}
////len为数组长度,size为数据类型大小
//void MyQsort(void *base, int len, int size,int(*cmp)(void *elem1, void *elem2))
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			//if(arr[i]>arr[i+1])
//			if (cmp((char*)base + j*size, (char*)base + (j + 1)*size)>0)
//			{
//				swap((char*)base + j*size, (char*)base + (j + 1)*size,size);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	MyQsort(arr, len, sizeof(int),cmp_int);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//	return 0;
//}


////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//#pragma warning(disable:4996)
//#include<stdio.h>
//int Juice(int num)
//{
//	int pop = num;
//	int empty = num;
//	while (empty > 1)
//	{
//		pop = pop + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	return pop;
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入你有多少钱:\n");
//	scanf("%d", &num);
//	printf("你能喝到%d瓶汽水!\n", Juice(num));
//	return 0;
//}

//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//#pragma warning(disable:4996)
//#include<stdio.h>
//void SwapArr(int *arr, int len)
//{
//	int left = 0;
//	int right = len - 1;
//	for (int i = 0; i < len; i++)
//	{
//		while ((left < right) && arr[left] % 2 == 1)//从左到右找到偶数停止
//		{
//			left++;
//		}
//		while ((left < right) && arr[right] % 2 == 0)//从右往左找到奇数停止
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	SwapArr(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//	return 0;
//}


////打印菱形
//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <windows.h>
//#define num 7
//int main()
//{
//	//输出菱形上半部分
//	int i = 1;
//	for (; i <= num; i++)//利用该for循环来限定行数
//	{
//		int j = 0;
//		for (; j < num - i; j++)//该for循环来限定每行的空格数
//		{
//			printf(" ");
//		}
//		int k = 0;
//		for (; k < 2 * i - 1; k++)//该for循环来限定每行的星星数
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//输出菱形下半部分,该菱形具有对称性，而后6行和前6行是对称的，所以这里要num-1
//	for (int i = num - 1; i > 0; i--)
//	{
//		int j = 0;
//		for (; j < num - i; j++)//该for循环来限定每行的空格数
//		{
//			printf(" ");
//		}
//		int k = 0;
//		for (; k < 2 * i - 1; k++)//该for循环来限定每行的星星数
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//递归实现输出斐波那契数
//#pragma warning(disable:4996)
//#include<stdio.h>
//int fib(int n)
//{
//	if (n < 3)
//		return 1;
//	return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int num = 0; 
//	printf("请输入第几个斐波那契数:\n");
//	while (scanf("%d", &num) != EOF)
//	{
//		printf("%d\n", fib(num));
//	}
//	return 0;
//}

//#pragma warning(disable:4996)
//#include<stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//	printf("%d", p[3]);
//				//*(p+3)
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);//POINT 
//	printf("%s\n", *--*++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//
//	/*char* a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);*/
//	return 0;
//}


//最小公倍数
//#pragma warning (disable:4996)
//#include<stdio.h>
//void beiShu(int a, int b)
//{
//	int c;
//	int m = a;
//	int n = b;
//	while (b)
//	{
//		c = a%b;
//		a = b;
//		b = c;
//	}
//	int i = m / a;
//	int j = n / a;
//	printf("%d\n", i*j*a);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	beiShu(a, b);
//	return 0;
//}

//句子逆序,单词内部不逆序
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
////整体逆置
//void nizhi(char *left,char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
////单词内部再逆置
//void reverse(char *str)
//{
//	int len = strlen(str);
//	//排除一个字母的情况
//	if (len <= 1)
//		return;
//	//整体逆置
//	nizhi(str, str + len - 1);
//	//按照单词进行局部逆置
//	char* cur = str;
//	while (*cur)
//	{
//		//查找单词边界:空格  或'\0'
//		char* start = cur;
//		while (*cur != ' '&&*cur != '\0')
//			++cur;
//		//当前单词的区间[start,cur)
//		//逆转单词
//		nizhi(start, cur - 1);
//		//查找下一个单词的区间
//		//跳过空格
//		while (*cur == ' ')
//			++cur;
//	}
//}
//void test()
//{
//	char str[999] = { 0 };
//	gets(str);
//	reverse(str);
//	printf("%s\n", str);
//}
//int main()
//{
//	test();
//	return 0;
//}



////最大公约数
//#pragma warning(disable:4996)
//#include<stdio.h>
//int yueShu(int a,int b)
//{
//	int c = 0;
//	while (b)
//	{
//		c = a%b;
//		a = b;
//		b = c;
//	}
//	return a;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", yueShu(a, b));
//	return 0;
//}

////最小公倍数
//#pragma warning(disable:4996)
//#include<stdio.h>
//int beiShu(int a, int b)
//{
//	int m = a;
//	int n = b;
//	while (b)
//	{
//		int c = a%b;
//		a = b;
//		b = c;
//	}
//	return m*n / a;
//}
//int main()
//{
//	int a;
//	int b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", beiShu(a, b));
//	return 0;
//}



//逆转字符串,单词不逆序
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//void reverseStr(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse(char* str)
//{
//	int len = strlen(str);
//	if (len <= 1)
//		return;
//	reverseStr(str, str + len - 1);
//	char* cur = str;
//	while (*cur)
//	{
//		char* start = cur;
//		while (*cur != ' '&&*cur != '\0')
//			++cur;
//		//当前单词区间[start,cur) 
//		reverseStr(start, cur - 1);
//		//查找下一个单词区间
//		while(*cur == ' ')
//		++cur;
//	}
//}
//void test()
//{
//	char str[999] = { 0 };
//	gets(str);
//	reverse(str);
//	printf("%s\n", str);
//}
//int main()
//{
//	test();
//	return 0;
//}





//三种方式模拟实现strlen
//①指针-指针
//#pragma warning (disable:4996)
//#include<stdio.h>
//int MyStrlen(char* p)
//{
//	char* s = p;
//	while (*s != '\0')
//	{
//		s++;
//	}
//	return s-p;
//}
//int main()
//{
//	char* a = "Lilan is my girl!";
//	printf("%d\n", MyStrlen(a));
//	return 0;
//}
//
//②递归
//#include<stdio.h>
//int MyStrlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	return 1 + MyStrlen(str + 1);
//}
//int main()
//{
//	char* str1 = "lilan is cute!";
//	printf("%d\n", MyStrlen(str1));
//	return 0;
//}
//
//③计数器
//#include<stdio.h>
//int MyStrlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char *str = "Lilan is cute!";
//	printf("%d\n", MyStrlen(str));
//	return 0;
//}

//模拟实现strcpy
//#pragma warning(disable:4996)
//#include<stdio.h>
//void MyStrcpy(char *str1, char *str2)
//{
//	for (int i = 0;; i++)
//	{
//		*(str2 + i) = *(str1 + i);
//		if (*(str1+i) == '\0')
//			break;
//	}
//}
//int main()
//{
//	char str1[999];
//	char str2[999];
//	scanf("%s", str1);
//	MyStrcpy(str1,str2);
//	printf("复制后str2的内容为:%s\n", str2);
//	return 0;
//}

//模拟实现strcmp
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<assert.h>
//int MyStrcmp(char *str1, char *str2)
//{
//	assert(str1&&str2);
//	if (str1 == NULL)
//		return -1;
//	if (str2 == NULL)
//		return 1;
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char* str1 = "azcd";
//	char* str2 = "afcd";
//	printf("%d\n", MyStrcmp(str1, str2));
//	return 0;
//}


//模拟实现strcat(字符串拼接)
//#pragma warning(disable:4996)
//#include<stdio.h>
//char* MyStrcat(char *dest,char *src)
//{
//	char *p = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//	return p;
//}
//int main()
//{
//	//注意这里不能是指针,字符串放在只读区,不能修改
//	//数组形式是对内存的一份拷贝
//	char dest[20] = "bit";
//	char *src = "hello";
//	MyStrcat(dest, src);
//	printf("%s\n", dest);
//	return 0;
//}

//模拟实现strstr
//#pragma warning(disable:4996)
//#include<stdio.h>
//char* MyStrstr(char* str1, char* str2)
//{
//	char* start = str1;
//	while (*start != '\0')
//	{
//		char* s1 = start;//每次都从start开始
//		char* s2 = str2; //每次从头开始
//		while (s1 && s2 && *s1 == *s2)
//			//主串子串相同,就往后加,但不能是\0
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return start;
//		}
//		start++;//不一样之后主串往后加一个
//	}
//	return NULL;
//}
//int main()
//{
//	char *str1 = "likunlong";
//	char* str2 = "kun";
//	printf("%s\n", MyStrstr(str1, str2));
//	return 0;
//}


//memcpy
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int dest[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int src[] = { 1, 1, 1, 1 };
//	memcpy(dest, src, 16);
//	int len = sizeof(dest) / sizeof(dest[0]);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", dest[i]);
//	}
//	return 0;
//}


//模拟实现memcpy
//#pragma warning(disable:4996)
//#include<stdio.h>
//void MyMemcpy(char* dest,char* src,int size,int num)
//{
//	int i = 0;
//	int ret = size*num;
//	for (;i<ret; i++)
//	{
//		
//		*(dest +i ) = *(src + i);
//		if (*src == '\0')
//			break;
//	}
//}
//int main()
//{
//	char dest[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	char src[] = { 1, 1, 1, 1 };
//	MyMemcpy(dest, src, 1, 4);
//	int len = sizeof(dest) / sizeof(dest[0]);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", dest[i]);
//	}
//	return 0;
//}



//memcpy
//内存重叠,标准未定义,结果是什么不重要
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<memory.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	memcpy(arr + 2, arr, 16);
//	int i = 0;
//	for (; i < 8; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//模拟实现memcpy
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<memory.h>
//void* MyMemcpy(void* dest, void* src, int count)
//{
//	void* ret = dest;
//	while (count != 0)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;//++优先级高,给前面带括号
//		((char*)src)++;
//		count--;
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	//MyMemcpy(arr, arr + 2, 16);
//	MyMemcpy(arr+2,arr,16);
//	int i = 0;
//	for (; i < 8; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//模拟实现memmove
//#pragma warning(disable:4996)
//#include<stdio.h>
//void* MyMemmove(void* dest, void* src, int count)
//{
//	void* ret = dest;
//	if (src > dest)
//	{
//		while (count != 0)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;//++优先级高,给前面带括号
//			((char*)src)++;
//			count--;
//		}
//	}
//	//src<dest的情况,发生内存重叠,从后往前拷贝
//	else
//	{
//		count--;//15次
//		while (count >= 0)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//			count--;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	MyMemmove(arr + 2, arr, 16);
//	int i = 0;
//	for (; i < 8; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//#pragma warning(disable:4996)
//#include<stdio.h>
//int Find(int str[3][3], int key, int row, int col)
//{
//	int i = 0;
//	int j = col - 1;
//	while (i<row&&j>=0)
//	{
//		if (str[i][j] < key)
//			++i;
//		else if (str[i][j]>key)
//		{
//			--j;
//		}
//		else
//		{
//			printf("找到了!\n");
//			printf("它第一次出现位置是arr[%d][%d]\n", i, j);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5, } };
//	int key = 0;
//	printf("输入要找的数字:\n");
//	while (scanf("%d", &key) != EOF)
//	{
//		Find(arr, key, 3, 3);
//	}
//	return 0;
//}

//strtok
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[] = "2000.08.01/lkl";
//	char* p = strtok(str, "./");
//	while (p != NULL)
//	{
//		printf("%s\n", p);
//		p = strtok(NULL, "./");
//	}
//	return 0;
//}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话

//#pragma warning(disable:4996)
//#include<stdio.h>
//void Find()
//{
//	char killer = "A";
//	for (; killer <= 'D'; killer++)
//	{
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3))
//		{
//			printf("凶手就是%c!\n", killer);
//		}
//	}
//}
//int main()
//{
//	Find();
//	return 0;
//}


//猜数字
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("**欢迎来到猜数字游戏*****\n");
//	printf("************************\n");
//	printf("*********1.play*********\n");
//	printf("*********2.quit*********\n");
//	printf("************************\n");
//}void game()
//{
//	srand((unsigned)time(NULL));
//	int num = rand() % 100 + 1;
//	while (1)
//	{
//		int guess = 0;
//		printf("请输入你猜的数字:\n");
//		scanf("%d", &guess);
//		if (guess > num)
//		{
//			printf("猜大了!\n");
//		}
//		else if (guess < num)
//		{
//			printf("猜小了!\n");
//		}
//		else
//		{
//			printf("恭喜这个b!\n");
//			break;
//		}
//
//	}
//
//}
//int main()
//{
//	int quit = 0;
//	while (!quit)
//	{
//		menu();
//		int input = 0;
//		printf("请输入你的操作:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("就这?再搞一把?\n");
//			break;
//		case 2:
//			quit = 1;
//			printf("退出游戏!\n");
//			break;
//		default:
//			printf("输入有误!\n");
//			break;
//		}
//	}
//	return 0;
//}

//水仙花数(0-100000)
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<math.h>
//void Flower()
//{
//	int i = 0;
//	
//	for (; i < 100000; i++)
//	{
//		int n = i;
//		int num = 0;
//		int sum = 0;
//		while (n)
//		{
//			n = n/10;
//			num++;//确定次方数;
//		}
//		n = i;
//		while (n)
//		{
//			sum = sum + (int)pow(n % 10, num);
//			n = n / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//}
//int main()
//{
//	Flower();
//	return 0;
//}


//通讯录
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<memory.h>
//#include<assert.h>
//#define MAX_SIZE 10
//typedef struct PersonInfor
//{
//	char name[10];
//	char sex[5];
//	int age;
//	char tel[11];
//	char address[20];
//}information;
//typedef struct Contact
//{
//	int usedSize;
//	information per[MAX_SIZE];
//}Contact;
//void menu()
//{
//	printf("*****************************\n");
//	printf("**********这个b的通讯录******\n");
//	printf("*************1.add***********\n");
//	printf("*************2.search********\n");
//	printf("*************3.delete********\n");
//	printf("*************4.show**********\n");
//	printf("*************5.clear*********\n");
//	printf("*************6.change*********\n");
//	printf("*************0.quit**********\n");
//	printf("*****************************\n");
//}
//void InitContact(Contact *p)
//{
//	assert(p != NULL);
//	p->usedSize = 0;
//	memset(p->per, 0, sizeof(p->per));
//}
//void AddContact(Contact *p)
//{
//	assert(p != NULL);
//	if (p->usedSize == MAX_SIZE)
//	{
//		printf("这个b的通讯录满了!\n");
//		return;
//	}
//	printf("请输入姓名:\n");
//	scanf("%s", p->per[p->usedSize].name);
//	printf("请输入性别:\n");
//	scanf("%s", p->per[p->usedSize].sex);
//	printf("请输入年龄:\n");
//	scanf("%d", &(p->per[p->usedSize].age));
//	printf("请输入电话号码:\n");
//	scanf("%s", p->per[p->usedSize].tel);
//	printf("请输入你的住址:\n");
//	scanf("%s", p->per[p->usedSize].address);
//	p->usedSize++;
//	printf("添加成功!\n");
//}
////找不到返回-1,找到返回下标
//int SearchContact(Contact *p)
//{
//	assert(p != NULL);
//	int i = 0;
//	char name[20];
//	if (p->usedSize == 0)
//	{
//		printf("这个b的通讯录是空的,别查了!\n");
//		return -1;
//	}
//	printf("请输入姓名:\n");
//	scanf("%s", name);
//	for (; i < p->usedSize; i++)
//	{
//		if ((strcmp(p->per[i].name, name)) == 0)
//		{
//			return i;
//			printf("找到了!\n");
//		}
//	}
//	return -1;
//}
//void DeleteContact(Contact *p)
//{
//	assert(p != NULL);
//	int index = SearchContact(p);
//	if (index == -1)
//	{
//		printf("查无此人!\n");
//		return;
//	}
//	int i = 0;
//	for (; i < p->usedSize - 1; i++)
//	{
//		p->per[i] = p->per[i + 1];
//	}
//	p->usedSize--;
//	printf("删除成功!\n");
//}
//void ShowContact(Contact *p)
//{
//	assert(p != NULL);
//	int i = 0;
//	printf("%-10s %-10s %-10s %-10s %-10s\n", "姓名" "性别" "年龄" "电话" "住址");
//	for (i = 0; i < p->usedSize; i++)
//	{
//		printf("%-10s %-10s %-10s %-10s %-10s\n", p->per[i].name, p->per[i].sex, p->per[i].age, p->per[i].tel, p->per[i].address);
//	}
//}
//void ChangeContact(Contact *p)
//{
//	assert(p != NULL);
//	if (p->usedSize == 0)
//	{
//		printf("这个通讯录还是个空的,先添加一个再修改吧!\n");
//		return;
//	}
//	printf("开始修改!\n");
//	printf("请输入所要修改联系人的名字:\n");
//	char mingzi[10];
//	scanf("%s", mingzi);
//	int i = 0;
//	for (; i < p->usedSize; i++)
//	{
//		if ((strcmp(p->per[i].name, mingzi) == 0))
//			break;
//	}
//	printf("修改一项请按1,修改全部请按5!\n");
//	int input = 0;
//	int in = 0;
//	scanf("%d", &in);
//	switch (in)
//	{
//	case 1:
//		printf("请输入你要修改的信息:1.姓名 2.性别 3.年龄 4.电话 5.住址\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入修改后的姓名:\n");
//			scanf("%s", p->per[i].name);
//			break;
//		case 2:
//			printf("请输入修改后的性别:\n");
//			scanf("%s", p->per[i].sex);
//			break;
//		case 3:
//			printf("请输入修改后的年龄:\n");
//			scanf("%s", &(p->per[i].age));
//			break;
//		case 4:
//			printf("请输入修改后的电话:\n");
//			scanf("%s", p->per[i].tel);
//			break;
//		case 5:
//			printf("请输入修改后的住址:\n");
//			scanf("%s", p->per[i].address);
//			break;
//		default:
//			printf("您的输入有误!\n");
//			break;
//		}
//		break;
//	case 5:
//		printf("请输入修改后的名字:\n");
//		scanf("%s", p->per[i].name);
//		printf("请输入修改后的性别:\n");
//		scanf("%s", p->per[i].sex);
//		printf("请输入修改后的年龄:\n");
//		scanf("%s",&( p->per[i].age));
//		printf("请输入修改后的电话:\n");
//		scanf("%s", p->per[i].tel);
//		printf("请输入修改后的住址:\n");
//		scanf("%s", p->per[i].address);
//		break;
//		printf("修改成功!\n");
//	default :
//		printf("你的输入有误!\n");
//		break;
//	}
//	
//}
//void ClearContact(Contact *p)
//{
//	assert(p != NULL);
//	p->usedSize = 0;
//	printf("清理成功!\n");
//}
//int main()
//{
//	int quit = 0;
//	Contact con;
//	InitContact(&con);
//	while (!quit)
//	{
//		int input = 0;
//		menu();
//		printf("请输入你的操作:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			AddContact(&con);
//			break;
//		case 2:
//			SearchContact(&con);
//			break;
//		case 3:
//			DeleteContact(&con);
//			break;
//		case 4:
//			ShowContact(&con);
//			break;
//		case 5:
//			ClearContact(&con);
//			break;
//		case 6:
//			ChangeContact(&con);
//			break;
//		case 0:
//			quit = 1;
//			printf("退出这个b的通讯录!\n");
//			break;
//		default:
//			break;
//		}
//	}
//	return 0;
//}

//atoi
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char a[] = "-123";
//	char b[] = "100";
//	printf("%d\n", atoi(a) + atoi(b));
//	return 0;
//}


//itoa
//#include<stdio.h>
//#include<stdlib.h>
//#include<limits.h>
//#include<windows.h>
//int main()
//{
//	int num = 123456;
//	char str[25];
//	itoa(num,str,10);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}


//strncpy
//把src的n个字节拷贝给dest
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char dest[] = "likunlong";
//	char src[] = "verygood";
//	strncpy(dest, src, 2);
//	printf("%s\n", dest);
//	return 0;
//}

//strncat
//将src的n个字节拼接到dest后面
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char dest[20] = "To be ";
//	char src[20] = "or not to be!";
//	strncat(dest, src, 50);
//	printf("%s\n", dest);
//	return 0;
//}


//strncmp
//比较str里的n个字节,成功返回0
//#pragma warning (disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<limits.h>
//int main()
//{
//	char str[] = "Looking at my face!";
//	if (strncmp(str, "Lo", 2) == 0)
//		printf("成功!\n");
//	return 0;
//}

////模拟实现strncpy
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//char* MyStrncpy(char *dest, char *src, int count)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (count--)
//	{
//		*dest++ = *src++;
//	}
//	return dest;
//}
//int main()
//{
//	char str[20] = "lilan is my girl!";
//	MyStrncpy(str, "LILAN", 5);
//	puts(str);
//	return 0;
//}


////找单身狗
////一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//#pragma warning(disable:4996)
//#include<stdio.h>
////冒泡排序一下
//void Sort(int arr[], int len)
//{
//	int i = 0;
//	int j = 0;
//	for (; i < len; i++)
//	{
//		//升序,从后往前遍历
//		for (j = i - 1; j >= 0;j--)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
////找单身狗
//void Single(int arr[], int len)
//{
//	int i = 0;
//	for (; i < len;)
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			i = i + 2;
//		}
//		else
//		{
//			printf("%d ", arr[i]);
//			i++;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 2, 7, 5, 2, 1, 4, 9, 6, 3, 7 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Sort(arr, len);
//	Single(arr, len);
//	return 0;
//}






//模拟实现atoi
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//int MyAtoi(char *str)
//{
//	int tmp = 0;
//	assert(str != NULL);
//	while (*str==' ')
//	{
//		str++;
//	}
//	int s = (*str == '-') ? (-1) : 1;
//	if (*str == '+' || *str == '-')
//	{
//		str++;
//	}
//	while (*str>='0'&&*str<='9')
//	{
//		tmp = tmp * 10 + (*str - '0');
//		str++;
//	}
//	return tmp*s;
//}
//int main()
//{
//	char str[] = "-123";
//	printf("%d\n", MyAtoi(str));
//	return 0;
//}

//strncat
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char dest[20] = "hello";
//	char src[20] = "world";
//	strncat(dest, src, 5);
//	printf("%s \n", dest);
//	return 0;
//}



//模拟实现strncat
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* MyStrncat(char *dest,char *src, int num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char *ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	if (strlen(src)<num)
//	{
//		num = strlen(src);
//	}
//	while (num--)
//	{
//		*dest++ = *src++;
//	}
//	*dest = '\0';
//	return ret;
//}
//int main()
//{
//	char dest[20] = "hello";
//	char src[20] = "world";
//	MyStrncat(dest, src, 5);
//	printf("%s\n", dest);
//	return 0;
//}




//杨辉三角
//#pragma warning (disable:4996)
//#include<stdio.h>
//void Triangle(int n)
//{
//	int data[30][30] = { 1 };
//	int i = 0;
//	int j = 0;
//	for (i=1; i < n; i++)
//	{
//		data[i][0] = 1;
//		for (j=1; j <= i; j++)
//		{
//			data[i][j] = data[i - 1][j] + data[i - 1][j - 1];
//		}	
//	}
//	for ( i = 0; i < n; i++)
//	{
//		for (j=0; j <= i; j++)
//		{
//			printf("%d ", data[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	Triangle(20);
//	return 0;
//}




//三子棋
//#pragma warning (disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#define ROW 3
//#define COL 3
////初始化一个二维数组当做棋盘
////展示棋盘---|||
////玩家落子
////电脑落子
////判赢
////遍历数组
////game函数(判断返回值)
////main函数控制游戏
//void InitBoard(char board[ROW][COL], int row, int col);
//void PrintBoard(char board[ROW][COL], int row, int col);
//void PlayerMove(char board[ROW][COL], int row, int col);
//void ComputerMove(char board[ROW][COL], int row, int col);
//char isWin(char board[ROW][COL], int row, int col);
//int isFull(char board[ROW][COL], int row, int col);
//
//void menu()
//{
//	printf("******************************\n");
//	printf("*******欢迎来到三子棋游戏******\n");
//	printf("******************************\n");
//	printf("*************1.play***********\n");
//	printf("*************2.quit***********\n");
//	printf("******************************\n");
//}
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i ,j;
//	for (i=0; i < row; i++)
//	{
//		for (j=0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//void PrintBoard(char board[ROW][COL], int row, int col)
//{
//	printf("***********************\n");
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < row; i++)
//	{
//		for ( j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//			{
//				printf("|");
//			}
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			for (j = 0; j < col ; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//				{
//					printf("|");
//				}
//			}
//			printf("\n");
//		}
//	}
//	printf("***********************\n");
//}
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	while (1)
//	{
//		printf("请输入1-3的坐标!\n");
//		scanf("%d%d", &x, &y);
//		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
//		{
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = 'X';
//				break;
//			}
//		}
//		else
//		{
//			printf("你的输入有误!\n");
//		}
//	}
//}
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	while (1)
//	{
//		srand((unsigned)time(NULL));
//		int x = rand() % ROW;
//		int y = rand() % COL;
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = 'O';
//			break;
//		}
//	}
//}
//char isWin(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (; i < row; i++)
//	{
//		//行
//		if ((board[i][0] == board[i][1] )&& (board[i][1] == board[i][2]) && (board[i][0] != ' '))
//		{
//			return board[i][0];
//		}
//		//列
//		if ((board[0][i] == board[1][i]) && (board[1][i] == board[2][i]) && (board[0][i] !=' '))
//		{
//			return board[0][i];
//		}
//		//对角线(左上->右下)
//		if ((board[0][0] == board[1][1] )&&( board[1][1] == board[2][2] )&&( board[0][0] !=' '))
//		{
//			return board[0][0];
//		}
//		//对角线(右上->左下)
//		if ((board[0][2]==board[1][1])&&(board[1][1]==board[2][0])&&(board[0][2]!=' '))
//		{
//			return board[0][2];
//		}
//		//判断是否平局
//		if (isFull(board,row,col)==1)
//		{
//			return 'Q';//平局
//		}
//	}
//	return ' ';//代表没人赢
//}
////判断棋盘是都满了
//int isFull(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < row; i++)
//	{
//		for (; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//			{
//				return 0;//棋盘没满
//			}
//		}
//	}
//	return 1;//棋盘满了
//}
//void game()
//{
//	char board[ROW][COL] ;
//	InitBoard(board, ROW, COL);
//	PrintBoard(board, ROW, COL);
//	char ret;
//	while (1)
//	{
//		PlayerMove(board, ROW, COL);
//		PrintBoard(board, ROW, COL);
//		ret = isWin(board, ROW, COL);
//		if (ret != ' ')
//		{
//			break;
//		}
//		ComputerMove(board, ROW, COL);
//		PrintBoard(board, ROW, COL);
//		ret = isWin(board, ROW, COL);
//		if (ret != ' ')
//		{
//			break;
//		}	
//	}
//	if (ret == 'Q')
//	{
//		printf("平局!\n");
//		return;
//	}
//	if (ret == 'X')
//	{
//		printf("你赢了!\n");
//		return;
//	}
//	if (ret == 'O');
//	{
//		printf("电脑赢!\n");
//		
//	}
//}
//int main()
//{
//	int quit = 0;
//	while (!quit)
//	{
//		int input = 0;
//		menu();
//		printf("请输入你的操作->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("再来一把?\n");
//			break;
//		case 2:
//			quit = 1;
//			printf("退出游戏!\n");
//			break;
//		default :
//			printf("输入有误!\n");
//			break;
//		}
//	}
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	int row = 3;
//	int col = 3;
//	char board[3][3] = { 0 };
//	printf("*******************************\n");
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				printf(" %c ", board[i][j]);//棋盘输入格式为:  空X空(空O空)
//				if (j < col - 1)
//					printf("|");//输出两列 |
//			}
//			printf("\n");
//			if (i < row - 1)//控制---行数
//			{
//				for (int j = 0; j < col; j++)//循环控制---的列数
//				{
//					printf("---");//输出两行---
//					if (j < col - 1)
//					{
//						printf("|");
//					}
//				}
//				printf("\n");
//			}
//		}
//		printf("*******************************\n");
//		return 0;
//}




//扫雷
