#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//�ǳ��򵥵�һ�����������ǵ�һ�黹��д������
int main()
{
    int a;
    int b;
    int r = 1;//init
    scanf("%d %d", &a, &b);//��������Ҫ�����Լ����������
    printf("�������������Լ��");
    while(r != 0)
    {
        r = a % b;
        a = b;
        b = r;
    };
    printf("���������Ĺ�Լ����%d\n", a);
	return 0;
    
}