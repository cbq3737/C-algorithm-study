//#include<stdio.h> 
//#include<stdlib.h>//AddNextList가 아닌, AddPrevList를 만들어볼것(완료), 원소 순회방식도 앞에서 뒤로 조회하고잇는데, 뒤에서 앞으로 조회하는 방법도 만들어볼것.
//struct Node
//{
//	Node* prev;
//	int data;
//	Node* next;
//};
//struct List
//{
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->next = n->prev = NULL;
//	return n;
//}
//void InitList(List &lt)
//{
//	lt.head = AllocNode(0);
//	lt.tail = AllocNode(0);
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//}
//void UninitList(List &lt)
//{
//	for (Node* p = lt.head; p;)
//	{
//		Node* cur = p;
//		p = p->next;
//		free(cur);
//	}
//}
//void AddNextList(List& lt, int data)
//{
//	Node* n = AllocNode(data);
//	Node* tail = lt.tail;
//	Node* ptail = tail->prev;
//
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//void AddPrevList(List& lt, int data)//앞에서부터 노드 추가 
//{
//	Node* n = AllocNode(data);
//	Node* head = lt.head;
//	Node* phead = head->next;
//
//	phead->prev= n;
//	n->next = phead;
//	head->next = n;
//	n->prev = head;
//}
//void PrintNextList(List& lt)
//{
//	for (Node* p = lt.head->next; p != lt.tail; p = p->next)
//	{
//		printf("%d ", p->data);
//	}
//	printf("\n");
//}
////////////////////////////////////////이런 인터페이스를 제공해야한다.
//Node* GetHead(List& lt)
//{
//	return lt.head->next;
//}
//int HasNext(List& lt, Node* p)//참,거짓을 반환
//{
//	return p != lt.tail;//p가 끝이 아니니?라고 물어보는것 
//}
//Node* Next(List& lt, Node* p)
//{
//	return p->next;
//}
//int GetData(List& lt, Node* p)
//{
//	return p->data;
//}
////////////////////////////////////////////////////
//Node* Gettail(List& lt)
//{
//	return lt.tail->prev;
//}
//int HasPrev(List &lt,Node* r)
//{
//	return r != lt.head;
//}
//Node* Prev(List& lt, Node* r)
//{
//	return r->prev;
//}
///////////////////////////////////////////////////////
//void InsertList(List& lt, Node* p) //Delete가 있으니까,삽입도 있다.
//{
//
//}
//void DeleteList(List& lt, Node* p)
//{
//	Node* pp = p->prev;//현재 노드 앞쪽
//	Node* pn = p->next;//현재 노드 뒤쪽
//	pp->next = pn;
//	pn->prev = pp;
//	free(p); // 앞뒤끼리서로 이어주고 현재 노드인 p는 제거 
//}
//int main()
//{
//	List lt;
//
//	InitList(lt);
//	AddNextList(lt, 100);
//	AddNextList(lt, 200);
//	AddNextList(lt, 300);
//	AddNextList(lt, 400);
//	AddNextList(lt, 500);
//	AddPrevList(lt, 600);//앞에다가 붙히는것.
//
//	for (Node* p = GetHead(lt); HasNext(lt, p); p = Next(lt, p))//300을 찾고싶다면,만일 그 원소를 찾았다면 이 찾은 원소를 주고 제거하는것
//	{
//		if (300 == GetData(lt, p))//현재 p는 찾은 원소의 데이터
//		{
//			DeleteList(lt, p);
//			break;
//		}
//	}
//
//	for (Node* p = GetHead(lt); HasNext(lt, p); p = Next(lt, p))
//	{
//		printf("%d ", GetData(lt, p));
//	}
//	printf("\n");
//
//	for (Node* r = Gettail(lt); HasPrev(lt, r); r = Prev(lt, r)) //원소 순회를 반대로 하는것.
//	{
//		printf("%d ", GetData(lt, r));
//	}
//	printf("\n");
//	UninitList(lt);
//}



