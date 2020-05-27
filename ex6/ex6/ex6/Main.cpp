//#include<stdio.h>
//int compare()
//{
//
//}
//void Bsearch(int key, int size,int c )
//{
//	int left = 0;
//	int right = size - 1;
//	int middle = (left + right) / 2;
//}
//int main()
//{
//	int arr[10] = { 10,23,25,35,43,52,61,78,81,94 };
//	int idx = Bsearch(25, 10, compare());
//	if (idx != 1)
//	{
//		printf("%d : %d", idx, arr[idx]);
//	}
//}

/////////////////////////////////////////2진트리를 재귀함수로 만들어볼것 위.
//#include<stdio.h> //재귀함수문제:피보나치
//int Factorial(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return Factorial(n - 1)* n; //아래와 마찬가지 함수 
//}
//int main() {
//	int total = Factorial(5);
//	printf("%d\n", total);
//}



//#include<stdio.h> //재귀함수문제:피보나치
////5! = 5*4! 즉 f(n) = n*f(n-1)로 볼수있다. 이때 조건은 n은 1보다 큰 값
//int Factorial(int n)//팩토리얼은 1까지임으로
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	int result = Factorial(n - 1);
//	return result * n; //자신의 값을 곱해서 result값을 반환
//}
//int main() {
//	int total = Factorial(5);
//	printf("%d\n", total);
//}



#include<stdio.h> 
void Print(int n)
{
	printf("+%d\n", n);
	if (n > 0)
	{
		for (int i = 0; i < n; ++i)//이건 가보기전까진 알수없다. 모든 애들을 순회를 해봐야한다.ex)윈도우 파일개수를 알수있냐?들어가서 확인해봐야한다.해보기전까진 알수없다.이것을 재귀적이라고 알 수 있다.
		{
			Print(n - 1);
		}//미로도 마찬가지: 찾을려면 모든 경로로 가보는것.
	}
	printf("-%d\n", n);
}

int main()
{
	Print(5);
}



//#include<stdio.h> 
//void Print(int n)
//{
//	printf("+%d\n", n);
//	if (n > 0)
//	{
//		Print(n - 1);//트리 그림에서 하나당 세개씩
//		Print(n - 1);
//		Print(n - 1);
//	}
//	printf("-%d\n", n); 
//}
//
//int main()
//{
//	Print(5);
//}


//#include<stdio.h> 
//void Print(int n)
//{
//	printf("+%d\n", n); //먼저 출력되는것
//	if (n > 0)
//	{
//		Print(n - 1);//그림그려서 트리관계를 보면 될것. 같은 짓을 두번씩한다는것.
//		Print(n - 1);
//	}
//	printf("-%d\n", n); //반환하며 출력되는것.
//}
//
//int main()
//{
//	Print(5);
//}



//#include<stdio.h> //나를 호출했던놈의 주소는 스택메모리의 저장이 된다. 즉 return 주소, 결론적으로 함수는 스택에 의해 관리가 된다. 
//void Print(int n)
//{
//	printf("%d\n", n);
//	if (n > 0)
//	{
//		Print(n - 1);
//	}//여기까진 아래와 마찬가지이고
//	printf("%d\n", n); //여기코드는 재귀함수가 다 호출되고난후 맨 아래에서부터 반환될때 출력이된것.스택메모리에 쌓이는것이라고 생각할것. 
//}
//
//int main()
//{
//	Print(5);
//}



//#include<stdio.h> 
//void Print(int n)
//{
//	if (n <= 0) //여기로 오면 출력이값이 다르게 나온다. -> 이미 재귀함수를 판단하기때문에->0이나오게 해주고 싶으면 n<0으로 해주면 된다.  
//		return;
//	printf("%d\n", n);
//	Print(n - 1);
//}
//int main()
//{
//	Print(5);
//}


//#include<stdio.h> 
//void Print(int n)
//{
//	printf("%d\n", n);
//	if (n <= 0)//이러면 종료해버려라
//		return;
//	Print(n - 1);
//}
//int main()
//{
//	Print(5);
//}



