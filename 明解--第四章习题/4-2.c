#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int sum = 0, a = 0, b = 0,c=0;
	printf("��������������");
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
	printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d", b, a, sum);
	return 0;
}