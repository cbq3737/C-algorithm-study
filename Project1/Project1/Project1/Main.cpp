//#include <stdio.h>	//����ڷκ��� �޸𸮿� ������ �Է¹����Ŀ� �� �޸𸮸� �Ҵ��ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//#include <stdlib.h>
//int main()
//{
//	int total;//����ڷκ��� �Է¹ޱ� ���Ͽ� ���� ����
//	printf("�޸��� ������ �Է�:");
//	scanf_s("%d", &total); //�ڿ�&�������� �Է¹ޱ����� ���, scanf���� �Է¹����� �ּҷ� ����
//	int* arr = (int*)malloc(total * sizeof(int)); 
//	for (int i = 0; i < total; ++i)
//	{
//		arr[i] = i + 1;
//	}
//	for (int i = 0; i < total; ++i)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n\n");
//	free(arr); 
//	
//}



#include <stdio.h>	//10���� ���ڸ� ����ϴ°�.
#include <stdlib.h>
int main()
{
	//int arr[10] = { 10 };
	int* arr = (int*)malloc(10 * sizeof(int)); //intũ���� �޸𸮸� 10���� ������ ������ش�.
	
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = 10 + i;
	}
	for (int i = 0; i < 10; ++i)
	{
		printf("arr[%d] : %d\n", i, arr[i]);
	}

	free(arr); //�޸𸮸� ����Ѵ����� �������ش�. �׷��� �Ʒ�ó�� �ٽ� �� �ѹ� �Ҵ����ټ��ִ�.

	arr = (int*)malloc(sizeof(int));
	arr[0] = 10;
	
	printf("%d\n", arr[0]);
	free(arr);

	arr = (int*)malloc(5 * sizeof(int));  //�������� �����Ͽ� 10���� 50���� �������� �Ѵ�.
	for (int i = 0; i < 5; ++i)
	{
		arr[i] = (i+1) * 10;
		printf("arr[%d]: %d\n", i, arr[i]);
	}
	free(arr);

}


//#include <stdio.h>	//10���� ���ڸ� ����ϴ°�.
//#include <stdlib.h>
//int main()
//{
//	//int arr[10] = { 10 };
//	int* arr = (int*)malloc(10*sizeof(int)); //intũ���� �޸𸮸� 10���� ������ ������ش�.
//	for (int i = 0; i < 10; ++i)
//	{
//		arr[i] = 10 + i;
//	}
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("arr[%d] : %d\n", i, arr[i]);
//	}
//
//	free(arr);
//}


//#include <stdio.h>	//10���� ���ڸ� ����ϴ°�.
//int main()
//{
//	//int arr[10] = { 10 };
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; ++i)
//	{
//		arr[i] = 10+i;
//	}
//	for (int i = 0; i < 10;++i)
//	{
//		printf("arr[%d] : %d\n", i, arr[i]);
//	}
//}



//#include <stdio.h>	//10���� ���ڸ� ����ϴ°�.
//int main()
//{
//	//int arr[10] = { 10 };
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("arr[%d] : %d\n",i, arr[i]);
//	}
//}


//#include <stdio.h>	//10���� ���ڸ� ����ϴ°�.
//int main()
//{
//	int arr[10] = {10};
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}


//#include <stdio.h>	//10���� ���ڸ� ����ϴ°�.
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}


//#include <stdio.h>	//10���� ���ڸ� ����ϴ°�.
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n", arr[0]);
//	printf("%d\n", arr[1]);
//	printf("%d\n", arr[2]);
//	printf("%d\n", arr[3]);
//	printf("%d\n", arr[4]);
//	printf("%d\n", arr[5]);
//	printf("%d\n", arr[6]);
//	printf("%d\n", arr[7]);
//	printf("%d\n", arr[8]);
//	printf("%d\n", arr[9]);
//}


//#include <stdio.h>
//
//int main()
//{
//int n = 10;
//printf("%d\n", n);
//}