//#include<stdio.h> 
//#include<stdlib.h>
//struct Node
//{
//	Node* prev;
//	int data;
//	Node* next;
//};
//struct List
//{
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->next = n->prev = NULL;
//	return n;
//}
//void InitList(List &lt)
//{
//	lt.head = AllocNode(0);
//	lt.tail = AllocNode(0);
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//}
//void UninitList(List &lt)
//{
//	for (Node* p = lt.head; p;)
//	{
//		Node* cur = p;
//		p = p->next;
//		free(cur);
//	}
//}
//void AddNextList(List& lt, int data)
//{
//	Node* n = AllocNode(data);
//	Node* tail = lt.tail;
//	Node* ptail = tail->prev;
//
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//void PrintNextList(List& lt)
//{
//	for (Node* p = lt.head->next; p != lt.tail; p = p->next)
//	{
//		printf("%d ", p->data);
//	}
//	printf("\n");
//}
////////////////////////////////////////이런 인터페이스를 제공해야한다.
//Node* GetHead(List& lt)
//{
//	return lt.head->next;
//}
//int HasNext(List& lt, Node* p)//참,거짓을 반환
//{
//	return p != lt.tail;//p가 끝이 아니니?라고 물어보는것 
//}
//Node* Next(List& lt, Node* p)
//{
//	return p->next;
//}
//int GetData(List& lt, Node* p)
//{
//	return p->data;
//}
//void InsertList(List& lt, Node* p) //Delete가 있으니까,삽입도 있다.
//{
//
//}
//void DeleteList(List& lt, Node* p)
//{
//	Node* pp = p->prev;//현재 노드 앞노드,p가 현재 노드
//	Node* pn = p->next;//현재 노드 뒷도느
//	pp->next = pn;
//	pn->prev = pp;
//	free(p); // 앞뒤끼리서로 이어주고 현재 노드인 p는 제거 
//}
//int main()
//{
//	List lt;
//
//	InitList(lt);
//	AddNextList(lt, 100);
//	AddNextList(lt, 200);
//	AddNextList(lt, 300);
//	AddNextList(lt, 400);
//	AddNextList(lt, 500);
//
//	for (Node* p = GetHead(lt); HasNext(lt, p); p = Next(lt, p))//300을 찾고싶다면,만일 그 원소를 찾았다면 이 찾은 원소를 주고 제거하는것
//	{
//		if (300 == GetData(lt, p))//현재 p는 찾은 원소의 데이터
//		{
//			DeleteList(lt, p);
//			break;
//		}
//	}
//
//	for (Node* p = GetHead(lt); HasNext(lt, p); p = Next(lt, p))
//	{
//		printf("%d ", GetData(lt, p));
//	}
//	printf("\n");
//	UninitList(lt);
//}



//#include<stdio.h> 
//#include<stdlib.h>
//struct Node
//{
//	Node* prev;
//	int data;
//	Node* next;
//};
//struct List
//{
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->next = n->prev = NULL;
//	return n;
//}
//void InitList(List &lt)
//{
//	lt.head = AllocNode(0);
//	lt.tail = AllocNode(0);
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//}
//void UninitList(List &lt)
//{
//	for (Node* p = lt.head; p;)
//	{
//		Node* cur = p;
//		p = p->next;
//		free(cur);
//	}
//}
//void AddNextList(List& lt, int data)
//{
//	Node* n = AllocNode(data);
//	Node* tail = lt.tail;
//	Node* ptail = tail->prev;
//
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//void PrintNextList(List& lt) //이 프린트하는곳을 이해하고 외우면 아래 인터페이스는 그냥 외움
//{
//	for (Node* p = lt.head->next; p != lt.tail; p = p->next)
//	{
//		printf("%d ", p->data);
//	}
//	printf("\n");
//}
////////////////////////////////////////이런 인터페이스를 제공해야한다.
//Node* GetHead(List& lt)
//{
//	return lt.head->next;
//}
//int HasNext(List& lt, Node* p)//참,거짓을 반환 이므로 0,1
//{
//	return p != lt.tail ;//p가 tail이 아니면 참
//}
//Node* Next(List& lt, Node* p)
//{
//	return p->next;
//}
//int GetData(List& lt, Node* p)
//{
//	return p->data;
//}
//int main()
//{
//	List lt;
//
//	InitList(lt);
//	AddNextList(lt, 100); 
//	AddNextList(lt, 200);
//	AddNextList(lt, 300);
//	AddNextList(lt, 400);
//	AddNextList(lt, 500);
//	
//	//FindNextList(lt, 300);//이것을 할줄 알아야지 제거도 할수 있는것이다.
//	for (Node* p = GetHead(lt);HasNext(lt,p) ; p = Next(lt,p))//이 코드는 처음부터 끝까지 원소를 순회하는 코드,연결리스트는 모든 리스트를 처음부터 끝까지 순회를 할 줄 알아야한다. 
//	{
//		printf("%d ", GetData(lt,p));
//	}
//	printf("\n");
//	UninitList(lt);
//}


