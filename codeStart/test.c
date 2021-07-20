#include <stdio.h>
int main()
{
   printf("第一次提交代码!!\n");
   return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int coding = 0;
	printf("你会去敲代码吗？（选择1 or 0）\n");
	scanf("%d", &coding);
	if (coding == 1)
	{
		printf("坚持，你会有好offer\n");
	}
	else
	{
		printf("放弃，回家卖红薯\n");
	}
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1
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
}

1-100出现9的次数
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i;
	int j = 0;//j用来计次
	for (i = 1; i <= 100; i++)//1-100循环
	{
		if (i % 10 == 9)//个位数是9的
			j++;//符合一次,j就+1
		if (i / 10 == 9)//十位数是9的
			j++;
	}
	printf("%d\n", j);
}
	
	
n个数中出现9的次数
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
	int main()
	{
		for (int i = 1; i <= n; i++)
		{
			int ink = i;
			while (1)
			{
				if (ink % 10 == 0 || ink == 0)
				{
					break;
				}
				if (ink % 10 == 9)
				{
					j++;
					break;
				}
				ink = ink / 10;
			}
		}
		printf("%d", j);
		return 0;
	}


求10个数中最大的
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i=0;
	int max=0;
	int arr[10];
	printf("请输入十个数:\n");
	for (i; i < 10; i++)//循环输入十个数
	{
		scanf("%d",&arr[i]);
	}
	max = arr[0];//把第一个数给max
	for (i = 1; i < 10; i++)
	{
		if (arr[i]>max)//如果下一个数比max大
		{
			max = arr[i];//就把这个数给max
		}
	}
	printf("最大数为:%d", max);
	return 0;
}


输出99乘法表
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 1; i < 10; i++)//1=10循环
	{
		for (j = 1; j < 10; j++)//1-10循环
			printf("%d*%d=%d ", i, j, i*j);//输出格式,注意有空格(美化)
		printf("\n");//换行(美化)
	}
	
	return 0;
}


写一个函数求两个数较大值
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int a,int b)
{
	if (a > b)//如果a>b,返回较大值a
		return a;
	else
	{
		return b;
	}
}
int main()
{
	int a = 0;
	int	b = 0;
	printf("请输入两个待比较数:\n");
	scanf("%d%d", &a,&b);
	int ret = Max(a, b);//方法调用完毕,ret用来接收返回值
	printf("较大数为:%d\n", ret);//直接调用Max函数
	return 0;
}

分数求和
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	float i = 1.0;//注意这里定义的是分子的1,必须是float型
	int j = 1;
	float sum = 0;
	for (n = 1; n <= 100; n++)//循环100个数出来
	{
		sum = sum + (i/ n)*j;//数学表达式
		j = -j;//用于正负号转换
		
	}
	printf("%f\n", sum);
	return 0;
}

写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小数点后数值大于等于5, 向上取整；小于5，则向下取整。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float i;
	printf("请输入一个浮点数:\n");
	scanf("%f", &i);
	int num = (int)i;//强制变成整数
	float a = i - num;
	int b = 10 * a;
	if (b >= 5)
	{
		printf("该浮点数向上取整:%d\n", num + 1);
	}
	else
	{
		printf("该浮点数向下取整:%d\n", num);
	}
	return 0;
}
不引入新临时变量,交换两个数
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a, b);
}

给定两个整形变量,进行交换
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a;
	int b;
	int t = 0;
	scanf("%d %d", &a, &b);
	t = a;
	a = b;
	b = t;
	printf("%d %d\n", a, b);
	return 0;
}

求数组元素个数并遍历
#pragma warning (disable 4996)
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5};
	int num = sizeof(arr) / sizeof(arr[0]);//求数组元素个数
	printf("%d\n", num);
	//遍历(依次访问一遍且只访问一次)
	int sum = 0;
	for (; i < num; i++)
	{
		printf("arr[%d]=%d\n", i, arr[i]);
		sum = sum + arr[i];	//数组所有元素之和
	}
	printf("%d\n", sum);
	return 0;
}


1-100打印3的倍数
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)//一个数除以3没有余数就是3的倍数
			printf("%d\n", i);
	}
	return 0;
}


指针大小
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	return 0;

}