//#include<stdio.h> 
//void Print(int n)
//{
//	printf("%d\n", n);
//	if (n > 0)
//	{
//		Print(n - 1); //0이 출력이되는 이유는 0이출력되어야지 종료조건이 되는지 알 수 있기떄문에,0이기때문에 if문에 들어가지못하므로 재귀가 종료가된다.
//	}	//이런식으로 한쪽으로 이렇게 호출하고 다시 반환받는것을 선형재귀라고 한다.
//}
//int main()
//{
//	Print(5);
//}



//#include<stdio.h> 
//void Print(int n)
//{
//	printf("%d\n", n);
//	if (n < 10)
//	{
//		Print(n + 1);
//	}
//}
//int main()
//{
//	Print(20);//n이 20이므로 가자마자 종료조건이된것.
//}



//#include<stdio.h> 
//void Print(int n)
//{
//	printf("%d\n", n);
//	if (n < 10)
//	{
//		Print(n + 1);//재귀함수는1.종료조건 2.수렴조건을 갖추고 있어야한다.
//	}
//}
//int main()
//{
//	Print(5);
//}



	//#include<stdio.h> 
	//void Print(int n)
	//{
	//	printf("%d\n", n);
	//	if (n > 0)
	//	{
	//		Print(n-1); //종료조건과 종료조건으로 수렴해가는 모든것이 있다.이렇게 되면 완전 재귀함수
	//	}
	//}
	//int main()
	//{
	//	Print(5);
	//}



//#include<stdio.h> 
//void Print(int n)
//{
//	printf("%d\n", n);
//	if (n > 0)//재귀함수를 호출하지않는 조건이 종료조건->끝이오니까->하지만 종료조건에 수렴하지않음
//	{
//		Print(n);
//	}
//}
//int main()
//{
//	Print(5);
//}



//#include<stdio.h> 
//void Print(int n)
//{
//	printf("%d\n", n);
//	Print(5);//이 재귀함수는 자기자신을 호출하지만 조건에 충족하지않으므로 재귀함수라고 할 수 없다.우선 종료 조건이 없다.
//}
//int main()
//{
//	Print(5);
//}



//#include<stdio.h> //재귀함수->알고리즘의 필수,재귀함수: 자신의 함수를 재호출하는 함수//a함수 내에서 a함수를 호출하는것:직접 재귀, a함수가 b함수호출, b함수가 a함수 호출: 간접재귀함수(많이 사용되지는 않음)
////모든명령은 순서를 가지고실행이된다.즉 main함수내에 a,b함수가 있을때, a함수가 실행이되고있다면 b함수는 a함수가 다 완료가되기전까진 되지않는다.하지만 a가언제끝나는지는 모른다.
// //모든 함수는 자기를 호출한 놈한테만 반드시 되돌아간다(반환,return된다.)(트리로 생각,트리의 맨아래 종료되는 함수를 생각할떄 중요한 점은 명령어는 같지만 상태값은 다르다.즉 행동은 동일하지만 상태값은 다르다. 그래서 같은 함수아래에서 몇번 호출당하지만 다른함수라고 볼수있다.만약 상태값이 계속 같아진다면 무한루프가되버린다.)
// //화면에 텍스트를 출력하는 코드 작성
//void Print(int n) 
//{
//	printf("%d\n", n);
//
//}
//int main()	
//{
//	Print(5);
//}



