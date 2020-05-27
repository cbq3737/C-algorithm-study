//#include<stdio.h> 
//#include<stdlib.h>//AddNextList�� �ƴ�, AddPrevList�� ������(�Ϸ�), ���� ��ȸ��ĵ� �տ��� �ڷ� ��ȸ�ϰ��մµ�, �ڿ��� ������ ��ȸ�ϴ� ����� ������.
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
//void AddPrevList(List& lt, int data)//�տ������� ��� �߰� 
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
////////////////////////////////////////�̷� �������̽��� �����ؾ��Ѵ�.
//Node* GetHead(List& lt)
//{
//	return lt.head->next;
//}
//int HasNext(List& lt, Node* p)//��,������ ��ȯ
//{
//	return p != lt.tail;//p�� ���� �ƴϴ�?��� ����°� 
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
//void InsertList(List& lt, Node* p) //Delete�� �����ϱ�,���Ե� �ִ�.
//{
//
//}
//void DeleteList(List& lt, Node* p)
//{
//	Node* pp = p->prev;//���� ��� ����
//	Node* pn = p->next;//���� ��� ����
//	pp->next = pn;
//	pn->prev = pp;
//	free(p); // �յڳ������� �̾��ְ� ���� ����� p�� ���� 
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
//	AddPrevList(lt, 600);//�տ��ٰ� �����°�.
//
//	for (Node* p = GetHead(lt); HasNext(lt, p); p = Next(lt, p))//300�� ã��ʹٸ�,���� �� ���Ҹ� ã�Ҵٸ� �� ã�� ���Ҹ� �ְ� �����ϴ°�
//	{
//		if (300 == GetData(lt, p))//���� p�� ã�� ������ ������
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
//	for (Node* r = Gettail(lt); HasPrev(lt, r); r = Prev(lt, r)) //���� ��ȸ�� �ݴ�� �ϴ°�.
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
////////////////////////////////////////�̷� �������̽��� �����ؾ��Ѵ�.
//Node* GetHead(List& lt)
//{
//	return lt.head->next;
//}
//int HasNext(List& lt, Node* p)//��,������ ��ȯ
//{
//	return p != lt.tail;//p�� ���� �ƴϴ�?��� ����°� 
//}
//Node* Next(List& lt, Node* p)
//{
//	return p->next;
//}
//int GetData(List& lt, Node* p)
//{
//	return p->data;
//}
//void InsertList(List& lt, Node* p) //Delete�� �����ϱ�,���Ե� �ִ�.
//{
//
//}
//void DeleteList(List& lt, Node* p)
//{
//	Node* pp = p->prev;//���� ��� �ճ��,p�� ���� ���
//	Node* pn = p->next;//���� ��� �޵���
//	pp->next = pn;
//	pn->prev = pp;
//	free(p); // �յڳ������� �̾��ְ� ���� ����� p�� ���� 
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
//	for (Node* p = GetHead(lt); HasNext(lt, p); p = Next(lt, p))//300�� ã��ʹٸ�,���� �� ���Ҹ� ã�Ҵٸ� �� ã�� ���Ҹ� �ְ� �����ϴ°�
//	{
//		if (300 == GetData(lt, p))//���� p�� ã�� ������ ������
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
//void PrintNextList(List& lt) //�� ����Ʈ�ϴ°��� �����ϰ� �ܿ�� �Ʒ� �������̽��� �׳� �ܿ�
//{
//	for (Node* p = lt.head->next; p != lt.tail; p = p->next)
//	{
//		printf("%d ", p->data);
//	}
//	printf("\n");
//}
////////////////////////////////////////�̷� �������̽��� �����ؾ��Ѵ�.
//Node* GetHead(List& lt)
//{
//	return lt.head->next;
//}
//int HasNext(List& lt, Node* p)//��,������ ��ȯ �̹Ƿ� 0,1
//{
//	return p != lt.tail ;//p�� tail�� �ƴϸ� ��
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
//	//FindNextList(lt, 300);//�̰��� ���� �˾ƾ��� ���ŵ� �Ҽ� �ִ°��̴�.
//	for (Node* p = GetHead(lt);HasNext(lt,p) ; p = Next(lt,p))//�� �ڵ�� ó������ ������ ���Ҹ� ��ȸ�ϴ� �ڵ�,���Ḯ��Ʈ�� ��� ����Ʈ�� ó������ ������ ��ȸ�� �� �� �˾ƾ��Ѵ�. 
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
//	AddNextList(lt, 100); //��� ���������� ���� �ٸ��⶧����
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
//	Node* tail = lt.tail;//���� ������ �ָ� tail�տ� �����ֱ����ؼ� �̸��� �����ص�.
//	Node* ptail = tail->prev;//n�����ֱ����� tail�տ��ִ¾�
//
// //���⼭ ���� ����ֶ� �����ִ���.
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



