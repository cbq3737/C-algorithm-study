//#include <stdio.h> //별 출력 알고리즘 
//#include <stdlib.h> //아래와 비슷하지만 다른 별 출력 코드, 공백있는 별 출력
//void PrintStarNSpace(int n,int i)
//{
//	for (int j = 0; j < i; ++j) //공백출력 
//	{
//		printf("%c", ' ');
//	}
//
//	for (int j = 0; j < n - i; ++j) //별출력
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



//#include <stdio.h> //별 출력 알고리즘 
//#include <stdlib.h> //아래와 비슷하지만 다른 별 출력 코드, 공백있는 별 출력
//int main()
//{
//	int n = 5;
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < i; ++j) //공백출력 
//		{
//			printf("%c", ' ');
//		}
//
//		for (int j = 0; j < n-i; ++j) //별출력
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h> //별 출력 알고리즘, 역 직각삼각형 
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
//		for (int j = 0; j < n-i; ++j) //아래와 같은 코드, 이렇게도 짜볼 수 있다.
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h> //별 출력 알고리즘 
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
//		PrintStarLine(n-i); //아래와 같지만 다르게 짠 코드 
//	}
//}


//#include <stdio.h> //별 출력 알고리즘 , 역 직각삼각형
//#include <stdlib.h> //아래와 다른 별 출력 
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
//		PrintStarLine(w--); //한번씩 돌때마다 감소한다. 
//	}
//}


//#include <stdio.h> //별 출력 알고리즘 
//#include <stdlib.h>
//void PrintStarLine(int n) //매개적인 역할을 하는 변수 = 매개변수
//{
//	for (int j = 0; j < n; ++j)
//	{
//		printf("%c", '*');
//	}
//	printf("\n");
//}
//int main() //이러한 방식으로 scanf를이용하여 사용자로부터 개수를 입력받아 출력할 수 도 있다.
//{
//	int n = 5;
//	for (int i = 0; i < n; ++i)
//	{
//		PrintStarLine(n); //몇개를 출력할건지 넘겨줘야한다. 그 넘어가는애를 함수의 인수라고 한다.
//	}
//}


//#include <stdio.h> //별 출력 알고리즘 
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


//#include <stdio.h> //별 출력 알고리즘 
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


//#include <stdio.h> //별 출력 알고리즘 
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


//#include <stdio.h> //별 출력 알고리즘 
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



//#include <stdio.h> //row,col갯수가 바뀌면 유동적으로 메모리의 개수가 바뀔 수 있다.
//#include <stdlib.h>
//int main()
//{
//	int row = 5, col = 10;
//	printf("n차원 열의 개수 입력: ");		//유동적으로 바뀌면 좋은 장점
//	scanf_s("%d", &row);
//	printf("n차원 행의 개수 입력: ");
//	scanf_s("%d", &col);
//
//
//	int** arr = (int**)malloc(sizeof(int*)*row); //얘가 큰 힙하나의 메모리를 만드는것이고
//	for (int i = 0; i < row; ++i)
//	{
//		arr[i] = (int*)malloc(sizeof(int)*col); //얘가 col3개짜리를 만드는작업이다.
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


//#include <stdio.h> //row,col갯수가 바뀌면 유동적으로 메모리의 개수가 바뀔 수 있다.
//#include <stdlib.h>
//int main()
//{
//	int row = 5, col = 10; //굳이 안정해줘도 됨.
//	int** arr = NULL;
//	printf("2차원 행의 개수 입력: ");		//유동적으로 바뀌면 좋은 장점
//	scanf_s("%d", &row);
//	printf("2차원 열의 개수 입력: ");
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



//#include <stdio.h> //row,col갯수가 바뀌면 유동적으로 메모리의 개수가 바뀔 수 있다.
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
//	int row=3 , col = 3; //고정메모리로 사용하게 되면 힙이 아니라 스택에 만들어짐.//배열에는 상수만 올 수 있다.
//	int** arr = NULL; //포인터변수를 만듦.조금전에 사용했던 스택메모리를 내가 원할때 생성해서 사용할수있도록 힙메모리로 만드는것. 
//	//유동적인 메모리를 만들기위해서 heap메모리가 되어야한다. 
//	arr = (int**)malloc(sizeof(int*)*row); //행의 갯수만큼 생성
//	for (int i = 0; i < row; ++i)
//	{
//		arr[i] = (int*)malloc(sizeof(int)*col);//원소의 갯수는 col의 갯수만큼. 하나의 칸이 1행3열칸을 가르킴
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
//	int arr[3][3] = { 0 }; //코드를 통해서 수를 넣고싶다면
//	int* p = (int*)arr;//포인터 변수 사용
//
//	for (int i = 0; i < 9; ++i)
//		p[i] = (i + 1) * 10;//이코드는 참조만 할 수 있다면 아래와 마찬가지로 수를 쉽게 넣을수있다는걸 보여줌. 
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
//	int arr[3][3]= {0}; //코드를 통해서 수를 넣고싶다면
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
//	for (int i = 0; i < 3; ++i) //행이 하나가 늘었기때문에 i만 1만 더 늘려주면 된다.
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h> ////////이렇게 하나의 for문으로 묶어줘도 결과치는 같다.
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



//#include <stdio.h> /////////이렇게 for문으로 짜도 아래와 마찬가지이다.
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
//	for (int j = 0; j < 3; ++j) //이렇게 코드를 짜도 아래와 같다.
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


//#include <stdio.h> /////////2x3의 2차원배열을 메모리상의 데이터로 만들어냄. 책 1,2장 내용
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
//	int arr[5];	//바로 윗줄과 같은 코드, 5칸의 데이터 공간을 만듦, 아래의 코드는 힙메모리에 공간을 만들지만 이 코드는 스택메모리에 공간을 만듦. 
//					//힙메모리는 동영상,이미지등 큰데이터를 저장하는 공간으로 컴퓨터의 메모리가 허용하는 한계치까지 만들어낼수있지만 stack은 작은 메모리이다.heap메모리가 그래서 나중에 free로 만들었던 공간을 지워주는것.
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



//#include <stdio.h> /////////아래와 같은 출력이지만 등차수열을 이용하여 만든코드
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


//#include <stdio.h> ////////////11,22,33..55까지 출력하는 코드
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