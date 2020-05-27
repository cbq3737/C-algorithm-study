//#include <stdio.h>	//사용자로부터 메모리에 갯수를 입력받은후에 그 메모리를 할당하고 출력하는 프로그램을 작성하시오.
//#include <stdlib.h>
//int main()
//{
//	int total;//사용자로부터 입력받기 위하여 만든 변수
//	printf("메모리의 개수를 입력:");
//	scanf_s("%d", &total); //뒤에&은정수를 입력받기위한 약속, scanf에서 입력받을땐 주소로 받음
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



#include <stdio.h>	//10개의 숫자를 출력하는것.
#include <stdlib.h>
int main()
{
	//int arr[10] = { 10 };
	int* arr = (int*)malloc(10 * sizeof(int)); //int크기의 메모리를 10개의 공간을 만들어준다.
	
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = 10 + i;
	}
	for (int i = 0; i < 10; ++i)
	{
		printf("arr[%d] : %d\n", i, arr[i]);
	}

	free(arr); //메모리를 사용한다음에 제거해준다. 그래서 아래처럼 다시 또 한번 할당해줄수있다.

	arr = (int*)malloc(sizeof(int));
	arr[0] = 10;
	
	printf("%d\n", arr[0]);
	free(arr);

	arr = (int*)malloc(5 * sizeof(int));  //위에것을 응용하여 10부터 50까지 나오도록 한다.
	for (int i = 0; i < 5; ++i)
	{
		arr[i] = (i+1) * 10;
		printf("arr[%d]: %d\n", i, arr[i]);
	}
	free(arr);

}


//#include <stdio.h>	//10개의 숫자를 출력하는것.
//#include <stdlib.h>
//int main()
//{
//	//int arr[10] = { 10 };
//	int* arr = (int*)malloc(10*sizeof(int)); //int크기의 메모리를 10개의 공간을 만들어준다.
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


//#include <stdio.h>	//10개의 숫자를 출력하는것.
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



//#include <stdio.h>	//10개의 숫자를 출력하는것.
//int main()
//{
//	//int arr[10] = { 10 };
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("arr[%d] : %d\n",i, arr[i]);
//	}
//}


//#include <stdio.h>	//10개의 숫자를 출력하는것.
//int main()
//{
//	int arr[10] = {10};
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}


//#include <stdio.h>	//10개의 숫자를 출력하는것.
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}


//#include <stdio.h>	//10개의 숫자를 출력하는것.
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