//#include<stdio.h>//���߿��Ḯ��Ʈ, �Ϲ������� head�� tail�� ���´�.
//#include<stdlib.h>//���蹮��:�׸��� �׷����� �� �׸������� �ڵ��� �ۼ��Ͻÿ������� ���õ�
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
//	Node* n = AllocNode(data); //n�� ���ο� ��� ����
//	lt.head->next = n;//���� ������ ��带 head�� �̾��ִ� �ܰ�
//	n->prev = lt.head;
//	n->next = lt.tail;//tail�� �̾��ִ� �ܰ�
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
//	AddList(lt,500);//�̷��� �Ǹ� ���ϸ���Ʈó�� �ٽ� ���Ӱ� �޾�����带 ����Ű�Ƿ� 500�� ���
//
//	//PrintList(lt);
//	printf("%d\n", lt.head->next->data);//������ ���ο� ����� data�� ���
//	UninitList(lt);
//}




//#include<stdio.h>//���߿��Ḯ��Ʈ, �Ϲ������� head�� tail�� ���´�.
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
//void InitList(List &lt) //������ �ݵ�� �Ǿ���Ѵ�.
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
//	List lt; //Node* head,Node* tail ���� ��� ���� ���߰� ����� ������ List�����ڰ� �Ѱ�. ������ head���� ����,tail������ ���ο����µ� ���� lt��� �����ȿ� �ϳ��� ���ļ� ����Ѵ�.
//	
//	InitList(lt);
//
//	UninitList(lt);
//}




//#include<stdio.h>//���߿��Ḯ��Ʈ, �Ϲ������� head�� tail�� ���´�.
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



//#include<stdio.h>//���߿��Ḯ��Ʈ, �Ϲ������� head�� tail�� ���´�.
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
//	head = AllocNode(0);//dummy node ,head,tail�� ������ �ٲ����ʴ´�.
//	tail = AllocNode(0);//dummy node
//	//���� ���ΰ� ���θ� ����Ű���ִ� ��Ȳ
//	head->next = tail;
//	tail->prev = head;
//}



