//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
#pragma warning(disable:4996)
#include<stdio.h>
int Juice(int num)
{
	int pop = num;
	int empty = num;
	while (empty > 1)
	{
		pop = pop + empty / 2;
		empty = empty / 2 + empty % 2;
	}
	return pop;
}

int main()
{
	int num = 0;
	printf("请输入你有多少钱:\n");
	scanf("%d", &num);
	printf("你能喝到%d瓶汽水!\n", Juice(num));
	return 0;
}