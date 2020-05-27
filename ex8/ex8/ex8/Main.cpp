//#include<stdio.h> 
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node* head; 
//
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//	Node* p = head; //head의 분신술이라 생각
//	printf("%d\n", p->data); 
//	p = p->link; //전진코드,앞으로 이동하는 코드 정말정말 중요한 코드,p를 헤드의 분신술로 보고 p = p(헤드의 분신술)이 가르키는 애의 링크
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//}



//#include<stdio.h> 
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node* head; //헤드가 n1을가르키고있기때문에, n1알면 n2를출력할수있고, n2를 알면 n3를 출력할수있으므로 헤드를 알면 모두 출력할 수 있다.결론은 헤드만 알면 된다.
//
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//	printf("%d\n", head->data);//n1.data가 head가 가르키는, 즉 참조하는 데이터라고할 수있다.
//	printf("%d\n", head->link->data);//n2를의미, 이해를 할때 ->를 "누구의"라고생각, 
//	printf("%d\n", head->link->link->data);
//}


//#include<stdio.h> 
//struct Node
//{
//	int data;
//	Node* link;//포인터
//};
//int main()
//{
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node* head;
//
//	head = &n1;//맨처음 시작을 의미하는 헤드를 만듬
//	n1.link = &n2; //n1의 링크에 n2의 주소를 담아라
//	n2.link = &n3;	//n1의 데이터 하나만 알면 마지막까지 다 알수있다. 연결되어있으므로 
//	printf("%d\n", n1.data);
//	printf("%d\n", n2.data);
//	printf("%d\n", n3.data);
//}



//#include<stdio.h> //연결리스트 구조
////메모리를 연속하게 보관할것이냐(Array-Based)(연속적으로 차근차근히 순서적으로 쌓여있기에 위치정보가 저장할 필요가없다.)ex)디큐,벡터,array 
////(Node-Based)(얘는 데이터도 갖고있어야하면서도 위치정보도 갖고있어야한다.)메모리를 연속하지않게 보관을 할것이냐(메모리 삭제가 가능함, 연속적인건 데이터삭제는 가능하지만 중간 메모리삭제는 불가능, 메모리삭제한다는건 다른놈들이 다시 사용할 수 있도록 만들어주는것.) 와같은 메모리를 보관하는 방법은 두가지방법밖에 없다. ex)맵,연결리스트
////연결리스트는무조건 노드기반이다.서로서로 노드가 연결 되어있다.연결리스트의 특징은 선형적(한줄)으로 연결되어있어서 서로 연결되어있는 애들끼리만 정보를 안다.또 다른 형태로는 트리형태(비선형기반)가있다.
////노드안의 연결부는 다음 데이터의 위치정보를 갖고있다. 구조체로 정의해보자
//struct Node
//{
//	int data;//데이터부
//	Node* link;//다음 노드의 주소를 담고있으므로 Node형 포인터인것.
//};
//int main()
//{
//	Node n1 = { 10,NULL };//주소를 아직 안넣었으므로 NULL담고
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//
//	printf("%d\n", n1.data);
//	printf("%d\n", n2.data);
//	printf("%d\n", n3.data);
//}