#include<stdio.h>//����Ʈ�� �������δ� 1.�߰� 2.���� 3.��ȸ�� �����ؾ��Ѵ�. ���Ͽ��Ḯ��Ʈ�� ����� �� ���Ѵ�.
#include<stdlib.h>//�迭�� �ε�����ȣ�� ����������, ���Ḯ��Ʈ�� ���Ҹ� �����ҋ� ���� ã�Ƽ� �����Ѵ�.
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
	for (Node* p = head; p->link; p = p->link) //for���� ���Ǻκ��� ��,�������� ����.���̳����  p->link��  NULL�̹Ƿ� for���� ������ �ȴ���.
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
void EraseList(Node* head, int data) //��带 �׸��� link�κ� ��ǥ�÷� ǥ���ϸ� �׷����� �����Ұ�
{
	Node* pp = head;//��忡 ���� ��ġ�� ����س����Ѵ�
	Node* p = NULL; //for���� ������ ���� ���̸� ����� ������ �� �����κ� �����Ѵ�.
	for (Node* p = head; p->link &&p->data != data;p = p->link) //for���� ���Ǻκ�:p->link�� ���̰�(NULL�̳����� ����),p->data�� data�� �ƴ϶�� �������
	{
		pp = p;//p�� �̵��ϱ� ������ pp�� ����ִ°�. 
	}
	if (p->link)//������ ���Ҵµ��� ã�¿��Ұ������ٸ� ,,�� �߿������ʴ� �ڵ� ,p->link�� NULL�̾ƴҶ� �� ���϶�
	{
		pp->link = p->link;//pp�� ��ũ�� ���� �� ������ p�� ��ũ�� �մ´�.
			free(p);//�����ϴ� �ڵ�
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



//#include<stdio.h>//����Ʈ�� �������δ� 1.�߰� 2.���� 3.��ȸ�� �����ؾ��Ѵ�.
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
//	for (Node* p = head; p->link; p = p->link) //dummmy node 0 ������ �Ϻη� �̷��� �������ش�.
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
//	head = AllocNode(0);//dummy node:�ΰ������� �ʿ��ؼ� ���� ���
//}
//void UninitList(Node* head)//�� �������ص���. ??
//{
//	for (Node* p = head; p;)//p�� �̵��ϸ鼭 ������.
//	{
//		Node* cur = p;//�̷����ϴ������� p�� �̵��ؾߵǴµ� free�Ǵ½������� p�� ���ΰ������� �𸣱⋚���� cur�� ���� �����ѳ��� p�� �̵���Ų ���Ŀ� cur�� ����Ű���մ� �ָ� �����ϸ� �ȴ�.
//		p = p ->link;
//		free(cur);
//	}
//}
//int main()
//{
//	Node* head; 
//
//	InitList(head); //�����͸� ����Ҷ��� �̿Ͱ��� �ʱ�ȭ�� �������Լ��� �־��־���Ѵ�.
//	AddList(head, 100);
//
//	AddList(head, 200);
//
//	AddList(head, 300);
//
//	PrintNode(head);
//	UninitList(head);
//}



//#include<stdio.h>//����Ʈ�� �������δ� 1.�߰� 2.���� 3.��ȸ�� �����ؾ��Ѵ�.
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
//{	//�Ʊ� if���� �ѹ��� ���� ��� ����Ƿ� ���夲�� ��ȿ����
//	//head�� NULL�� �ƴ϶�������� �򸮸�
//		Node* n = AllocNode(data);
//		n->link = head;
//		head = n;
//}
//int main()
//{
//	Node* head = AllocNode(0); //head��NULL���
//
//	AddList(head, 100);
//
//	AddList(head, 200);
//
//	AddList(head, 300);
//
//	PrintNode(head);
//}



//#include<stdio.h>//����Ʈ�� �������δ� 1.�߰� 2.���� 3.��ȸ�� �����ؾ��Ѵ�.
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
//	//	t->link = AllocNode(data); //t�� tail������� �����̹Ƿ� ���� ���ο� ��带 �ޱ����ؼ�,t�� ã�¹���� ������̹Ƿ� t�� ��ũ�� NULL���� ������ش�.
//	//������ ���� ������ �ذ��ϴ� �ڵ��̹Ƿ� �����ڵ尡�ƴϴ�
//		Node* n = AllocNode(data);
//		n->link = head; //���ο� ��带 ��������, �� ���ο��尡 head�� ����Ű�� head�� �� ��带 �����Ѽ� �׳�尡 head�� �ǰ� ������ش�.
//		head = n;//head�� ���ο� ����� n���� �Ѵ�. ���� head�� n�̴�.�����̹Ƿ� head�� ���� ��� �ٲ��.
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



//#include<stdio.h>//����Ʈ�� �������δ� 1.�߰� 2.���� 3.��ȸ�� �����ؾ��Ѵ�.
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
//void AddList(Node* &head, int data) //head�� ������ ���־� ���� head�� �������.
//{
//	if (head == NULL)
//	{
//		head = AllocNode(data);
//	}
//	else
//		head->link = AllocNode(data); //���⼱ head�� link�� �Ҵ�ǹǷ� , 200��尡 �����Ǿ 300��尡 �����Ǹ� head->link�� 300�� ����Ű�� �ȴ�.
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



//#include<stdio.h>//����Ʈ�� �������δ� 1.�߰� 2.���� 3.��ȸ�� �����ؾ��Ѵ�.
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
//void AddList(Node* head, int data) //���⿡�մ� head�� �Ʒ��� head�ʹ� �ٸ� ���纻�̹Ƿ� , 100������ ��尡 ����������� ���� head�� ����Ű�������Ƿ� �������� ������ ����� �ȵ�.
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
//	AddList(head,100); //�Ʒ����� �� ����ϰ� ����.
//
//	AddList(head,200); //�տ� ���ڴ� head�� �ִ� ������ ��� �޸����� ���¸� �˷��ֱ����ؼ�
//
//	AddList(head,300); //���� head2�� ���� ���ο� ����Ʈ�� ��������°Ŷ�� ����
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
//void PrintNode(Node* head)//����Լ��� ������
//{
//	if(head)
//	{
//		printf("%d", head->data); //�������� ���,�������� �� �׿��ٰ� �ݴ�� �� �ö󰣴�.
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
//	PrintNode(head);//head�� �ָ� ��� ����Ҽ��ִ�.
//}



//#include<stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data)//�ݺ����� �۾��̹Ƿ� �Լ��� �������. 
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
//	head = p; //p��ü�� ���� ����Ű�� �ַ� ����
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
//	//������ 200�� ���� ��尡 300�� �����մ� ��带 ����Ű��ʹٸ�
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 300;
//	p->link = NULL;
//	head->link->link = p; //�� 200�� link�̸��� p�� �ϰٴٴ¸�
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", head->link->link->data);
//}



//#include<stdio.h>//���蹮��, �޸𸮱׸� �׷����� �̷��� ¥�� ���������. 
//#include<stdlib.h>//�Ʊ�� head,p�� ���� ��带 ���������� �Ʒ��� p�� 200���̶� �����͸� ���� ���ο� ��带 ����Ű�� �����.
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
//	//���� head�� ����Ű�� ��尡 p�� ����Ű�� ��带 ����Ű��ʹٸ�
//	head->link = p; // data100�������ִ� ����� ��ũ�� �̸��� p�� �ϰٴ�.
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", p->data); //�̰� ���� 200
//}



//#include<stdio.h> //���Ͽ��Ḯ��Ʈ ���� , �����ϱ����� ����: 1.����ǻ����� �ǽð��� �����Ǿ���Ѵ�.�Ҹ�(����)���� ���������� �ǽð����� �����Ǿ���Ѵ�.��尡 n1,n2,n3�������� n2�� ������� ���ʿ� n2�� ������ ��ó�� n1�� n3�� ����Ű�� ���̴�.
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
//	//head,p��� �� ������ ����� p�� 100�� ����Ű��, head�� p�� ����Ų���� ���� ����Ų��.head�� p�� �־��⶧����
//	head = p;
//
//	printf("%d\n", head->data);
//}


//#include<stdio.h> //���Ḯ��Ʈ = 1.���Ͽ��Ḯ��Ʈ(�������θ� �̵��� ������), 2.���� ���Ḯ��Ʈ(�������� �̵��� ������)
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