#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int sum = 0, a = 0, b = 0,c=0;
	printf("请输入两个整数");
	scanf("%d%d", &a, &b);
	if (a <= b)
	{
		c = b;
		b = a;
		a = c;
	}
	do {
		sum += b;
		b++;
	} while (b <= a);
	printf("大于等于%d小于等于%d的所有整数的和是%d", b, a, sum);
	return 0;
}