#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int month;
	printf("�������·�");
	scanf("%d", &month);
	switch(month)
	{
		case 12: 
		case 1: 
		case 2: printf("%d�Ƕ���", month);  break;
		case 3:
		case 4: 
		case 5: printf("%d�Ǵ���", month);  break;
		case 6: 
		case 7: 
		case 8: printf("%d���ļ�", month);  break;
		case 9:
		case 10:
		case 11: printf("%d���＾",month);  break;
		default: printf("%�²�����");
	}
	return 0;
}