//21.11.23 
// BubbleSort���룬ԭ�������Ѿ�ʵ�֣������ڲ���ʹ��scanf�����������飬�����޷����гɹ���ֻ��������ο��ã�
// �����ͺ�����ǿ�汾���Կ���ʹ��qsort�������н�һ����������
//BubbleSort
#include <stdio.h>
//���к�����װ,����һ����������������ð�ݺ������������������޷�����������Ӧ�ÿ��԰����Ͼ�������5
//
void Bubblesort(int arr[]);

int main() {
	//�����������
	printf("����������ð����������飬ֻ��������");
	int arr[5];
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);//�����scanf��������һ�����飿

	}

	printf("�����������:\n");
	for (int i=0;i<len-1;i++)
	{
		printf("%d", arr[i]);
	}
	//�������
	printf("ԭ�������飺");
//ԭ������������Ǽ򵥵ı���
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	
		if (i == len - 1)
		{
			printf("%d\n", arr[i]);
		}
	}


	printf("=========================\n");
	printf("ð������������Ϊ��");
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