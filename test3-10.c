#include<stdio.h>
int main()
{
	printf("������������");
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a == b && b == c)
		printf("�������������");
	else if (a == b || b == c || a == c)
		printf("������ֵ���");
	else
		printf("����ֵ������ͬ");
	return 0;
}