结构体	
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct stu
{
	char name[30];
	int age;
	char sex[3];
};

int main()
{
	struct stu s1 = { "一", 10, 'n' };
	struct stu s2 = { "二", 120, 'v' };
	printf("%s %d %s\n", s1.name, s1.age, s1.sex);//.也有访问功能
	struct stu *p = &s2;
	printf("%s %d %s\n", (*p).name, (*p).age, (*p).sex);//.的优先级高于指针
	printf("%s %d %s\n", p->name, p->age, p->sex);//指向符自带解引用功能
	return 0;
}


三目运算符
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 1;
	int b = 0;
	int c = 1;
	int d = a ? (b == 1 ? c : a) : c;
	printf("%d\n", d);
	return 0;
}



计算n的阶乘
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	int ret = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d\n", ret);
	return 0;
}

计算1!+2!+3!+...+10!
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (int n = 1; n <= 10; n++)
	{
		for (int i = 1; i <= n; i++)
		{
			ret = ret*i;
		}
		sum = sum + ret;
		ret = 1;
	}
	printf("%d\n", sum);
	return 0;
		
}

最大公约数(辗转相除法)
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b,c;
	printf("请输入两个待比较数:\n");
	scanf("%d %d", &a, &b);
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d\n", a);
	return 0;
}

二分查找	
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 8;
	int len = sizeof(arr) / sizeof(arr[0]);//求数组长度
	int left = 0;//0是下标
	int right = len - 1;//代表最后一个元素
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > key)//如果中间元素大于所找数字
		{
			right = mid - 1;//mid之前一个元素就是新的right
		}
		else if (arr[mid] < key)//如果中间元素小于所找数字
		{
			left = mid + 1;//mid之后一个元素就是新的left
		}
		else
		{
			break;
		}
		//两种情况退出:1.因为break退出 2.因为循环条件不满足退出(left>right)
	}
	if (left <= right)//如果因为break退出,就是找到了
	{
		printf("找到了,下标是:%d\n", mid);
	}
	else
	{
		printf("找不到");
	}
	return 0;
}

编写代码，演示多个字符从两端移动，向中间汇聚
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr1[] = "******************";
	char arr2[] = "LiLan is my honey!";
	int left = 0;
	int right = strlen(arr1) - 1;
	printf("%s\n", arr2);
	while (left <= right)
	{
		Sleep(1000);
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		left++;
		right--;
		printf("%s\n", arr1);
	}
	return 0;
}

模拟用户登录场景
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char passward[20] = { 0 };
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", passward);
		if (strcmp(passward, "1234") == 0)
			printf("登陆成功!\n");
		else
		{
			printf("密码有误,你还有%d次机会\n",3-i);
		}
	}
	return 0;
}


最大公约数(常规法)
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	int i = 0;
	printf("请输入两个数:\n");
	scanf("%d%d", &a, &b);
	for ( i = a; i <= a; i--)
	{
		if (a % i == 0 && b % i == 0)
			break;
	}
	printf("%d\n", i);
	return 0;
}

判断一个数是否是素数(常规法)
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	int i = 0;
	printf("请输入一个整数:\n");
	scanf("%d", &a);
	for ( i = 2; i < a; i++)
	{
		if (a%i == 0)//如果可以除尽,则不是素数
			break;
	}
	//两种情况退出:①因为break②不满足循环条件i<=a
	if (i <a)//满足循环条件,因为break退出.
	{
		printf("不是素数\n");
	}
	else
	{
		printf("是素数\n");
	}
	return 0;
}

//写一函数判断一个数是否是素数(n/2法)
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int isPrime(int n)
{
	int i = 0;
	for (i = 2; i <= (n/2); i++)
	{
		if (n%i == 0)
			return 1;
	}
	return 0;
}

int main()
{
	int num = 0;
	printf("请输入一个整数:\n");
	scanf("%d", &num);
	int ret = isPrime(num);
	if (ret == 1)
	{
		printf("%d不是素数\n", num);
	}
	else
	{
		printf("%d是素数", num);
	}
	return 0;
}

//写一函数判断一个数是否是素数(sqrt法)
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return -1;
	}
	return 0;
}


