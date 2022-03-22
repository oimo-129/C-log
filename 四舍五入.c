#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	//c语言实现四舍五入
	float num = 12.646;
	printf("%f\n", num);//12.340000
	printf("%.0f\n", num);//12.340000,不保留整小数，可以实现四舍五入
	printf("%.2f\n", num);//12.65,依然可有实现四舍五入
	//上面是第一种方式
	float num2 = 12.6;
	printf("%d\n", (int)num2);//会进行截断
	//这种方式不行，按照另外一种方式进行处理
	float val;
	scanf("%f", &val);
	int com = 0;
	com = val;
	//如果后面比5小
	if (com + 1 <= val + 0.5) {
		printf("%d", com + 1);
	}
	else {
		printf("%d", com);
	}


	printf("HelloWorld!");

	return 0;
}