//#include<stdio.h> 
//#include<algorithm>
//using namespace std;
//void PrintList(int list[], int size)
//{
//	printf("size: %d\n", list[0]);
//	for (int i = 1; i <= size; ++i)
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}
//void Swap(int & a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//void Push_heap(int list[], int size)
//{
//	list[0] = size;
//	int child = size;
//	int parent = child / 2;
//	while (parent >= 1)
//	{
//		if (list[child] > list[parent])
//		{
//			Swap(list[child], list[parent]);
//		}
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void Make_heap(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		Push_heap(list, ++list[0]);
//	}
//}
//void Pop_heap(int list[], int& size)
//{
//	--size;
//	list[0] = size;
//	Swap(list[1], list[size + 1]);
//	int parent = 1;
//	int child = parent * 2;
//	while (child <= size)
//	{
//		if (child < size && list[child] < list[child + 1])
//		{
//			child = child + 1;
//		}
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//			break;
//		parent = child;
//		child = parent * 2;
//	}
//}
//void Sort_heap(int list[], int size)
//{
//	int heapSize = size;
//	for (int i = 0; i < size; ++i)
//	{
//		Pop_heap(list, heapSize);
//	}
//}
//int main()
//{
//	int list[20] = { 0,    20,50,70,65,25,45,92,38,76,60 };//원본 확인
//	//int list[20] = { 0,   70,20,50,60,25,45,92,38,76,65 };
//	int heapSize = 10;
//	Make_heap(list, 10);
//	PrintList(list, 10);
//	Sort_heap(list, 10);
//	PrintList(list, 10);
//}



#include<stdio.h> 
#include<algorithm>
using namespace std;
void PrintList(int list[], int size)
{
	printf("size: %d\n", list[0]);
	for (int i = 1; i <= size; ++i)
	{
		printf("%5d", list[i]);
	}
	printf("\n");
}
void Swap(int & a, int& b)
{
	int t = a;
	a = b;
	b = t;
}
void Push_heap(int list[], int size)
{
	list[0] = size;
	int child = size;
	int parent = child / 2;
	while (parent >= 1)
	{
		if (list[child] > list[parent])
		{
			Swap(list[child], list[parent]);
		}
		else
			break;
		child = parent;
		parent = child / 2;
	}
}
void Make_heap(int list[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		Push_heap(list, ++list[i]);
	}
}
void Pop_heap(int list[], int& size)
{
	--size;
	list[0] = size;
	Swap(list[1], list[size + 1]);
	int parent = 1;
	int child = parent * 2;
	while (child <= size)
	{
		if (child < size && list[child] < list[child + 1])
		{	
			child = child + 1;
		}
		if (list[parent] < list[child])
		{
			Swap(list[parent], list[child]);
		}
		else
			break;
		parent = child;
		child = parent * 2;
	}
}
void Sort_heap(int list[], int size)
{
	int heapSize = size;
	for (int i = 0; i < size; ++i)
	{
		Pop_heap(list, heapSize);
	}
}
int main()
{
	//int list[20] = { 10,    20,50,70,65,25,45,92,38,76,60 };
	int list[20] = { 0,   70,20,50,60,25,45,92,38,76,65 };
	int heapSize = 10;
	Sort_heap(list, 10);//정렬,pop으로인해서 오름순으로 정렬한다. 어느정도 힙구조상태에서 유효하다.
	PrintList(list, 10);
	Make_heap(list, 10);
	PrintList(list, 10);
}



//#include<stdio.h> 
//#include<algorithm>
//using namespace std;
//void PrintList(int list[], int size)
//{
//	printf("size: %d\n", list[0]);
//	for (int i = 1; i <= size; ++i)
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}
//void Swap(int & a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//void Push_heap(int list[], int size)
//{
//	list[0] = size;
//	int child = size;
//	int parent = child / 2;
//	while (parent >= 1)
//	{
//		if (list[child] > list[parent])
//		{
//			Swap(list[child], list[parent]);
//		}
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void Make_heap(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		Push_heap(list, ++list[0]);
//	}
//}
//void Pop_heap(int list[], int& size)
//{
//	--size;
//	list[0] = size; 
//	Swap(list[1], list[size + 1]);
//	int parent = 1; 
//	int child = parent * 2; 
//	while (child <= size) 
//	{
//		if (child < size && list[child] < list[child + 1])//20까지 다 빼버릴때,25와 20만 남게되는상황에서, 문제가생기는게 child+1이 유효데이터가 아닌데 비교되버리니까 문제가된다.
//		{	//child가 size보다 작을때만 이짓을 해야하므로 &&를 넣어준다.
//			child = child + 1;
//		}
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else 
//			break;
//		parent = child;
//		child = parent * 2;
//	}
//}
//int main()
//{
//	//int list[20] = { 10,    20,50,70,65,25,45,92,38,76,60 };
//	int list[20] = { 0,   70,20,50,60,25,45,92,38,76,65 };
//	int heapSize = 10;
//
//	Make_heap(list, 10);
//	PrintList(list, 10);
//	Pop_heap(list, heapSize);
//	Pop_heap(list, heapSize);
//	Pop_heap(list, heapSize);
//	Pop_heap(list, heapSize);
//	Pop_heap(list, heapSize);
//	Pop_heap(list, heapSize);
//	Pop_heap(list, heapSize);
//	Pop_heap(list, heapSize);
//	Pop_heap(list, heapSize);
//	Pop_heap(list, heapSize);//이렇게 다 빼버릴때 문제가 생긴다.
//	PrintList(list, 10);
//}




//#include<stdio.h> 
//#include<algorithm>
//using namespace std;
//void PrintList(int list[], int size)
//{
//	printf("size: %d\n", list[0]);
//	for (int i = 1; i <= size; ++i)
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}
//void Swap(int & a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//void Push_heap(int list[], int size)
//{
//	list[0] = size;
//	int child = size;
//	int parent = child / 2;
//	while (parent >= 1) 
//	{
//		if (list[child] > list[parent])
//		{
//			Swap(list[child], list[parent]);
//		}
//		else
//			break;
//		child = parent; 
//		parent = child / 2;
//	}
//}
//void Make_heap(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		Push_heap(list, ++list[0]); //먼가 시험나올삘
//	}
//}
//void Pop_heap(int list[], int& size)//size값은 변해가야하므로 참조로 준다. 여기 참조부분 주의
//{
//	--size;
//	list[0] = size; //위처럼 0번은 관여안하므로 
//	Swap(list[1], list[size + 1]);//우선적으로 맨 아래와 root를 바꿔준다.
//	int parent = 1; //root이므로 index 1번
//	int child = parent * 2; //이제 자식중 누가 더 큰지 비교한다.
//	while (child <= size)//계속 돌아가서 child가 데이터 유효보다 내려가면 안되므로 
//	{ //while부분안에 무조건 시험 나올삘
//		if (list[child] < list[child + 1])
//		{
//			child = child + 1;//먼저 parent와 비교하기위해 큰놈으로 바꿔준뒤에 
//		}
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);//위에서 바꿔줫으면 이제 root와child가 바뀜
//		}
//		else //더 이상 진행하면 안될때,
//			break;
//		parent = child;//아까 child가 이제 parent가 되었으므로 ,인덱스번호를 말하는거임
//		child = parent * 2; //만일 노드까지 가서 이렇게 해주면 child는 size를 넘게되서 나오게되는 구조
//	}
//}
//int main()//heap은 stack처럼 누구를 빼달라 하지못하고 빼라밖에 못한다. 그럼 root가 빠지고 size가 줄어듬
//{
//	//int list[20] = { 10,    20,50,70,65,25,45,92,38,76,60 };
//	int list[20] = { 0,   70,20,50,60,25,45,92,38,76,65 };
//	int heapSize = 10;//현재 다 heap이 다 구성되어있으므로 10개인상태
//
//	Make_heap(list, 10);
//	PrintList(list, 10);
//	Pop_heap(list, heapSize);//Pop의 인자에서 주소로 받기때문에 정수를 적어서 주면 안된다.
//	PrintList(list, 10);//92가 맨뒤에잇다는게 나왔다는것.
//}