//#include<stdio.h> 
//#include<stdlib.h>
//struct Node
//{
//	Node* prev;
//	int data;
//	Node* next;
//};
//struct List
//{
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->next = n->prev = NULL;
//	return n;
//}
//void InitList(List &lt)
//{
//	lt.head = AllocNode(0);
//	lt.tail = AllocNode(0);
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//}
//void UninitList(List &lt)
//{
//	for (Node* p = lt.head; p;)
//	{
//		Node* cur = p;
//		p = p->next;
//		free(cur);
//	}
//}
//void AddNextList(List& lt, int data)
//{
//	Node* n = AllocNode(data);
//	Node* tail = lt.tail;
//	Node* ptail = tail->prev;
//
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//void PrintNextList(List& lt)
//{
//	for (Node* p = lt.head->next; p != lt.tail; p = p->next)
//	{
//		printf("%d ", p->data);
//	}
//	printf("\n");
//}
//int main()
//{
//	List lt;
//
//	InitList(lt);
//	AddNextList(lt, 100); //어디에 붙히는지에 따라 다르기때문에
//	AddNextList(lt, 200);
//	AddNextList(lt, 300);
//	AddNextList(lt, 400);
//	AddNextList(lt, 500);
//
//	PrintNextList(lt);
//	UninitList(lt);
//}



//#include<stdio.h> 
//#include<stdlib.h>
//struct Node
//{
//	Node* prev;
//	int data;
//	Node* next;
//};
//struct List
//{
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->next = n->prev = NULL;
//	return n;
//}
//void InitList(List &lt)
//{
//	lt.head = AllocNode(0);
//	lt.tail = AllocNode(0);
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//}
//void UninitList(List &lt)
//{
//	for (Node* p = lt.head; p;)
//	{
//		Node* cur = p;
//		p = p->next;
//		free(cur);
//	}
//}
//void AddList(List& lt, int data)
//{
//	Node* n = AllocNode(data); 
//	Node* tail = lt.tail;//새로 생성한 애를 tail앞에 붙혀주기위해서 이름을 붙혀준듯.
//	Node* ptail = tail->prev;//n붙혀주기전에 tail앞에있는애
//
// //여기서 새로 생긴애랑 붙혀주는중.
//	ptail->next = n;
//	n->prev = ptail;
//	n->next=tail;
//	tail->prev = n;
//}
//void PrintList(List& lt)
//{
//	for (Node* p = lt.head->next; p != lt.tail; p = p->next)
//	{
//		printf("%d ", p->data);
//	}
//	printf("\n");
//}
//int main()
//{
//	List lt;
//
//	InitList(lt);
//	AddList(lt, 100);
//	AddList(lt, 200);
//	AddList(lt, 300);
//	AddList(lt, 400);
//	AddList(lt, 500);
//
//	PrintList(lt);
//	UninitList(lt);
//}
//



