//#include <stdio.h> //�� ��� �˰��� 
//#include <stdlib.h> //�Ʒ��� ��������� �ٸ� �� ��� �ڵ�, �����ִ� �� ���
//void PrintStarNSpace(int n,int i)
//{
//	for (int j = 0; j < i; ++j) //������� 
//	{
//		printf("%c", ' ');
//	}
//
//	for (int j = 0; j < n - i; ++j) //�����
//	{
//		printf("%c", '*');
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 5;
//	for (int i = 0; i < n; ++i)
//	{
//		PrintStarNSpace(n, i);
//	}
//}



//#include <stdio.h> //�� ��� �˰��� 
//#include <stdlib.h> //�Ʒ��� ��������� �ٸ� �� ��� �ڵ�, �����ִ� �� ���
//int main()
//{
//	int n = 5;
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < i; ++j) //������� 
//		{
//			printf("%c", ' ');
//		}
//
//		for (int j = 0; j < n-i; ++j) //�����
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h> //�� ��� �˰���, �� �����ﰢ�� 
//#include <stdlib.h>
//void PrintStarLine(int n)
//{
//	
//}
//int main()
//{
//	int n = 7;
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < n-i; ++j) //�Ʒ��� ���� �ڵ�, �̷��Ե� ¥�� �� �ִ�.
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h> //�� ��� �˰��� 
//#include <stdlib.h>
//void PrintStarLine(int n)
//{
//	for (int j = 0; j < n; ++j)
//	{
//		printf("%c", '*');
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 7;
//	for (int i = 0; i < n; ++i)
//	{
//		PrintStarLine(n-i); //�Ʒ��� ������ �ٸ��� § �ڵ� 
//	}
//}


//#include <stdio.h> //�� ��� �˰��� , �� �����ﰢ��
//#include <stdlib.h> //�Ʒ��� �ٸ� �� ��� 
//void PrintStarLine(int n)
//{
//	for (int j = 0; j < n; ++j)
//	{
//		printf("%c", '*');
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 7;
//	int w = n;
//	for (int i = 0; i < n; ++i)
//	{
//		PrintStarLine(w--); //�ѹ��� �������� �����Ѵ�. 
//	}
//}


//#include <stdio.h> //�� ��� �˰��� 
//#include <stdlib.h>
//void PrintStarLine(int n) //�Ű����� ������ �ϴ� ���� = �Ű�����
//{
//	for (int j = 0; j < n; ++j)
//	{
//		printf("%c", '*');
//	}
//	printf("\n");
//}
//int main() //�̷��� ������� scanf���̿��Ͽ� ����ڷκ��� ������ �Է¹޾� ����� �� �� �ִ�.
//{
//	int n = 5;
//	for (int i = 0; i < n; ++i)
//	{
//		PrintStarLine(n); //��� ����Ұ��� �Ѱ�����Ѵ�. �� �Ѿ�¾ָ� �Լ��� �μ���� �Ѵ�.
//	}
//}


//#include <stdio.h> //�� ��� �˰��� 
//#include <stdlib.h>
//void PrintStarLine()
//{
//	for (int j = 0; j < 3; ++j)
//	{
//		printf("%c", '*');
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 3;
//	for (int i = 0; i < n; ++i)
//	{
//		PrintStarLine();
//	}
//}


//#include <stdio.h> //�� ��� �˰��� 
//#include <stdlib.h>
//int main()
//{
//	int n = 3;
//	for (int  i= 0; i < n; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h> //�� ��� �˰��� 
//#include <stdlib.h>
//int main()
//{
//	int n = 3;
//	for (int k = 0; k < n; ++k)
//	{
//		for (int i = 0; i < n; ++i)
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h> //�� ��� �˰��� 
//#include <stdlib.h>
//int main()
//{
//	int n = 3;
//	for (int i = 0; i < n; ++i)
//	{
//		printf("%c", '*');
//	}
//	printf("\n");
//}



//#include <stdio.h> //row,col������ �ٲ�� ���������� �޸��� ������ �ٲ� �� �ִ�.
//#include <stdlib.h>
//int main()
//{
//	int row = 5, col = 10;
//	printf("n���� ���� ���� �Է�: ");		//���������� �ٲ�� ���� ����
//	scanf_s("%d", &row);
//	printf("n���� ���� ���� �Է�: ");
//	scanf_s("%d", &col);
//
//
//	int** arr = (int**)malloc(sizeof(int*)*row); //�갡 ū ���ϳ��� �޸𸮸� ����°��̰�
//	for (int i = 0; i < row; ++i)
//	{
//		arr[i] = (int*)malloc(sizeof(int)*col); //�갡 col3��¥���� ������۾��̴�.
//	}
//	///////////////////////////////////////////
//
//	for (int i = 0; i < row; ++i)
//		for (int j = 0; j < col; ++j)
//		{
//			arr[i][j] = (i * col + (j + 1)) * 10;
//		}
//
//	for (int i = 0; i < row; ++i)
//	{
//		for (int j = 0; j < col; ++j)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < row; ++i)
//	{
//		free(arr[i]);
//	}
//	free(arr);
//}