int main()
{
	int a = 0;
	printf("请输入一个数:\n");
	scanf("%d", &a);
	int ret = isPrime(a);
	if (ret == -1)
		printf("%d不是素数\n", a);
	else
	{
		printf("%d是素数\n", a);
	}
	return 0;
}


写一函数判断一个数是否是素数,并用该函数输出100-200间的素数
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int isPrime(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
			return -1;
	}
	return 0;

}
int main()
{
	int n = 0;
	for (n = 100; n <= 200; n++)
	{
		isPrime(n);
		int ret = isPrime(n);
		if (ret == -1)
			printf("%d不是素数\n",n);
		else
			printf("%d是素数\n",n);
	}
	return 0;
}

函数判断year是不是闰年
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int isLeapYear(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
	{
		return 0;
	}
	return -1;
}


int main()
{
	int year = 0;
	printf("请输入一个年份:\n");
	scanf("%d", &year);
	int ret = isLeapYear(year);
	if (ret == 0)
	{
		printf("%d年是闰年\n", year);
	}
	else
	{
		printf("%d不是闰年\n", year);
	}
	return 0;
}


printf函数返回值类型(返回值是输出的字符数量，包括数字，字母，标点符号，空格等)
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int A = 43;
	printf("%d", printf("%d", printf("%d", A)));
	return 0;
}     */       //输出4321


写一函数交换两个整数的内容(按址传参)
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int a = 10;
	int b = 20;
	Swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}



实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定.如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void chart(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("%d*%d=%2d\t ", i, j, i*j);
	}
	printf("\n ");
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	chart(n);
	return 0;
}



在一个整形有序数组中查找具体的某个数:找到了就打印数字所在的下标，找不到则输出：找不到
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int key = 8;
	int mid = 0;
	int left = 0;
	int right = len - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid]>key)
		{
			right = mid - 1;
		}
		else
		{
			break;
		}
	}
	//两种情况退出①:符合循环条件,break退出(找到了)②:不符合循环条件(left>right)找不到
	if (left <= right)
	{
		printf("找到了,该数字下标是:%d\n", mid);
	}
	else
	{
		printf("没找到!\n");
	}
	return 0;
}

函数实现二分查找
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Find(int arr[], int key, int len)
{
	int mid = 0;
	int left = 0;
	int right = len - 1;
	while (left <= right)
	{
		mid = (left + right)/2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid]>key)
		{
			right = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret = Find(arr,8, len);
	if (ret == -1)
	{
		printf("没有这个数字!\n");
	}
	else
	{
		printf("找到了,这个数字的下标是:%d\n", ret);
	}
	return 0;
}



递归方式实现打印一个整数的每一位
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);

}
int main()
{
	int num = 0;
	printf("请输入一个数字:\n");
	scanf("%d", &num);
	print(num);
	return 0;
}

递归实现n的阶乘
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fac(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n*fac(n - 1);
}


int main()
{
	int num = 0;
	printf("请输入所求阶乘:\n");
	scanf("%d",&num);
	printf("%d", fac(num));
	return 0;
}



非递归实现阶乘
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int  fac(int n)
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}


int main()
{
	int num = 0;
	printf("请输入所求阶乘数:\n");
	scanf("%d", &num);
	int a = fac(num);
	printf("%d\n", a);
	return 0;
}


递归实现strlen
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int length(char *str)
{
	if (*str == '\0')
	{
		return 0;
	}	
	return 1 + length(str + 1);
}
int main()
{
	char * p= "abcde";
	printf("%d\n", length(p));
	return 0;
}


非递归实现strlen
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char *str = "abcde";
	int tmp = strlen(str);
	printf("%d\n", tmp);
	return 0;
}