//#include<stdio.h>//이중연결리스트, 일반적으로 head와 tail을 갖는다.
//#include<stdlib.h>//시험문제:그림을 그려놓고 그 그림에대한 코딩을 작성하시오정도로 나올듯
//struct Node
//{
//	Node* prev;
//	int data;
//	Node* next;
//};
//struct List
//{
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->next = n->prev = NULL;
//	return n;
//}
//void InitList(List &lt) 
//{
//	lt.head = AllocNode(0);
//	lt.tail = AllocNode(0);
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//}
//void UninitList(List &lt)
//{
//	for (Node* p = lt.head; p;)
//	{
//		Node* cur = p;
//		p = p->next;
//		free(cur);
//	}
//}
//void AddList(List& lt , int data)
//{
//	Node* n = AllocNode(data); //n인 새로운 노드 생성
//	lt.head->next = n;//새로 생성한 노드를 head와 이어주는 단계
//	n->prev = lt.head;
//	n->next = lt.tail;//tail과 이어주는 단계
//	lt.tail->prev = n;
//}
//int main()
//{
//	List lt; 
//
//	InitList(lt);
//	AddList(lt,100);
//	AddList(lt,200);
//	AddList(lt,300);
//	AddList(lt,400);
//	AddList(lt,500);//이렇게 되면 단일리스트처럼 다시 새롭게 달아진노드를 가르키므로 500이 출력
//
//	//PrintList(lt);
//	printf("%d\n", lt.head->next->data);//더해진 새로운 노드의 data를 출력
//	UninitList(lt);
//}




//#include<stdio.h>//이중연결리스트, 일반적으로 head와 tail을 갖는다.
//#include<stdlib.h>
//struct Node
//{
//	Node* prev;
//	int data;
//	Node* next;
//};
//struct List
//{
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->next = n->prev = NULL;
//	return n;
//}
//void InitList(List &lt) //참조가 반드시 되어야한다.
//{
//	lt.head = AllocNode(0);
//	lt.tail = AllocNode(0);
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//}
//void UninitList(List &lt)
//{
//	for (Node* p = lt.head; p;)
//	{
//		Node* cur = p;
//		p = p->next;
//		free(cur);
//	}
//}
//int main()
//{
//	List lt; //Node* head,Node* tail 지금 얘네 둘을 감추고 얘네의 형식을 List로하자고 한것. 전에는 head변수 따로,tail변수가 따로엿었는데 이제 lt라는 변수안에 하나로 합쳐서 사용한다.
//	
//	InitList(lt);
//
//	UninitList(lt);
//}




//#include<stdio.h>//이중연결리스트, 일반적으로 head와 tail을 갖는다.
//#include<stdlib.h>
//struct Node
//{
//	Node* prev;
//	int data;
//	Node* next;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->next = n->prev = NULL;
//	return n;
//}
//void InitList(Node* &head, Node* &tail)
//{
//	head = AllocNode(0);
//	tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//}
//void UninitList(Node* head, Node* tail)
//{
//	for (Node* p = head; p;)
//	{
//		Node* cur = p;
//		p = p->next;
//		free(cur);
//	}
//}
//
//int main()
//{
//	Node* head;
//	Node* tail;
//
//	
//	InitList(head, tail);
//}



//#include<stdio.h>//이중연결리스트, 일반적으로 head와 tail을 갖는다.
//#include<stdlib.h>
//struct Node
//{
//	Node* prev;
//	int data;
//	Node* next;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->next = n->prev = NULL;
//	return n;
//}
//int main()
//{
//	Node* head;
//	Node* tail;
//
//	head = AllocNode(0);//dummy node ,head,tail은 절때로 바뀌지않는다.
//	tail = AllocNode(0);//dummy node
//	//지금 서로가 서로를 가르키고있는 상황
//	head->next = tail;
//	tail->prev = head;
//}



