//句子逆序,单词内部不逆序
#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
//整体逆置
void nizhi(char *left,char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
//单词内部再逆置
void reverse(char *str)
{
	int len = strlen(str);
	//排除一个字母的情况
	if (len <= 1)
		return;
	//整体逆置
	nizhi(str, str + len - 1);
	//按照单词进行局部逆置
	char* cur = str;
	while (*cur)
	{
		//查找单词边界:空格  或'\0'
		char* start = cur;
		while (*cur != ' '&&*cur != '\0')
			++cur;
		//当前单词的区间[start,cur)
		//逆转单词
		nizhi(start, cur - 1);
		//查找下一个单词的区间
		//跳过空格
		while (*cur == ' ')
			++cur;
	}
}
void test()
{
	char str[999] = { 0 };
	gets(str);
	reverse(str);
	printf("%s\n", str);
}
int main()
{
	test();
	return 0;
}
