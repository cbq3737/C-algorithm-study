#include<stdio.h>
int main()
{
	float a = 123456789.0e-5f;
	printf("%f %e", a,a);
}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int list[] = { 60,50,80,40,30,55,90,25,65,77 }; 
//	int heapSize = 0;
//	PrintList(list, 10);
//
//	make_heap(list, list + 10);
//	PrintList(list, 10); 
//	heapSize = 10;
//	//sort_heap(list, list + 10);
//	//pop_heap(list, list + heapSize);
//	//--heapSize;
//	//	PrintList(list, 10); //heapsort에서 삭제를 하려면 원소가 10개라면 10번해주면 되는것이다.이렇게 하나만 실행하면 가장큰 수인 90이 젤 마지막으로 빠진걸 알수있다.
//	pop_heap(list, list + heapSize);
//	--heapSize; 
//	pop_heap(list, list + heapSize); //첫번째인자는 시작주소,두번째인자는 끝주소
//	--heapSize;//pop_heap은 해주는순간 root와 맨뒤자식 함수와 바꿔주는데 여기서 heapsize를 안뺴주면 사이즈 그대로 여서 다시 맨뒤에 잇던 노드와 다시 바뀌게된다.
//	pop_heap(list, list + heapSize);
//	--heapSize;
//	PrintList(list, 10); 
//}




//#include <stdio.h>//힙 sort,여기서 힙은 메모리힙이 아닌 자료구조 힙을 의미하며 자료구조 2진완전트리를 의미하는데 힙sort는 자료구조 힙을 기반으로 만들어진다.
//#include <algorithm>
//using namespace std;//make_heap때문에 적어줌.
//void PrintList(int list[], int size)//왼쪽 노드부터 꽉찬 2진트리여야지 완전 2진트리라고 부르는데 거기서 동작하는게 힙이다.자료구조를 표시할땐 노드방식과배열방식이있는데 heap sort는 속도를 위해 배열방식으로 나타낸다.
////배열방식은 그냥 우리가 알고잇는 배열그림이라고 생각하면됨->노드자료구조를 배열안 인덱스에 담는것이다.그래서 그 담아진 모습도 완전 이진트리라고 부른다.그럴때 배열에 1부터 채워진다고 생각했을때(A~E) 그걸 부모가 i라 치면 자식은 i*2,i*2+1로 볼수있다. 그게 배열에서도 볼 수 있기에 2진트리라 말할수있는것이다.
////만일 그 노드안에 어떤 값이 들어가있다고 쳣을때, 최소힙은 자식이 부모보다 더 큰값을 갖는것, 최대힙은 부모가 자식보다 무조건 더 큰 값을 말한다.힙에서 연산은 다른거 안받고 입력(노드에 추가),출력(노드에 삭제)만 받는다.스택은 가장 끝에있는애를 지우지만 힙의 삭제는 root를 삭제한다. 최대힙에서 root는 가장큰놈이기에 큰값이 빠지고,최대힙이 망가지므로 내부적으로 가장 맨아래 노드를 root로 올리고 그다음에 그 빠졌었던 root의 아들끼리 정렬을한뒤 다시 또 내부적으로 비교하여 바꾼다.그렇게 되버리면 최대힙은 유지하게 되면서 원소가 하나사라졋으므로 이게 힙의 삭제이다.그래서 최대 힙의 삭제는 가장큰 원소가 나온다.
////추가는 어떻게하냐?만일 기존에잇었던 그 노드에 가장큰값을 넣는다고 했을때,우선적으론 맨아래 아무곳에나 붙혀둔뒤에 각각 위에 부모노드들과 비교하며 올라간다.그러다가 그 자리에 올바르게 올라갔으면 그제서야 추가가 완료가된것.
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int list[] = { 60,50,80,40,30,55,90,25,65,77 }; //현재상태는힙구조가 아니므로 힙구조로 만들어준다.
//	int heapSize = 0;
//	PrintList(list, 10);
//
//	make_heap(list, list + 10);//최대 힙
//	PrintList(list, 10); //힙 구조
//	sort_heap(list, list + 10);
//	PrintList(list, 10); //오름차순
//}



