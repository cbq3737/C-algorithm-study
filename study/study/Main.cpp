#include<stdio.h> //�����迭�� ����k�� �־����� ��� ���Ҹ� kĭ�� ������ �ű�ÿ�.
#include<stdlib.h>
int main()
{
	int total;
	int k;
	printf("�迭�� ������ �Է�: ");
	scanf_s("%d", &total);	
	int temp;
	printf("k�� �Է��Ͻÿ�: ");
	int* arr = (int*)malloc(sizeof(int)*total);
	scanf_s("%d", &k);
	
		for (int i = 0; i < total; ++i)
		{
			arr[i] =i;
			printf("arr[%d]:%d\n\n", i, arr[i]);
		}
		for (int i = 0; i < k; ++i)
		{
			temp = arr[0];
			for (int j = 0; j < total-1; ++j)
			{
				arr[j] = arr[j + 1];
			}
			arr[total-1] = temp;
		}
		for (int i = 0; i < total; i++)
		{
			printf("arr[%d]:%d\n", i, arr[i]);
		}
		
	free(arr);
}