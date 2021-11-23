//21.11.23 
// BubbleSort代码，原本代码已经实现，但由于不会使用scanf函数输入数组，导致无法运行成功，只针对于整形可用，
// 浮点型后续加强版本可以考虑使用qsort函数进行进一步调用升级
//BubbleSort
#include <stdio.h>
//进行函数封装,这是一种声明，接下来将冒泡函数进行升级，可能无法做到，但是应该可以啊，毕竟长度是5
//
void Bubblesort(int arr[]);

int main() {
	//将它降序输出
	printf("请输入你想冒泡排序的数组，只能是整形");
	int arr[5];
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);//如何用scanf检索输入一个数组？

	}

	printf("输入的数组是:\n");
	for (int i=0;i<len-1;i++)
	{
		printf("%d", arr[i]);
	}
	//降序输出
	printf("原本的数组：");
//原本的输出，就是简单的遍历
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	
		if (i == len - 1)
		{
			printf("%d\n", arr[i]);
		}
	}


	printf("=========================\n");
	printf("冒泡排序后的数组为：");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	//printf("HelloWorld");
	return 0;
}

void Bubblesort(int arr[])
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	int len = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (arr[i] < arr[j])
			{
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}

}