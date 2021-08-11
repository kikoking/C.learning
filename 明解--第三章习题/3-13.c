#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int month;
	printf("请输入月份");
	scanf("%d", &month);
	switch(month)
	{
		case 12: 
		case 1: 
		case 2: printf("%d是冬季", month);  break;
		case 3:
		case 4: 
		case 5: printf("%d是春季", month);  break;
		case 6: 
		case 7: 
		case 8: printf("%d是夏季", month);  break;
		case 9:
		case 10:
		case 11: printf("%d是秋季",month);  break;
		default: printf("%月不存在");
	}
	return 0;
}