//#include <stdio.h> //row,col������ �ٲ�� ���������� �޸��� ������ �ٲ� �� �ִ�.
//#include <stdlib.h>
//int main()
//{
//	int row = 5, col = 10; //���� �������൵ ��.
//	int** arr = NULL;
//	printf("2���� ���� ���� �Է�: ");		//���������� �ٲ�� ���� ����
//	scanf_s("%d", &row);
//	printf("2���� ���� ���� �Է�: ");
//	scanf_s("%d", &col);
//
//
//	arr = (int**)malloc(sizeof(int*)*row);
//	for (int i = 0; i < row; ++i)
//	{
//		arr[i] = (int*)malloc(sizeof(int)*col);
//	}
//	///////////////////////////////////////////
//
//	for (int i = 0; i < row; ++i)
//		for (int j = 0; j < col; ++j)
//		{
//			arr[i][j] = (i * col + (j + 1)) * 10;
//		}
//
//	for (int i = 0; i < row; ++i)
//	{
//		for (int j = 0; j < col; ++j)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < row; ++i)
//	{
//		free(arr[i]);
//	}
//	free(arr);
//}



//#include <stdio.h> //row,col������ �ٲ�� ���������� �޸��� ������ �ٲ� �� �ִ�.
//#include <stdlib.h>
//int main()
//{
//	int row = 5, col = 10; 
//	int** arr = NULL; 
//	
//	arr = (int**)malloc(sizeof(int*)*row); 
//	for (int i = 0; i < row; ++i)
//	{
//		arr[i] = (int*)malloc(sizeof(int)*col);
//	}
//	///////////////////////////////////////////
//
//	for (int i = 0; i < row; ++i)
//		for (int j = 0; j < col; ++j)
//		{
//			arr[i][j] = (i * col + (j + 1)) * 10;
//		}
//
//	for (int i = 0; i < row; ++i)
//	{
//		for (int j = 0; j < col; ++j)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < row; ++i)
//	{
//		free(arr[i]);
//	}
//	free(arr);
//}



//#include <stdio.h> 
//#include <stdlib.h>
//int main()
//{
//	int row=3 , col = 3; //�����޸𸮷� ����ϰ� �Ǹ� ���� �ƴ϶� ���ÿ� �������.//�迭���� ����� �� �� �ִ�.
//	int** arr = NULL; //�����ͺ����� ����.�������� ����ߴ� ���ø޸𸮸� ���� ���Ҷ� �����ؼ� ����Ҽ��ֵ��� ���޸𸮷� ����°�. 
//	//�������� �޸𸮸� ��������ؼ� heap�޸𸮰� �Ǿ���Ѵ�. 
//	arr = (int**)malloc(sizeof(int*)*row); //���� ������ŭ ����
//	for (int i = 0; i < row; ++i)
//	{
//		arr[i] = (int*)malloc(sizeof(int)*col);//������ ������ col�� ������ŭ. �ϳ��� ĭ�� 1��3��ĭ�� ����Ŵ
//	}
//	///////////////////////////////////////////
//
//	for (int i = 0; i < 3; ++i)
//		for (int j = 0; j < 3; ++j)
//		{
//			arr[i][j] = (i*3+(j+1)) * 10;
//		}
//		
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < row; ++i)
//	{
//		free(arr[i]);
//	}		
//	free(arr);
//}


//http://tcpschool.com/c/c_pointer_intro
//#include <stdio.h> 
//#include <stdlib.h>
//int main()
//{
//	int arr[3][3] = { 0 }; //�ڵ带 ���ؼ� ���� �ְ�ʹٸ�
//	int* p = (int*)arr;//������ ���� ���
//
//	for (int i = 0; i < 9; ++i)
//		p[i] = (i + 1) * 10;//���ڵ�� ������ �� �� �ִٸ� �Ʒ��� ���������� ���� ���� �������ִٴ°� ������. 
//
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}



