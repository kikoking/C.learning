#include<stdio.h>
int main()
{
    //创建一个数组--存放整型10个
    int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
    char arr2[5] = { 'a',98 };//默认给3个\0  字符里98相当于'b'
    char arr5[5] = { 'a','b' };//arr2与arr5相同
    char arr3[5] = "ab";//这里“ab\0”,默认给了2个\0
    char arr4[] = "abcdef";//字符串包含\0,这里有7个字符
    printf("%d\n", sizeof(arr4));//7
    //sizeof 计算arr4所占空间的大小
    //7个元素(，每个元素是char 7*1=7
    printf("%d\n", strlen(arr4));//6
    //strlen求字符串的长度
    //[a b c d e f \0]数到\0就停止，stelen求的是'\0'之前的字符个数
    //int n=5;
    //int arr3[n];//error,[要求输入一个常量表达式]
    return 0;
}