#include<stdio.h> //정수배열과 정수k가 주어지면 모든 원소를 k칸씩 앞으로 옮기시오.
#include<stdlib.h>
int main()
{
	int total;
	int k;
	printf("배열의 개수를 입력: ");
	scanf_s("%d", &total);	
	int temp;
	printf("k를 입력하시오: ");
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