/*编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
void reverse_string(char *p)
{
	int len = strlen(p);
	char tmp = *p;
	*p = *(p + len - 1);
	*(p + len - 1) = '\0';
	if (strlen(p + 1) > 1)
	{
		reverse_string(p + 1);
	}
	*(p + len - 1) = tmp;
}
int main()
{
	char str[] = "abcdef";
	printf("%s\n", str);
	reverse_string(str);
	printf("%s\n", str);
	return 0;
}


递归实现n的k次方
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fac(int n , int k)
{
	
	if (k == 0)
		return 1;
	else if (k>=1)
	{
		return n*fac(n, k - 1);
	}
}

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个整数作为底数和乘方:\n");
	scanf("%d %d", &a, &b);
	int ret = fac(a, b);
	printf("%d\n", ret);
	return 0;
}


写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int DigitSum(int n)
{
	if (n == 0)
	{
		return 0;    
	}
	else
	{
		int k = n % 10;
		return (k + DigitSum(n / 10));  
	}
	
}
int main()
{
	int num = 0;
	printf("请输入一个整数:\n");
	scanf("%d\n", &num);
	printf("%d\n", DigitSum(num));
	return 0;
}

递归实现斐波那契数列
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int num = 0;
	printf("请输入第几个斐波那契数:\n");
	scanf("%d", &num);
	printf("%d\n", fib(num));
	return 0;
}

求第n个斐波那契数
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int  fib( n);
	{
	    int f1 = 1;
		int f2 = 1;
		int f3 = 0;
		for (int i = 3; i <= n; i++)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
		printf("%d\n", f3);
	}
}


递归方式打印一个整数的每一位
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void pri(int n)
{
	if (n > 9)
	{
		pri(n / 10);
	}	
	printf("%d ", n % 10);
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	pri(num);
	return 0;
}


冒泡排序
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubbleSort(int arr[],int len)
{
	//i表示趟数
	for (int i = 0; i <= len - 1; i++)
	{
		//j表示每趟中比较几次
		for (int j = 0; j < len - 1 - i; j++)//len-1-i减少不必要比较次数
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void Show(int arr[], int len)
{
	for (int i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
	int arr1[] = { 1, 5, 4, 65, 43, 87, 54 };
	int len = sizeof(arr1) / sizeof(arr1[0]);
	Show(arr1,len);
	bubbleSort(arr1, len);
	Show(arr1,len);
	return 0;
}


将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 5, 4, 3, 2, 1 };
	
	for (; i <5; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < 5; i++)
		printf("%d ", arr1[i]);
	printf("\n");
	for (i = 0; i < 5; i++)
		printf("%d ", arr2[i]);
	printf("\n");
	return 0;
}

②
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void swap(int arr1[10], int arr2[10])
{
	for (int i = 0; i < 10; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}
//void show(int arr1[10],int arr2[10])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d %d", arr1[i], arr2[i]);
//	}
//	printf("\n");
//}

int main()
{
	int arr1[10];
	int arr2[10];
	printf("请输入1数组的值:\n");
	for (int i = 0; i < 10; ++i)
	{
		int num;
		scanf("%d", &num);
		 arr1[i] = num;
	}
	printf("请输入2数组的值:\n");
	for (int i = 0; i < 10; ++i)
	{
		int num;
		scanf("%d", &num);
		arr2[i] = num;
	}
	void swap(arr1,arr2);

	printf("交换后1数组的值:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", arr1[i]);
	}
	printf("交换后2数组的值:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", arr2[i]);
	}
	return 0;
}


创建一个整形数组1.实现函数init() 初始化数组为全0 
2.实现print()  打印数组的每个元素  
3.实现reverse()  函数完成数组元素的逆置。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void init(int arr[],int len)
{
	//初始化数组1-10
	for (int i = 0; i < len ; i++)
	{
		arr[i] = i+1;
	}
}
void pri(int arr[],int len)
{
	//打印数组每个元素
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void ling(int arr[], int len)
{
	//重新初始化数组为全0
	int i = 0;
	for (int i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
	printf("%d ", arr[i]);
	printf("\n");
}
void reverse(int arr[], int len)
{
	//数组元素逆置
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}


int main()
{
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	init(arr,len);
	pri(arr, len);
	reverse(arr, len);
	pri(arr, len);
	ling(arr, len);
	return 0;
}


写一个函数打印arr数组的内容，不使用数组下标，使用指针。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void pri(int *arr,int len)
{
	int *p = arr;
	for (int i = 0; i < len; i++)
	{
		printf("%d ", *(p+i));
	}
}

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	pri(arr, len);
	return 0;
}


求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
例如：2 + 22 + 222 + 2222 + 22222
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	int sum = 0;
	int tmp = 0;
	scanf("%d %d", &a, &n);
	for (int i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	printf("%d\n", sum);
	return 0;
}


两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同
输入例子:1999 2299     输出例子:7
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Differ(int x, int y)
{
	int a = x^y;//异或之后不同位上是1,相同位上为0
	int count = 0;
	while (a)
	{
		a = a&(a - 1);
		count++;
	}
	return count;
}
int main()
{
	int x = 1999;
	int y = 2299;
	int ret = Differ(x, y);
	printf("%d\n", ret);
	return 0;
}


给定一个数组{1,2,3,2,1},找到出现一次的数字
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int arr[5] = { 1, 2, 3, 2, 1 };
	for (int i = 0; i < 5; i++)
	{
		a = a ^ arr[i];	
	}
	printf("%d\n", a);
	return 0;
}

写一个函数返回参数二进制中 1 的个数。
①
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num = 10;
	int count = 0;//计数
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}
	printf("二进制中1的个数 = %d\n", count);
	return 0;
}
//②
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num = -1;
	int i = 0;
	int count = 0;//计数
	for (i = 0; i<32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("二进制中1的个数 = %d\n", count);
	return 0;
}


③
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	int i = 0;
	int count = 0;//计数
	while (num)
	{
		count++;
		num = num&(num - 1);
	}
	printf("二进制中1的个数 = %d\n", count);
	return 0;
}


给定一个数组{1,2,3,2,1},找到出现一次的数字
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int arr[5] = { 1, 2, 3, 2, 1 };
	for (int i = 0; i < 5; i++)
	{
		a = a ^ arr[i];	
	}
	printf("%d\n", a);
	return 0;
}


写一个函数打印arr数组的内容，不使用数组下标，使用指针。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void pri(int *arr,int len)
{
	int *p = arr;
	for (int i = 0; i < len; i++)
	{
		printf("%d ", *(p+i));
	}
}

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	pri(arr, len);
	return 0;
}


求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
例如：2 + 22 + 222 + 2222 + 22222
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	int sum = 0;
	int tmp = 0;
	scanf("%d %d", &a, &n);
	for (int i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	printf("%d\n", sum);
	return 0;


函数实现字符串逆序,要求使用指针
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
void reverse(char* str)
{
	char* left = str;//数组名代表首元素地址
	char* right = str + strlen(str) - 1;//str加数组元素个数等于最后一个元素的地址
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		++left;
		--right;
	}
}

int main()
{
	char str1[] = "woaiLiLan";
	reverse(str1);
	printf("%s\n", str1);
	return 0;
}

水仙花数(0-100000)
“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<windows.h>
void Flower()
{
	for (int i = 10; i <= 100000; i++)
	{
		int n = i;
		int num = 0;
		int sum = 0;
		while (n)//求这是个几位数
		{
			n = n / 10;
			num++;//确定次方数
		}
		n = i;
		while (n)
		{
			//pow(n,m)表示n的m次方;
			sum = sum + (int)pow(n % 10, num);//每次n%10得到的是最后一位数字;
			n = n / 10;
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
}

int main()
{
	Flower();
	system("pause");
	return 0;
}


#include <stdio.h>
int main()
{
	//int *p = NULL;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	printf("%d", arr);
	printf("\n");
	printf("%d", &arr+1);
	return 0;
}

#include<stdio.h>
int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);//POINT 
	printf("%s\n", *--*++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW

	/*char* a[] = { "work", "at", "alibaba" };
	char**pa = a;
	pa++;
	printf("%s\n", *pa);*/
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("**********猜数字*********\n");
	printf("*************************\n");
	printf("**********1.play*********\n");
	printf("**********2.quit*********\n");
	printf("*************************\n");

}
void game()
{
	srand((unsigned)time(NULL));
	int ret = rand() % 100 + 1;
	while (1)
	{
		int guess;
		printf("输入你猜的数字:\n");
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("猜小了!\n");
		}
		else if (ret < guess)
		{
			printf("猜大了!\n");
		}
		else
		{
			printf("恭喜这个b!\n");
			break;
		}
	}
}
int main()
{
	int quit = 0;
	while (!quit)
	{
		menu();
		int input;
		printf("请输入你的操作->\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("再来一把?\n");
			break;
		case 2:
			quit = 1;
			printf("退出游戏!\n");
			break;
		default:
			printf("你的输入有误!\n");
			break;
		}
	}
}

