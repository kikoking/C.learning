#include<stdio.h>
int main()
{
    //����һ������--�������10��
    int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
    char arr2[5] = { 'a',98 };//Ĭ�ϸ�3��\0  �ַ���98�൱��'b'
    char arr5[5] = { 'a','b' };//arr2��arr5��ͬ
    char arr3[5] = "ab";//���ab\0��,Ĭ�ϸ���2��\0
    char arr4[] = "abcdef";//�ַ�������\0,������7���ַ�
    printf("%d\n", sizeof(arr4));//7
    //sizeof ����arr4��ռ�ռ�Ĵ�С
    //7��Ԫ��(��ÿ��Ԫ����char 7*1=7
    printf("%d\n", strlen(arr4));//6
    //strlen���ַ����ĳ���
    //[a b c d e f \0]����\0��ֹͣ��stelen�����'\0'֮ǰ���ַ�����
    //int n=5;
    //int arr3[n];//error,[Ҫ������һ���������ʽ]
    return 0;
}