//#include<stdio.h> 
//#include<algorithm>
//using namespace std;
//void PrintList(int list[], int size)
//{
//	printf("size: %d\n", list[0]);
//	for (int i = 1; i <= size; ++i) 
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}
//void Swap(int & a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//void Push_heap(int list[],int size)
//{
//	list[0] = size;
//	int child = size;
//	int parent = child / 2;//인덱스번호를 생각, 인덱스 0은 size를 나타내고 있고,인덱스1부터 시작이므로 나누기 2만 해줌.(그림그려서 생각)
//	while (parent >= 1 ) //여기선 while문 안에가 가장 핵심적인 코드,parent가 0번 인덱스까지 안가기위해서,0으로 parent가 잡히면 size로 됨
//	{
//		if (list[child] > list[parent])//갓 붙혀진 수와 부모를 확인해서 서로 바꿔라 
//		{
//			Swap(list[child], list[parent]);
//		}
//		else//while문을 정지시켜줌.저 if가 아니면 올라갈 필요가없기때문에 여기서 그만둬게 만들어줌.
//			break;
//		child = parent; //아래있던애가 올라가니까 child였던애가 부모가 되게 만들어주는것.
//		parent = child / 2;
//	}
//}
//int main()
//{
//	//int list[20] = { 10,    20,50,70,65,25,45,92,38,76,60 };
//	int list[20] = { 3,   70,20,50,60,25,45,92,38,76,65 }; //70,20,50이 이미 3개가 들어와 힙의구조로 되어있다고 가정,60부터 들어가는간다.
//	int heapSize = 3;//위에 3개가 되었으므로 
//	PrintList(list, 10);
//
//	//힙에 넣는 코드
//	Push_heap(list,++heapSize);//힙사이즈는 1이증가되서 들어가야하므로,맨처음부터 넣긴 뭐하니까 힙안에 데이터가 앞에 3개정도(70까지) 이미들어가있다고 가정하자
//	Push_heap(list, ++heapSize); //25를 넣어준다.
//	Push_heap(list, ++heapSize);  //45넣어줌
//	PrintList(list, 10);
//	Push_heap(list, ++heapSize); //92인데 처음으로 root보다 큰애가 처음으로 들어옴
//	PrintList(list, 10);
//
//}