#include<stdio.h>//리스트의 조건으로는 1.추가 2.삭제 3.조회가 가능해야한다. 단일연결리스트는 사용을 잘 안한다.
#include<stdlib.h>//배열은 인덱스번호로 삭제하지만, 연결리스트는 원소를 삭제할떄 직접 찾아서 삭제한다.
struct Node
{
	int data;
	Node* link;
};
Node* AllocNode(int data)
{
	Node* n = (Node*)malloc(sizeof(Node));
	n->data = data;
	n->link = NULL;
	return n;
}
void PrintNode(Node* head)
{
	for (Node* p = head; p->link; p = p->link) //for문의 조건부분은 참,거짓으로 볼것.더미노드의  p->link는  NULL이므로 for문을 나가게 된느것.
	{
		printf("%d ", p->data);
	}
	printf("\n");
}
void AddList(Node* &head, int data)
{
	Node* n = AllocNode(data);
	n->link = head;
	head = n;
}
void InitList(Node* &head)
{
	head = AllocNode(0);
}
void UninitList(Node* head)
{
	for (Node* p = head; p;)
	{
		Node* cur = p;
		p = p->link;
		free(cur);
	}
}
void EraseList(Node* head, int data) //노드를 그릴때 link부분 점표시로 표현하며 그려가며 이해할것
{
	Node* pp = head;//노드에 이전 위치를 기억해놔야한다
	Node* p = NULL; //for문은 조건을 보고 참이면 실행부 실행한 뒤 증감부분 실행한다.
	for (Node* p = head; p->link &&p->data != data;p = p->link) //for문의 조건부분:p->link가 참이고(NULL이나오면 거짓),p->data가 data가 아니라면 계속진행
	{
		pp = p;//p가 이동하기 직전에 pp에 담아주는것. 
	}
	if (p->link)//끝까지 돌았는데도 찾는원소가없었다면 ,,별 중요하지않는 코드 ,p->link가 NULL이아닐때 즉 참일때
	{
		pp->link = p->link;//pp의 링크가 이제 곧 없어질 p의 링크를 잇는다.
			free(p);//삭제하는 코드
	}
}
int main()
{
	Node* head;

	InitList(head); 
	AddList(head, 100);

	AddList(head, 200);

	AddList(head, 300);

	PrintNode(head);
	EraseList(head, 200);
	PrintNode(head);
	UninitList(head);
}



//#include<stdio.h>//리스트의 조건으로는 1.추가 2.삭제 3.조회가 가능해야한다.
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	return n;
//}
//void PrintNode(Node* head)
//{
//	for (Node* p = head; p->link; p = p->link) //dummmy node 0 때문에 일부러 이렇게 시작해준다.
//	{
//		printf("%d ", p->data);
//	}
//	printf("\n");
//}
//void AddList(Node* &head, int data)
//{
//	Node* n = AllocNode(data);
//	n->link = head;
//	head = n;
//}
//void InitList(Node* &head)
//{
//	head = AllocNode(0);//dummy node:부가적으로 필요해서 만든 노드
//}
//void UninitList(Node* head)//얜 참조안해도됌. ??
//{
//	for (Node* p = head; p;)//p가 이동하면서 삭제함.
//	{
//		Node* cur = p;//이렇게하는이유는 p가 이동해야되는데 free되는시점에서 p가 어디로가야할지 모르기떄문에 cur로 먼저 가르켜놓고 p를 이동시킨 난후에 cur이 가르키고잇는 애를 제거하면 된다.
//		p = p ->link;
//		free(cur);
//	}
//}
//int main()
//{
//	Node* head; 
//
//	InitList(head); //데이터를 사용할때는 이와같이 초기화와 마무리함수를 넣어주어야한다.
//	AddList(head, 100);
//
//	AddList(head, 200);
//
//	AddList(head, 300);
//
//	PrintNode(head);
//	UninitList(head);
//}



