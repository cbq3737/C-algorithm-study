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
//	Node* p = head; //head�� �нż��̶� ����
//	printf("%d\n", p->data); 
//	p = p->link; //�����ڵ�,������ �̵��ϴ� �ڵ� �������� �߿��� �ڵ�,p�� ����� �нż��� ���� p = p(����� �нż�)�� ����Ű�� ���� ��ũ
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
//	Node* head; //��尡 n1������Ű���ֱ⶧����, n1�˸� n2������Ҽ��ְ�, n2�� �˸� n3�� ����Ҽ������Ƿ� ��带 �˸� ��� ����� �� �ִ�.����� ��常 �˸� �ȴ�.
//
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//	printf("%d\n", head->data);//n1.data�� head�� ����Ű��, �� �����ϴ� �����Ͷ���� ���ִ�.
//	printf("%d\n", head->link->data);//n2���ǹ�, ���ظ� �Ҷ� ->�� "������"������, 
//	printf("%d\n", head->link->link->data);
//}


//#include<stdio.h> 
//struct Node
//{
//	int data;
//	Node* link;//������
//};
//int main()
//{
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node* head;
//
//	head = &n1;//��ó�� ������ �ǹ��ϴ� ��带 ����
//	n1.link = &n2; //n1�� ��ũ�� n2�� �ּҸ� ��ƶ�
//	n2.link = &n3;	//n1�� ������ �ϳ��� �˸� ���������� �� �˼��ִ�. ����Ǿ������Ƿ� 
//	printf("%d\n", n1.data);
//	printf("%d\n", n2.data);
//	printf("%d\n", n3.data);
//}



//#include<stdio.h> //���Ḯ��Ʈ ����
////�޸𸮸� �����ϰ� �����Ұ��̳�(Array-Based)(���������� ���������� ���������� �׿��ֱ⿡ ��ġ������ ������ �ʿ䰡����.)ex)��ť,����,array 
////(Node-Based)(��� �����͵� �����־���ϸ鼭�� ��ġ������ �����־���Ѵ�.)�޸𸮸� ���������ʰ� ������ �Ұ��̳�(�޸� ������ ������, �������ΰ� �����ͻ����� ���������� �߰� �޸𸮻����� �Ұ���, �޸𸮻����Ѵٴ°� �ٸ������ �ٽ� ����� �� �ֵ��� ������ִ°�.) �Ͱ��� �޸𸮸� �����ϴ� ����� �ΰ�������ۿ� ����. ex)��,���Ḯ��Ʈ
////���Ḯ��Ʈ�¹����� ������̴�.���μ��� ��尡 ���� �Ǿ��ִ�.���Ḯ��Ʈ�� Ư¡�� ������(����)���� ����Ǿ��־ ���� ����Ǿ��ִ� �ֵ鳢���� ������ �ȴ�.�� �ٸ� ���·δ� Ʈ������(�������)���ִ�.
////������ ����δ� ���� �������� ��ġ������ �����ִ�. ����ü�� �����غ���
//struct Node
//{
//	int data;//�����ͺ�
//	Node* link;//���� ����� �ּҸ� ��������Ƿ� Node�� �������ΰ�.
//};
//int main()
//{
//	Node n1 = { 10,NULL };//�ּҸ� ���� �ȳ־����Ƿ� NULL���
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
//	int list[20] = { 0,    20,50,70,65,25,45,92,38,76,60 };//���� Ȯ��
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
	Sort_heap(list, 10);//����,pop�������ؼ� ���������� �����Ѵ�. ������� ���������¿��� ��ȿ�ϴ�.
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
//		if (child < size && list[child] < list[child + 1])//20���� �� ��������,25�� 20�� ���ԵǴ»�Ȳ����, ����������°� child+1�� ��ȿ�����Ͱ� �ƴѵ� �񱳵ǹ����ϱ� �������ȴ�.
//		{	//child�� size���� �������� ������ �ؾ��ϹǷ� &&�� �־��ش�.
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
//	Pop_heap(list, heapSize);//�̷��� �� �������� ������ �����.
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
//		Push_heap(list, ++list[0]); //�հ� ���質�û�
//	}
//}
//void Pop_heap(int list[], int& size)//size���� ���ذ����ϹǷ� ������ �ش�. ���� �����κ� ����
//{
//	--size;
//	list[0] = size; //��ó�� 0���� �������ϹǷ� 
//	Swap(list[1], list[size + 1]);//�켱������ �� �Ʒ��� root�� �ٲ��ش�.
//	int parent = 1; //root�̹Ƿ� index 1��
//	int child = parent * 2; //���� �ڽ��� ���� �� ū�� ���Ѵ�.
//	while (child <= size)//��� ���ư��� child�� ������ ��ȿ���� �������� �ȵǹǷ� 
//	{ //while�κоȿ� ������ ���� ���û�
//		if (list[child] < list[child + 1])
//		{
//			child = child + 1;//���� parent�� ���ϱ����� ū������ �ٲ��صڿ� 
//		}
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);//������ �ٲ�Z���� ���� root��child�� �ٲ�
//		}
//		else //�� �̻� �����ϸ� �ȵɶ�,
//			break;
//		parent = child;//�Ʊ� child�� ���� parent�� �Ǿ����Ƿ� ,�ε�����ȣ�� ���ϴ°���
//		child = parent * 2; //���� ������ ���� �̷��� ���ָ� child�� size�� �ѰԵǼ� �����ԵǴ� ����
//	}
//}
//int main()//heap�� stackó�� ������ ���޶� �������ϰ� ����ۿ� ���Ѵ�. �׷� root�� ������ size�� �پ��
//{
//	//int list[20] = { 10,    20,50,70,65,25,45,92,38,76,60 };
//	int list[20] = { 0,   70,20,50,60,25,45,92,38,76,65 };
//	int heapSize = 10;//���� �� heap�� �� �����Ǿ������Ƿ� 10���λ���
//
//	Make_heap(list, 10);
//	PrintList(list, 10);
//	Pop_heap(list, heapSize);//Pop�� ���ڿ��� �ּҷ� �ޱ⶧���� ������ ��� �ָ� �ȵȴ�.
//	PrintList(list, 10);//92�� �ǵڿ��մٴ°� ���Դٴ°�.
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
//	int parent = child / 2;//�ε�����ȣ�� ����, �ε��� 0�� size�� ��Ÿ���� �ְ�,�ε���1���� �����̹Ƿ� ������ 2�� ����.(�׸��׷��� ����)
//	while (parent >= 1 ) //���⼱ while�� �ȿ��� ���� �ٽ����� �ڵ�,parent�� 0�� �ε������� �Ȱ������ؼ�,0���� parent�� ������ size�� ��
//	{
//		if (list[child] > list[parent])//�� ������ ���� �θ� Ȯ���ؼ� ���� �ٲ�� 
//		{
//			Swap(list[child], list[parent]);
//		}
//		else//while���� ����������.�� if�� �ƴϸ� �ö� �ʿ䰡���⶧���� ���⼭ �׸��ְ� �������.
//			break;
//		child = parent; //�Ʒ��ִ��ְ� �ö󰡴ϱ� child�����ְ� �θ� �ǰ� ������ִ°�.
//		parent = child / 2;
//	}
//}
//int main()
//{
//	//int list[20] = { 10,    20,50,70,65,25,45,92,38,76,60 };
//	int list[20] = { 3,   70,20,50,60,25,45,92,38,76,65 }; //70,20,50�� �̹� 3���� ���� ���Ǳ����� �Ǿ��ִٰ� ����,60���� ���°���.
//	int heapSize = 3;//���� 3���� �Ǿ����Ƿ� 
//	PrintList(list, 10);
//
//	//���� �ִ� �ڵ�
//	Push_heap(list,++heapSize);//��������� 1�������Ǽ� �����ϹǷ�,��ó������ �ֱ� ���ϴϱ� ���ȿ� �����Ͱ� �տ� 3������(70����) �̵̹��ִٰ� ��������
//	Push_heap(list, ++heapSize); //25�� �־��ش�.
//	Push_heap(list, ++heapSize);  //45�־���
//	PrintList(list, 10);
//	Push_heap(list, ++heapSize); //92�ε� ó������ root���� ū�ְ� ó������ ����
//	PrintList(list, 10);
//
//}