//#include<stdio.h> 
//#include<queue>
//int buf[5];
//int front = 0, rear = 0;
//void Push(int data)
//{
//	//rear = rear + 1; //즉 이코드는 buf의 저장공간을 넘지않도록 자주 사용하는 코드이다.
//	//if (rear == 5)
//	//{
//	//	rear = 0;
//	//}
//	if ((rear + 1)%5 == front) // 만일 front가 buf[1]에위치에있고, rear역시 buf[1]위치에서 5개를 넣었다면 돌아서 rear와 front가같아지면 이건 말이안된다.같아지면 비어있는 상태니까 ,Max-f?크기-1?,rear와 front와 한개차이가 나냐를 검사해를 해봐야한다.rear가 한개증가하면 front와 같아지게된다. 즉 r+1==f면 꽉차있는상태가되므로 체크하는상태이다.
//	{
//		return; //log를 남기자.
//	}//그런데 r+1코드는 rear가 4고 , front가 0에있다면 rear는 더하면 5가되지 0이안되므로 성립되지 않는다.그래서 (rear + 1)%5이 코드를 써주는것이다. 정말 많이 쓰는 중요한 코드 
//	rear = (rear + 1) % 5; //위에 코드와 같다.0,1,2,3,4 반복->즉 가장 처음 증가하는곳은 buf[1]이다.front역시 마찬가지
//	buf[rear] = data; //위에 rear +1의 +1을 없애고 buf안을 후위연산자++로하면 같아지는지 해볼것.
//}
//int Pop()
//{
//	if (front == rear) //원소가 존재하지않는 상태, 우리만의 오류처리,원형큐에서 중요한 사항
//	{
//		return -1;////원형큐의 가장 중요한 사항은 front와 rear가 같으면 비어잇는 상태,즉 큐의 시작점이 어디서부터 시작인지는 중요하지않다. 그림을 그려보며 생각해보자
//	}
//	front = (front + 1) % 5; 
//	return buf[front]; 
//}
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//}



//#include<stdio.h> 
//#include<queue>
//int buf[5];
//int front = 0, rear = 0;
//void Push(int data)
//{
//	rear = rear + 1;
//	if(rear == 5)
//	{
//		rear = 0;
//	}
//	buf[rear] = data;
//}
//int Pop()
//{
//	front = front + 1;
//	if (front == 5)
//	{
//		front = 0;
//	}
//	return buf[front];
//}
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//}



//#include<stdio.h> 
//#include<queue>
//int buf[5];
//int front = 0, rear = 0; 
//void Push(int data)
//{
//	buf[rear++] = data;
//}
//int Pop()
//{
//	return buf[front++];
//}
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	//이론적으론 3개넣엇다가 3개뺏으면 buf에 아무것도 없기때문에 또다시 실행이 가능해야하는데 불가능하다.이미 rear와 front는 그다음 새로 4번째를 가르키는데 거기서 똑같은 작업을하면서 위치가 더 증가하면 buf의 범위를 넘어가버린다.그래서 사용하는게 원형큐-> 즉 buf마지막칸까지 위치가왔으면 다시 0으로 가게 되는 큐,즉 0,1,2,3,4를 반복
//	
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//}




//#include<stdio.h> 
//#include<queue>
//int buf[5];//정수를 저장할메모리공간
//int front = 0, rear = 0; //저장되는 위치 rear,꺼내져야하는 위치 front
//void Push(int data)//큐는 저장되는 위치와 꺼내지는 위치가 다르다. 스택과는 다름,그렇기때문에 그 위치를 가르쳐주는 객체도 만들어줌.
//{
//	buf[rear++] = data;
//}
//int Pop()
//{
//	return buf[front++];
//}
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//}




//#include<stdio.h> //아래의 큐처럼 만들어보자.
//#include<queue>
//void Push(int data)
//{
//
//}
//int Pop()
//{
//	return 0;
//}
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//}


//#include<stdio.h> //큐
//#include<queue>
//using namespace std;
//typedef queue<int> Queue;//typedef:int를 저장하는 queue를 Queue라고 부르겠다.
//int main()
//{
//	Queue q;//Queue형의 q라는 객체 
//
//	q.push(10);
//	q.push(20);
//	q.push(30);
//
//	printf("%d\n", q.front());  q.pop();  //스택이었다면 30,20,10 큐는 10,20,30순으로 나오기때문에 FIFO(First in First out) 
//	printf("%d\n", q.front());  q.pop();  //q한테 가장 앞쪽에잇는놈을반환해달라
//	printf("%d\n", q.front());  q.pop();
//	//printf("%d\n", q.front());  //q.pop(); //만일이렇게 있었다면 가장 앞에있는원소만 계속 반환함.
//	//printf("%d\n", q.front());  //q.pop();
//	//printf("%d\n", q.front());  //q.pop();
//}