#include<stdio.h>
int main()
{
	printf("请输入两个整数：");
	int a, b;
	scanf("%d%d", &a, &b);
	if (a == b)
		printf("a=b");
	else if (a > b)
		printf("a>b");
	else
		printf("a<b");
	return 0;
}