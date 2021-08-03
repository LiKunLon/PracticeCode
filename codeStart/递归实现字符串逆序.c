//递归实现字符串逆序
#include<stdio.h>
char reverse_string(char *str){
	if (*str == '\0'){
		return;
	}
	reverse_string(str + 1);
	printf("%c", *str);
}
int main()
{
	char str[] = "abc";
	reverse_string(str);
	printf("\n");
	return 0;
}