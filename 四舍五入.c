#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	//c����ʵ����������
	float num = 12.646;
	printf("%f\n", num);//12.340000
	printf("%.0f\n", num);//12.340000,��������С��������ʵ����������
	printf("%.2f\n", num);//12.65,��Ȼ����ʵ����������
	//�����ǵ�һ�ַ�ʽ
	float num2 = 12.6;
	printf("%d\n", (int)num2);//����нض�
	//���ַ�ʽ���У���������һ�ַ�ʽ���д���
	float val;
	scanf("%f", &val);
	int com = 0;
	com = val;
	//��������5С
	if (com + 1 <= val + 0.5) {
		printf("%d", com + 1);
	}
	else {
		printf("%d", com);
	}


	printf("HelloWorld!");

	return 0;
}