//#include<stdio.h>//리스트의 조건으로는 1.추가 2.삭제 3.조회가 가능해야한다.
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	return n;
//}
//void PrintNode(Node* head)
//{
//	if (head)
//	{
//		printf("%d  ", head->data);
//		PrintNode(head->link);
//	}
//}
//void AddList(Node* &head, int data)
//{	//아까 if문은 한번을 위해 계속 물어보므로 굉장ㅂ히 비효율적
//	//head가 NULL이 아니라는전제가 깔리면
//		Node* n = AllocNode(data);
//		n->link = head;
//		head = n;
//}
//int main()
//{
//	Node* head = AllocNode(0); //head에NULL대신
//
//	AddList(head, 100);
//
//	AddList(head, 200);
//
//	AddList(head, 300);
//
//	PrintNode(head);
//}



//#include<stdio.h>//리스트의 조건으로는 1.추가 2.삭제 3.조회가 가능해야한다.
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	return n;
//}
//void PrintNode(Node* head)
//{
//	if (head)
//	{
//		printf("%d  ", head->data);
//		PrintNode(head->link);
//	}
//}
//void AddList(Node* &head, int data) 
//{
//	if (head == NULL)
//	{
//		head = AllocNode(data);
//	}
//	else
//	{
//	//	Node* t = head;
//	//	while (t->link)
//	//		t = t->link;
//	//	t->link = AllocNode(data); //t는 tail끝노드의 꼬리이므로 끝에 새로운 노드를 달기위해서,t를 찾는방법은 끝노드이므로 t의 링크가 NULL인지 물어봐준다.
//	//하지만 위는 문제만 해결하는 코드이므로 좋은코드가아니다
//		Node* n = AllocNode(data);
//		n->link = head; //새로운 노드를 생성한후, 그 새로운노드가 head를 가르키고 head가 그 노드를 가르켜서 그노드가 head가 되게 만들어준다.
//		head = n;//head를 새로운 노드인 n으로 한다. 이제 head는 n이다.참조이므로 head의 값이 계속 바뀐다.
//	}
//}
//int main()
//{
//	Node* head = NULL;
//
//	AddList(head, 100);
//
//	AddList(head, 200);
//
//	AddList(head, 300);
//
//	PrintNode(head);
//}



//#include<stdio.h>//리스트의 조건으로는 1.추가 2.삭제 3.조회가 가능해야한다.
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	return n;
//}
//void PrintNode(Node* head)
//{
//	if (head)
//	{
//		printf("%d  ", head->data);
//		PrintNode(head->link);
//	}
//}
//void AddList(Node* &head, int data) //head에 참조를 해주어 원본 head로 만들어줌.
//{
//	if (head == NULL)
//	{
//		head = AllocNode(data);
//	}
//	else
//		head->link = AllocNode(data); //여기선 head의 link에 할당되므로 , 200노드가 생성되어도 300노드가 생성되면 head->link는 300을 가르키게 된다.
//}
//int main()
//{
//	Node* head = NULL;
//
//	AddList(head, 100); 
//
//	AddList(head, 200); 
//
//	AddList(head, 300); 
//
//	PrintNode(head);
//}



//#include<stdio.h>//리스트의 조건으로는 1.추가 2.삭제 3.조회가 가능해야한다.
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	return n;
//}
//void PrintNode(Node* head)
//{
//	if (head)
//	{
//		printf("%d", head->data);
//		PrintNode(head->link);
//	}
//}
//void AddList(Node* head, int data) //여기에잇는 head는 아래에 head와는 다른 복사본이므로 , 100을갖는 노드가 만들어졌지만 원본 head가 가르키진않으므로 컴파일은 되지만 출력은 안됨.
//{
//	if (head == NULL)
//	{
//		head = AllocNode(data);
//	}
//	else 
//		head->link = AllocNode(data);
//}
//int main()
//{
//	Node* head = NULL;
//	
//	AddList(head,100); //아래보다 더 깔끔하게 만듦.
//
//	AddList(head,200); //앞에 인자는 head를 주는 이유는 어디에 달릴껀지 상태를 알려주기위해서
//
//	AddList(head,300); //만일 head2가 들어가면 새로운 리스트가 만들어지는거라고 생각
//
//	PrintNode(head);
//}



