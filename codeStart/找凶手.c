//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话

#pragma warning(disable:4996)
#include<stdio.h>
void Find()
{
	char killer = "A";
	for (; killer <= 'D'; killer++)
	{
		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3))
		{
			printf("凶手就是%c!\n", killer);
		}
	}
}
int main()
{
	Find();
	return 0;
}