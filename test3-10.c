#include<stdio.h>
int main()
{
	printf("请输入三个数");
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a == b && b == c)
		printf("这三个数都相等");
	else if (a == b || b == c || a == c)
		printf("有两个值相等");
	else
		printf("三个值各不相同");
	return 0;
}