//#include<stdio.h> 
//#include<algorithm>
//using namespace std;
//void PrintList(int list[],int size)
//{
//	printf("size: %d\n", list[0]);
//	for (int i = 1; i <= size; ++i) //0을 사용하지않기위해 1부터
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int list[11] = { 10,20,50,70,65,25,45,92,38,76,60 };//범위가 11개인 이유는 0인덱스를 쓰지않기때문에,앞에 10은 size를 의미한다
//
//	PrintList(list, 10);
//}


//#include<stdio.h> //아래에서 했던 네가지 방식을 이제 만들어보겠다.
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int list[10] = { 20,50,70,65,25,45,92,38,76,60 };
//
//
//	//make_heap(list, list + 10);
//	push_heap(list, list + 1);//0번추가, 뒤에 인자는 이터레이터, 원소를 n번째에 추가하겠다는 말
//	push_heap(list, list + 2);//1번추가
//	push_heap(list, list + 3);
//	push_heap(list, list + 4);
//	push_heap(list, list + 5);
//	push_heap(list, list + 6);
//	push_heap(list, list + 7);
//	push_heap(list, list + 8);
//	push_heap(list, list + 9);
//	push_heap(list, list + 10);
//
//	//sort_heap(list, list + 10); //10개의 원소를 정렬시켜라
//	pop_heap(list, list + 10);//pop:삭제
//	pop_heap(list, list + 9);
//	pop_heap(list, list + 8);
//	pop_heap(list, list + 7);
//	pop_heap(list, list + 6);
//	pop_heap(list, list + 5);
//	pop_heap(list, list + 4);
//	pop_heap(list, list + 3);
//	pop_heap(list, list + 2);
//	pop_heap(list, list + 1);
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}



//#include<stdio.h> //힙정렬을 구현하기 위해선 힙 자료구조를 우선적으로 구현을해야함.
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int list[10] = { 20,50,70,65,25,45,92,38,76,60 };
//
//
//	//make_heap(list, list + 10);
//	push_heap(list, list + 1);
//	push_heap(list, list + 2);
//	push_heap(list, list + 3);
//	push_heap(list, list + 4);
//	push_heap(list, list + 5);
//	push_heap(list, list + 6);
//	push_heap(list, list + 7);
//	push_heap(list, list + 8);
//	push_heap(list, list + 9);
//	push_heap(list, list + 10);
//
//	sort_heap(list,list+10); //10개의 원소를 정렬시켜라
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}


//#include<stdio.h> //힙정렬을 구현하기 위해선 힙 자료구조를 우선적으로 구현을해야함.
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int list[10] = {20,50,70,65,25,45,92,38,76,60};
//	//노드의 자식들은 자신의 번호의 왼쪽은 2*n+1,오른쪽은 2*n+2
//	
//	//make_heap(list, list + 10);//힙구조로 만드는 함수
//	push_heap(list, list + 1);//어떤방식으로 힙의 구조가 되는지 수동적으로 해보자
//	push_heap(list, list + 2);
//	push_heap(list, list + 3);
//	push_heap(list, list + 4);
//	push_heap(list, list + 5);
//	push_heap(list, list + 6);
//	push_heap(list, list + 7);
//	push_heap(list, list + 8);
//	push_heap(list, list + 9);
//	push_heap(list, list + 10);
//
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}