//#include<stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	return n;
//}
//void PrintNode(Node* head)//재귀함수로 만들어보자
//{
//	if(head)
//	{
//		printf("%d", head->data); //선형적인 재귀,스택으로 쭉 쌓엿다가 반대로 쭉 올라간다.
//		PrintNode(head->link);
//	}
//}
//int main()
//{
//	Node* head = NULL;
//	Node* p = NULL;
//
//	p = AllocNode(100);
//	head = p;
//
//
//	p = AllocNode(200);
//
//	head->link = p;
//
//
//	p = AllocNode(300);
//	head->link->link = p;
//
//	PrintNode(head);
//}



//#include<stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	return n;
//}
//void PrintNode(Node* head)
//{
//	for (Node* p = head;p; p = p->link)
//	{
//		printf("%d", p->data);
//	}
//	printf("\n");
//}
//int main()
//{
//	Node* head = NULL;
//	Node* p = NULL;
//
//	p = AllocNode(100);
//	head = p;
//
//
//	p = AllocNode(200);
//  
//	head->link = p;
//
//
//	p = AllocNode(300);
//	head->link->link = p;
//
//	PrintNode(head);//head만 주면 모두 출력할수있다.
//}



//#include<stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data)//반복적인 작업이므로 함수로 만들어줌. 
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	return n;
//}
//int main()
//{
//	Node* head = NULL;
//	Node* p = NULL;
//
//	p = AllocNode(100);
//	head = p; //p자체는 원래 가르키는 애로 생성
//
//
//	p = AllocNode(200);
//
//	head->link = p;
//	
//
//	p = AllocNode(300); 
//	head->link->link = p;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", head->link->link->data);
//}



//#include<stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node* head = NULL;
//	Node* p = NULL;
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 100;
//	p->link = NULL;
//
//	head = p;
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 200;
//	p->link = NULL;
//
//	
//	head->link = p;
//	//이제는 200을 갖는 노드가 300을 갖고잇는 노드를 가르키고싶다면
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 300;
//	p->link = NULL;
//	head->link->link = p; //즉 200의 link이름을 p로 하겟다는말
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", head->link->link->data);
//}



//#include<stdio.h>//시험문제, 메모리그림 그려놓고 이렇게 짜게 만들수있음. 
//#include<stdlib.h>//아까는 head,p가 같은 노드를 가르켯지만 아래는 p가 200을이란 데이터를 갖는 새로운 노드를 가르키게 만든것.
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node* head = NULL;
//	Node* p = NULL;
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 100;
//	p->link = NULL;
//	
//	head = p;
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 200;
//	p->link = NULL;
//
//	//만일 head가 가르키는 노드가 p가 가르키는 노드를 가르키고싶다면
//	head->link = p; // data100을갖고있는 노드의 링크의 이름을 p로 하겟다.
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", p->data); //이거 역시 200
//}



//#include<stdio.h> //단일연결리스트 구현 , 구현하기위한 조건: 1.노드의생성이 실시간에 생성되어야한다.소멸(삭제)역시 마찬가지로 실시간으로 삭제되어야한다.노드가 n1,n2,n3가있을때 n2를 지우려면 애초에 n2가 없엇던 것처럼 n1이 n3를 가르키면 끝이다.
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node* head  = NULL;
//	Node* p = NULL;
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 100;
//	p->link = NULL;
//	//head,p라는 두 변수를 만들고 p가 100을 가르키고, head도 p가 가르킨것을 같이 가르킨다.head에 p를 주었기때문에
//	head = p;
//
//	printf("%d\n", head->data);
//}


//#include<stdio.h> //연결리스트 = 1.단일연결리스트(한쪽으로만 이동이 가능한), 2.이중 연결리스트(양쪽으로 이동이 가능한)
//struct Node 
//{
//	int data;
//	Node* link;
//};
//int main() 
//{
//	Node n1 = { 100 };
//	printf("%d\n", n1.data);
//}