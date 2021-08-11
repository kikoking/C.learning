 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	int i = 2;
	printf("请输入一个整数");
	scanf("%d", &a);
	while (i <= a)
	{
		printf("%d\n", i);
		i += 2;
	}
	return 0;
}