//#include<stdio.h> 
//#include<algorithm>
//using namespace std;
//void PrintList(int list[],int size)
//{
//	printf("size: %d\n", list[0]);
//	for (int i = 1; i <= size; ++i) //0�� ��������ʱ����� 1����
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int list[11] = { 10,20,50,70,65,25,45,92,38,76,60 };//������ 11���� ������ 0�ε����� �����ʱ⶧����,�տ� 10�� size�� �ǹ��Ѵ�
//
//	PrintList(list, 10);
//}


//#include<stdio.h> //�Ʒ����� �ߴ� �װ��� ����� ���� �����ڴ�.
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int list[10] = { 20,50,70,65,25,45,92,38,76,60 };
//
//
//	//make_heap(list, list + 10);
//	push_heap(list, list + 1);//0���߰�, �ڿ� ���ڴ� ���ͷ�����, ���Ҹ� n��°�� �߰��ϰڴٴ� ��
//	push_heap(list, list + 2);//1���߰�
//	push_heap(list, list + 3);
//	push_heap(list, list + 4);
//	push_heap(list, list + 5);
//	push_heap(list, list + 6);
//	push_heap(list, list + 7);
//	push_heap(list, list + 8);
//	push_heap(list, list + 9);
//	push_heap(list, list + 10);
//
//	//sort_heap(list, list + 10); //10���� ���Ҹ� ���Ľ��Ѷ�
//	pop_heap(list, list + 10);//pop:����
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



//#include<stdio.h> //�������� �����ϱ� ���ؼ� �� �ڷᱸ���� �켱������ �������ؾ���.
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
//	sort_heap(list,list+10); //10���� ���Ҹ� ���Ľ��Ѷ�
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}


//#include<stdio.h> //�������� �����ϱ� ���ؼ� �� �ڷᱸ���� �켱������ �������ؾ���.
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int list[10] = {20,50,70,65,25,45,92,38,76,60};
//	//����� �ڽĵ��� �ڽ��� ��ȣ�� ������ 2*n+1,�������� 2*n+2
//	
//	//make_heap(list, list + 10);//�������� ����� �Լ�
//	push_heap(list, list + 1);//�������� ���� ������ �Ǵ��� ���������� �غ���
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