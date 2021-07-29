#pragma warning (disable:4996)
#include<stdio.h>
void Triangle(int n)
{
	int data[30][30] = { 1 };
	int i = 0;
	int j = 0;
	for (i=1; i < n; i++)
	{
		data[i][0] = 1;
		for (j=1; j <= i; j++)
		{
			data[i][j] = data[i - 1][j] + data[i - 1][j - 1];
		}	
	}
	for ( i = 0; i < n; i++)
	{
		for (j=0; j <= i; j++)
		{
			printf("%d ", data[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	Triangle(20);
	return 0;
}