//#include <stdio.h>//정렬
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}
//void Swap(int& a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//void Sort(int list[], int size) //다른 sort방식,버블sort방식?보글보글올라가는방식으로 두개씩 비교해가며 가장큰수를 먼저 정렬해가며 자리를 끝에 잡아주고 반복하는 방식
//{
//	for (int i = 0; i < size-1 ; ++i)
//	{
//		for (int j = 0; j < size - 1 - i; ++j)
//		{
//			if (list[j] > list[j + 1])
//			{
//				Swap(list[j], list[j + 1]);
//			}
//		}
//	}
//}
//int main()
//{
//	int list[] = { 60,50,80,40,30,55,90,25,65,77 };
//	PrintList(list, 10);
//	Sort(list, 10);
//	PrintList(list, 10);
//}


//#include <stdio.h>//정렬, 이 정렬방식과 버블 정렬방식(큰놈 부터 뒤에 박아놓으면서 앞에서부터 다시 계속비교하는방법)
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}
//void Swap(int& a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//void Sort(int list[], int size)
//{
//	for (int i = 0; i < size-1 ; ++i)
//	{
//		int min = i;//기준이되는 애
//		for (int j = i+1; j < size; ++j)
//		{
//			if (list[j] < list[min])//가장작은원소를 찾는다.
//			{
//				min = j; //아래와 같은 코드임
//			}
//		}
//		Swap(list[i], list[min]); //list[min]이 찾은 원소중 가장 작은 원소이므로 바꿔주고 루프 계속 돌림
//	}
//}
//int main()
//{
//	int list[] = { 60,50,80,40,30,55,90,25,65,77 };
//	PrintList(list, 10);
//	Sort(list, 10);
//	PrintList(list, 10);
//}



//#include <stdio.h>//정렬
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d\n", list[i]);
//	}
//	printf("\n");
//}
//void Swap(int& a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//void Sort(int list[], int size)
//{
//	int min = 0;
//	for (int j = 1; j < size; ++j)
//	{
//		if (list[j] < list[min])//가장작은원소를 찾는다.
//		{
//			min = j; //아래와 같은 코드임
//		}
//	}
//	Swap(list[0], list[min]);
//}
//int main()
//{
//	int list[] = { 60,50,80,40,30,55,90,25,65,77 };
//	PrintList(list, 10);
//	Sort(list, 10);
//	PrintList(list, 10);
//}




//#include <stdio.h>//정렬
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d\n", list[i]);
//	}
//	printf("\n");
//}
//int Min(int list[], int size)
//{
//	int idx = 0;
//	for (int i = 1; i < size; ++i)
//	{
//		if (list[i] < list[idx]) 
//		{
//			idx = i;
//		}
//	}
//	return idx;
//}
//int Max(int list[], int size)
//{
//	int idx = 0;
//	for (int i = 1; i < size; ++i)
//	{
//		if (list[i] > list[idx])
//		{
//			idx = i;
//		}
//	}
//	return idx;
//}
//int main()
//{
//	int list[] = { 60,50,80,40,30,55,90,25,65,77 };
//	int idx = Min(list, 10); //가장작은 인덱스번호를 반환하는 함수,정렬을 하기위해서는모든 함수와 비교를하는게 기본
//	printf("min[%d]: %d\n", idx, list[idx]);
//	idx = Max(list, 10);
//	printf("max[%d]: %d\n", idx, list[idx]);
//	PrintList(list, 10);
//}
//

//#include <stdio.h>//정렬
//void PrintList(int list[],int size)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d\n", list[i]);
//	}
//	printf("\n");
//}
//int Min(int list[],int size)//각각원소를 비교할때, 가장먼저 시작하는 첫번째원소는 비교대상이없으므로 가장작은원소로서 시작
//{
//	int idx = 0;
//	if (list[1] < list[idx]) //이런식으로 비교를 계속하는거라고 생각
//	{
//		idx = 1;
//	}
//	if (list[2] < list[idx])
//	{
//		idx = 2;
//	}
//	///
//	if (list[9] < list[idx])
//	{
//		idx = 9;//이런식으로 9번까지 가는거다.
//	}
//	return 0;
//}
//int Max(int list[],int size)
//{
//	return 0;
//}
//int main()
//{
//	int list[] = { 60,50,80,40,30,55,90,25,65,77 };
//	int idx = Min(list, 10); //가장작은 인덱스번호를 반환하는 함수,정렬을 하기위해서는모든 함수와 비교를하는게 기본
//	printf("min[%d]: %d\n", idx, list[idx]);
//	idx = Max(list, 10);
//	printf("max[%d]: %d\n", idx, list[idx]);
//	PrintList(list, 10);
//}




