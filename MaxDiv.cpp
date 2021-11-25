#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//非常简单的一个函数，但是第一遍还是写不出来
int main()
{
    int a;
    int b;
    int r = 1;//init
    scanf("%d %d", &a, &b);//键入两个要求最大公约数的两个数
    printf("求两个数的最大公约数");
    while(r != 0)
    {
        r = a % b;
        a = b;
        b = r;
    };
    printf("这两个数的公约数是%d\n", a);
	return 0;
    
}