//#include <stdio.h> 
//#include <stdlib.h>
//int main()
//{
//	int arr[3][3]= {0}; //�ڵ带 ���ؼ� ���� �ְ�ʹٸ�
//
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			arr[i][j] = i * 3 + (j + 1);
//		}
//	}
//
//	for (int i = 0; i < 3; ++i) 
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h> 
//#include <stdlib.h>
//int main()
//{
//	int arr[3][3] = { 10,20,30,40,50,60,70,80,90 };
//
//	for (int i = 0; i < 3; ++i) //���� �ϳ��� �þ��⶧���� i�� 1�� �� �÷��ָ� �ȴ�.
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h> ////////�̷��� �ϳ��� for������ �����൵ ���ġ�� ����.
//#include <stdlib.h>
//int main()
//{
//	int arr[2][3] = { 10,20,30,40,50,60 };
//
//	for (int i = 0; i < 2; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}



//#include <stdio.h> /////////�̷��� for������ ¥�� �Ʒ��� ���������̴�.
//#include <stdlib.h>
//int main()
//{
//	int arr[2][3] = { 10,20,30,40,50,60 };
//
//	for (int j = 0; j < 3; ++j) 
//	{
//		printf("%d ", arr[0][j]);
//	}
//	printf("\n");
//	for (int j = 0; j < 3; ++j) 
//	{
//		printf("%d ", arr[1][j]);
//	}
//}



//#include <stdio.h> /////////
//#include <stdlib.h>
//int main()
//{
//	int arr[2][3] = { 10,20,30,40,50,60 };
//
//	for (int j = 0; j < 3; ++j) //�̷��� �ڵ带 ¥�� �Ʒ��� ����.
//	{
//		printf("%d ", arr[0][j]);
//	}
//	printf("\n");
//	printf("%d,%d,%d\n", arr[1][0], arr[1][1], arr[1][2]);
//}



//#include <stdio.h> /////////
//#include <stdlib.h>
//int main()
//{
//	int arr[2][3] = { 10,20,30,40,50,60 };
//
//	printf("%d,%d,%d\n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%d,%d,%d\n", arr[1][0], arr[1][1], arr[1][2]);
//}


//#include <stdio.h> /////////2x3�� 2�����迭�� �޸𸮻��� �����ͷ� ����. å 1,2�� ����
//#include <stdlib.h>
//int main()
//{
//	int arr[2][3] = { 0 };
//
//	printf("%d,%d,%d\n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%d,%d,%d\n", arr[1][0], arr[1][1], arr[1][2]);
//}



//#include <stdio.h> /////////
//#include <stdlib.h>
//int main()
//{
//	//int* arr = (int*)malloc(sizeof(int) * 5);
//	int arr[5];	//�ٷ� ���ٰ� ���� �ڵ�, 5ĭ�� ������ ������ ����, �Ʒ��� �ڵ�� ���޸𸮿� ������ �������� �� �ڵ�� ���ø޸𸮿� ������ ����. 
//					//���޸𸮴� ������,�̹����� ū�����͸� �����ϴ� �������� ��ǻ���� �޸𸮰� ����ϴ� �Ѱ�ġ���� ������������ stack�� ���� �޸��̴�.heap�޸𸮰� �׷��� ���߿� free�� ������� ������ �����ִ°�.
//	arr[0] = 11;
//
//	for (int i = 1; i < 5; ++i)
//	{
//		arr[i] = 11 + arr[i - 1];
//	}
//
//	for (int i = 0; i < 5; ++i)
//	{
//		printf("arr[%d]: %d\n", i, arr[i]);
//	}
//
//	free(arr);
//}



//#include <stdio.h> /////////�Ʒ��� ���� ��������� ���������� �̿��Ͽ� �����ڵ�
//#include <stdlib.h>
//int main()
//{
//	int* arr = (int*)malloc(sizeof(int) * 5);
//
//	arr[0] = 11;
//	for (int i = 1; i < 5; ++i)
//	{
//		arr[i] = 11+arr[i-1];
//	}
//
//	for (int i = 0; i < 5; ++i)
//	{
//		printf("arr[%d]: %d\n", i, arr[i]);
//	}
//
//	free(arr);
//}


//#include <stdio.h> ////////////11,22,33..55���� ����ϴ� �ڵ�
//#include <stdlib.h>
//int main()
//{
//	int* arr = (int*)malloc(sizeof(int) * 5);
//	
//	for (int i = 0; i < 5; ++i)
//	{
//		arr[i] = (i + 1) * 11; 
//	}
//
//	for (int i = 0; i < 5; ++i)
//	{
//		printf("arr[%d]: %d\n", i, arr[i]);
//	}
//	
//	free(arr);
//}