//#include <stdio.h>//색칠하기,그림판 색칠하기 생각
//#include<Windows.h> //system과 sleep때문에 헤더넣어준것
//#include<stdlib.h>
//int image[10][10] =
//{
//	0,0,0,0,0,0,0,0,0,0,
//	0,0,0,1,1,1,1,0,0,0,
//	0,0,1,0,1,0,1,0,0,0,
//	0,0,0,0,0,0,1,0,0,0,
//	0,0,0,0,0,0,1,0,0,0,
//	0,0,5,5,5,5,0,0,0,0,
//	0,0,0,0,5,5,0,0,0,0,
//	0,0,0,0,5,0,5,0,0,0,
//	0,0,0,0,5,5,5,5,0,0,
//	0,0,0,0,0,0,5,5,5,0
//};//(3,3)의 1을 보자면 4방향으로 보면 이유픽셀?이아니지만 8방향으로 대각선까지 포함하여 보면 맞다.
//void PrintImage(int image[][10])
//{
//	system("cls");//출력하기전에 클리어
//	for (int i = 0; i < 10; ++i)
//	{
//		for (int j = 0; j < 10; ++j)
//		{
//			printf("%3d", image[i][j]);
//		}
//		printf("\n");
//	}
//	Sleep(300);//0.1초
//}
//void _Fill(int image[][10], int i, int j, int newColor, int oldColor)//색을칠할지말지를 검사한다
//{
//	//윈도우창의 경계를 넘어간다면 색칠할 필요가 없다. i,j를 기준으로 4방향으로 칠해도되냐고 물어보는것
//	if (i < 0 || i >= 10 || j < 0 || j >= 10)//경계를 넘어가버린다면
//	{
//		return;//종료조건
//	}
//	//우리는 i,j의색상과 old색상과같아야지 색칠하기 시작한다->그러므로 우리는 old색상인지 검사해야함
//	if (image[i][j] != oldColor)//oldcolor가 아니면 더이상 볼필요가없다라는뜻
//	{
//		return;
//	}
//	image[i][j] = newColor;
//	PrintImage(image);//확인차 출력해봄
//	_Fill(image, i - 1, j, newColor, oldColor); //내방향에서 4방향으로 가는것
//	_Fill(image, i, j+1, newColor, oldColor);
//	_Fill(image, i + 1, j, newColor, oldColor);
//	_Fill(image, i , j-1, newColor, oldColor);
//}
//void Fill(int image[][10],int i , int j, int newColor) //얘는 재귀함수를 사용하지못함으로, 위임하는 함수(deligation)를 만듦->하는일은 똑같음
//{
//	if (newColor != image[i][j])//내가 색칠해야하는 색상인지 검사하는것.새로운 색상과 지금 색상과 같지않으면
//	{
//		_Fill(image, i, j, newColor, image[i][j]);//image[i][j]는 oldcolor,우리가 얘를 바꿀지안바꿀지 알아야하므로
//	}
//}
//int main()
//{
//	Fill(image, 1, 4, 6);//칠해라,칠하고자하는 위치의 좌표,색상(우리가 0~9까지 색상이있다고 가정하였을때)
//	PrintImage(image);// image출력하는 함수
//}



//#include <stdio.h>//재귀함수,피보나치수열:앞에 두항(C1,C2)이 주어졌을때,n번째 항은 값이 무언인가? 
//void Fibonacci(int n, int c1, int c2,int* presult) //값을담아가야되기때문에 포인터변수를 넣어줌
//{
//	if (n == 1)
//	{
//		*presult = c1; 
//	}
//	else if (n == 2)
//	{
//		*presult = c2; 
//	}
//	else
//	{
//		int f1, f2; //결과치를 받아야하는 변수
//		Fibonacci(n - 1, c1, c2, &f1);//이런식으로 각각 f1,f2에 결과치를 독립적으로 받아서 넣어준다.아래처럼 presult에만 받으면 같은곳에 받기때문에 값이 사라지기 때문에
//		Fibonacci(n - 2, c1, c2, &f2);
//		*presult = f1 + f2;
//	}
//		//*presult = Fibonacci(n - 1, c1, c2,presult) + Fibonacci(n - 2, c1, c2,presult); //이런식으로 하면 presult는 함수에갓다와서 새로운값을 채우기때문에 값이 날아가버리기때문에 말이안된다.
//}
//int main()
//{
//	int result;
//	Fibonacci(5,1,2,&result);//이건 아웃파라미터로 받느 ㄴ방법,result주소를 줘서 result로 받겠다.
//	printf("n: %d\n",result);
//}



//#include <stdio.h>//재귀함수,피보나치수열:앞에 두항(C1,C2)이 주어졌을때,n번째 항은 값이 무언인가? 
//int Fibonacci(int n,int c1,int c2) 
//{
//	if (n == 1)
//	{
//		return c1; 
//	}
//	else if (n == 2)
//	{
//		return c2; 
//	}
//	else
//		return Fibonacci(n - 1,c1,c2) + Fibonacci(n - 2,c1,c2);
//}
//int main()
//{
//	printf("n: %d\n", Fibonacci(5, 1, 2));
//	printf("n: %d\n", Fibonacci(5,2,3));//상수항은 2,3(C1,C2)을줫을때 값은 무엇일까??
//}


//#include <stdio.h>//재귀함수,피보나치수열:앞에 두항(C1,C2)이 주어졌을때,n번째 항은 값이 무언인가? 
//int Fibonacci(int n) //트리를 그려볼수잇음, f5는 f4,f3의결과치를 더합,f4는 f3,f2의 결과치를더함,f3은 f2,f1의결과치를 더함..식으로 그려나감,그럼 이러한 순서대로 재귀로써 호출된다는걸 알수있음.
//{
//	if (n == 1)
//	{
//		return 1; //C1이 1임
//	}
//	else if (n == 2)
//	{
//		return 2; //C2를 말함
//	}
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main()
//{
//	printf("n: %d\n",Fibonacci(5));
//}


//#include <stdio.h>//재귀함수
//void Print(int n) //만일내가 아래에잇던 -1을 출력하고싶지않다면 if조건을 바꿔주면 된다.
//{
//	printf("+%d\n", n);
//	if (n - 1 >= 0) //전에는 이 조건을 들어가도 무조건 두개씩 출력을 햇어어야 하므로 이렇게 분류를 해준다.
//	{
//		Print(n - 1);
//	}	
//	if (n - 2 >= 0) //트리구조로 그린다면 이 조건에 충족하지 못한 노드가 생기므로 아래에서 그려졋던 안그려지고 맨아래의 트리노드들은 단말로써 나타나지게 된다.
//	{
//		Print(n - 2);
//	}
//	printf("-%d\n", n);
//}
//int main()
//{
//	Print(5);
//}



//#include <stdio.h>//재귀함수
//void Print(int n) //얘를 트리구조로 그린다면 P5는 P4를 먼저호출한뒤 같은 시간대에 수평적으로 P3을 호출,P4,P3역시 마찬가지로호출,그러다가 P2,P1이나올때,P2가 먼저호출되므로 n은2로 기준이됨,그래서n>0이므로 P1은 P0과 P-1을 호출
//{
//	printf("+%d\n", n);
//	if (n > 0)
//	{
//		Print(n - 1);
//		Print(n - 2);
//	}
//	printf("-%d\n", n);
//}
//int main()
//{
//	Print(5);
//}



//#include <stdio.h>//재귀함수
//void Print(int n) //트리형식으로 P5가 P4를 두개 호출하고, 그하나의 P4는 각각의 P3두개씩 호출하는 하면 P0까지 호출->총 2의 6승 -1개만큼 호출
//{
//	printf("+%d\n", n);
//	if (n > 0)
//	{
//		Print(n - 1);
//		Print(n - 1);
//	}
//	printf("-%d\n", n);
//}
//int main()
//{
//	Print(5);
//}


//#include <stdio.h>//재귀함수
//void Print(int n)
//{
//	printf("+%d\n", n);
//	if (n > 0)
//	{
//		Print(n-1);
//	}
//	printf("-%d\n", n);
//}
//int main() 
//{
//	Print(5);
//}

//#include<stdio.h> //하노이의탑
//void hanoi(int n, char from, char to, char via)
//{
//	if (n > 1)
//	{
//		hanoi(n - 1, from, via, to);
//		printf("%c->%c\n", from, to);
//		hanoi(n - 1, via, to, from);
//	}
//	else
//	{
//		printf("%c -> %c\n", from, to);
//	}
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	hanoi(n, 'a', 'b', 'c');
//
//	return 0;
//}