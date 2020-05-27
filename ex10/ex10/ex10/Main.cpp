#include<stdio.h>  //서치함수루프
#include<stdlib.h>
#include<queue>
struct Node
{
	int data;
	Node* lchild;
	Node* rchild;    
};
Node* AllocNode(int data)
{
	Node* n = (Node*)malloc(sizeof(Node));
	n->data = data;
	n->lchild = n->rchild = NULL;
	return n;
}
void Inorder(Node* root)
{
	if (root)
	{
		Inorder(root->lchild);
		printf("%d ", root->data);
		Inorder(root->rchild);
	}
}
void Preorder(Node* root)
{
	if (root)
	{
		printf("%d ", root->data);
		Preorder(root->lchild);
		Preorder(root->rchild);
	}
}
void Postorder(Node* root)
{
	if (root)
	{
		Postorder(root->lchild);
		Postorder(root->rchild);
		printf("%d ", root->data);
	}
}
void Levelorder(Node* root)
{
	std::queue<Node*> q;
	if (root == NULL)
	{
		return;
	}
	q.push(root);
	while (!q.empty())
	{
		Node* p = q.front(); q.pop();
		printf("%d ", p->data);
		if (p->lchild)
		{
			q.push(p->lchild);
		}
		if (p->rchild)
		{
			q.push(p->rchild);
		}
	}
}
Node* SearchTree(Node* root, int data)
{
	while (root != NULL)
	{
		if (root->data > data)
		{
			root = root->lchild;
		}
		else if (root->data < data)
		{
			root = root->rchild;
		}
		else if (root->data == data)
		{
			return root;
		}
		if (root == NULL)
		{
			return NULL;
		}
	}
}
Node* AddTree(Node* root, int data)
{
	if (root == NULL)
	{
		return AllocNode(data);
	}
	else if (root->data > data)
	{
		root->lchild = AddTree(root->lchild, data);
	}
	else
	{
		root->rchild = AddTree(root->rchild, data);
	}
	return root;
}
int main()
{
	Node* root = NULL;
	root = AddTree(root, 50);
	root = AddTree(root, 30);
	root = AddTree(root, 70);
	root = AddTree(root, 20);
	root = AddTree(root, 40);
	root = AddTree(root, 60);
	root = AddTree(root, 90);

	Node* p = SearchTree(root, 10);
	if (p != NULL)
	{
		printf("찾은 원소:%d \n", p->data);
	}
	else
	{
		printf("찾는 원소가 없습니다.\n");
	}
	Inorder(root); printf("\n");
	Preorder(root); printf("\n");
	Postorder(root); printf("\n");
	Levelorder(root);
}


//#include<stdio.h> 
//#include<stdlib.h>
//#include<queue>
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->lchild = n->rchild = NULL;
//	return n;
//}
//void Inorder(Node* root)
//{
//	if (root)
//	{
//		Inorder(root->lchild);
//		printf("%d ", root->data);
//		Inorder(root->rchild);
//	}
//}
//void preorder(Node* root)
//{
//	if (root)
//	{
//		printf("%d ", root->data);
//		preorder(root->lchild);
//		preorder(root->rchild);
//	}
//}
//void Postorder(Node* root)
//{
//	if (root)
//	{
//		Postorder(root->lchild);
//		Postorder(root->rchild);
//		printf("%d ", root->data);
//	}
//}
//void Levelorder(Node* root)
//{
//	std::queue<Node*> q;
//	if (root == NULL)
//	{
//		return;
//	}
//	q.push(root);
//	while (!q.empty())
//	{
//		Node* p = q.front(); q.pop();
//		printf("%d", p->data);
//		if (p->lchild)
//		{
//			q.push(p->lchild);
//		}
//		if (p->rchild)
//		{
//			q.push(p->rchild);
//		}
//	}
//}
//Node* SearchTree(Node* root, int data)
//{
//	if (root == NULL)
//	{
//		return NULL;
//	}
//	if (root->data > data) //왼쪽
//	{
//		return SearchTree(root->lchild, data); ////왼쪽으로 가는것
//	}
//	else if (root->data < data) //오른쪽
//	{
//		return SearchTree(root->rchild, data);
//	}
//	else
//	{
//		return root; //여기서 root는 찾은 원소
//	}
//}
//Node* AddTree(Node* root, int data)
//{
//	if (root == NULL)
//	{
//		return AllocNode(data);
//	}
//	else if (root->data > data) //데이터보다 작을때 
//	{
//		root->lchild = AddTree(root->lchild, data);
//	}
//	else //데이터보다 클때
//	{
//		root->rchild = AddTree(root->rchild, data);
//	}
//	return root;
//}
//int main()
//{
//	Node* root = NULL;
//	root = AddTree(root, 50);
//	root = AddTree(root, 30);
//	root = AddTree(root, 70);
//	root = AddTree(root, 20);
//	root = AddTree(root, 40);
//	root = AddTree(root, 60);
//	root = AddTree(root, 90);
//
//	Node* p = SearchTree(root, 60);//검색해주는애 , 총3번의 재귀함수가 호출됨
//	if (p) //만일찾았다면
//	{
//		printf("찾은 원소: %d\n", p->data);
//	}
//	Inorder(root); printf("\n");
//	preorder(root); printf("\n");
//	Postorder(root); printf("\n");
//	Levelorder(root);
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <queue>
//struct Node
//{
//	int data;
//	Node* lChild;
//	Node* rChild;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->lChild = n->rChild = NULL;
//	return n;
//}
//
//void Inorder(Node* root)
//{
//	if (root)
//	{
//		Inorder(root->lChild);
//		printf("%d ", root->data);
//		Inorder(root->rChild);
//	}
//}
//
//void Preorder(Node* root)
//{
//	if (root)
//	{
//		printf("%d ", root->data);
//		Preorder(root->lChild);
//		Preorder(root->rChild);
//	}
//}
//void Postorder(Node* root)
//{
//	if (root)
//	{
//		Postorder(root->lChild);
//		Postorder(root->rChild);
//		printf("%d ", root->data);
//	}
//}
//void Levelorder(Node* root)
//{
//	std::queue<Node*> q;
//	if (root == NULL)
//		return;
//	q.push(root);
//	while (!q.empty())
//	{
//		Node* p = q.front(); q.pop();
//		printf("%d ", p->data); // 1.
//		if (p->lChild)
//			q.push(p->lChild); //2.
//		if (p->rChild)
//			q.push(p->rChild); //3.
//	}
//}
//Node* SearchTree(Node* root, int data)
//{
//	if (root == NULL)
//		return NULL;
//	if (root->data > data) //왼쪽
//		return SearchTree(root->lChild, data);////왼쪽으로 가는것
//	else if (root->data < data)
//		return SearchTree(root->rChild, data);// 오른쪽
//	else
//		return root;//여기서 root는 찾은 원소
//}
//int main()
//{
//	Node* root = NULL;
//	root = AllocNode(50);
//	root->lChild = AllocNode(30);
//	root->rChild = AllocNode(70);
//
//	root->lChild->lChild = AllocNode(20);
//	root->lChild->rChild = AllocNode(40);
//
//	root->rChild->lChild = AllocNode(60);
//	root->rChild->rChild = AllocNode(90);
//
//	Node* p = SearchTree(root, 60);//검색해주는애 , 총3번의 재귀함수가 호출됨
//	if (p)//만일찾았다면
//		printf("찾은 원소: %d", p->data);
//	Inorder(root); printf("\n");
//	Preorder(root); printf("\n");
//	Postorder(root); printf("\n");
//	Levelorder(root); printf("\n");
//}



//#include<stdio.h>
//#include<stdlib.h>
//#include<queue>
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->lchild = n->rchild = NULL;
//	return n;
//}
//
//void Inorder(Node* root)
//{
//	if (root)
//	{
//		Inorder(root->lchild);
//		printf("%d ", root->data);
//		Inorder(root->rchild);
//	}
//}
//void Preorder(Node* root)
//{
//	if (root)
//	{
//		printf("%d ", root->data);
//		Preorder(root->lchild);
//		Preorder(root->rchild);
//	}
//}
//void Postorder(Node* root)
//{
//	if (root)
//	{
//		Postorder(root->lchild);
//		Postorder(root->rchild);
//		printf("%d ", root->data);
//	}
//}
//void Levelorder(Node* root)
//{
//	std::queue<Node*> q; //안에 int를 저장하지않는다
//	if (root ==NULL)
//	{
//		return;
//	}
//	q.push(root);
//	while (!q.empty())  //큐가 비었니 라고 물어보는 함수, 비지 않았다면 
//	{  
//		Node* p = q.front(); q.pop(); //제일 앞에있는 애를 꺼내고 제거해준다.
//		printf("%d", p->data);//1번
//		if (p->lchild)
//		{
//			q.push(p->lchild); //2번
//
//		}
//		if (p->rchild)
//		{
//			q.push(p->rchild);//3번
//		}
//	}
//}
//int main()
//{
//	Node* root = NULL;
//	Node* p = NULL;
//
//	root = AllocNode(50);
//	root->lchild = AllocNode(30);
//	root->rchild = AllocNode(70);
//
//	root->lchild->lchild = AllocNode(20);
//	root->lchild->rchild = AllocNode(40);
//
//	root->rchild->lchild = AllocNode(60);
//	root->rchild->rchild = AllocNode(90);
//
//	Inorder(root); printf("\n");
//	Preorder(root); printf("\n");
//	Postorder(root); printf("\n");
//	Levelorder(root); //얘는화살표를 통해서 부르는게 아니라 트리를 단순히 단계별로 왼쪽에서 오른쪽으로 출력함, 큐를 이용,큐에 처음 부모,1단게 자식들을넣고 그 자식들을 보고 또다른 자식노드들을 큐에 저장
//}



//#include<stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->lchild = n->rchild = NULL;
//	return n;
//}
//
//void Inorder(Node* root)
//{
//	if (root)
//	{
//		Inorder(root->lchild);
//		printf("%d ", root->data);
//		Inorder(root->rchild);
//	}
//}
//void Preorder(Node* root) 
//{
//	if (root)
//	{
//		printf("%d ", root->data);
//		Preorder(root->lchild);
//		Preorder(root->rchild);
//	}
//}
//void Postorder(Node* root)
//{
//	if (root)
//	{
//		Postorder(root->lchild);
//		Postorder(root->rchild);
//		printf("%d ", root->data);
//	}
//}
//int main()
//{
//	Node* root = NULL;
//	Node* p = NULL;
//
//	root = AllocNode(50);
//	root->lchild = AllocNode(30);
//	root->rchild = AllocNode(70);
//
//	root->lchild->lchild = AllocNode(20);
//	root->lchild->rchild = AllocNode(40);
//
//	root->rchild->lchild = AllocNode(60);
//	root->rchild->rchild = AllocNode(90);
//
//	Inorder(root);
//	Preorder(root);
//	Postorder(root);
//}



//#include<stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->lchild = n->rchild = NULL;
//	return n;
//}
////재귀함수 종료조건:lchild,rchild모두 갈곳이없을때, 
//void Inorder(Node* root)
//{
//	if (root) 
//	{
//		Inorder(root->lchild);
//		printf("%d ", root->data);
//		Inorder(root->rchild);
//	}
//}
//void Preorder(Node* root) //재귀함수로인해 쌓이는 스택을 그릴줄알아야한다.스택의 제일끝에쌓이는건 NULL
//{
//	if (root)
//	{
//		printf("%d ", root->data);
//		Preorder(root->lchild);
//		Preorder(root->rchild);
//	}
//}
//int main()
//{
//	Node* root = NULL;
//	Node* p = NULL;
//
//	root = AllocNode(50);
//	root->lchild = AllocNode(30);
//	root->rchild = AllocNode(70);
//
//	root->lchild->lchild = AllocNode(20);
//	root->lchild->rchild = AllocNode(40);
//
//	root->rchild->lchild = AllocNode(60);
//	root->rchild->rchild = AllocNode(90);
//
//	Inorder(root);
//	Preorder(root);
//}




//#include<stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->lchild = n->rchild = NULL;
//	return n;
//}
////재귀함수 종료조건:lchild,rchild모두 갈곳이없을때, 
//void Inorder(Node* root)
//{
//	if (root) //null이 아닐때 실행.맨아래는 null이므로 실행이안되기떄문에 종료조건이라고 말할수있다.
//	{
//		Inorder(root->lchild);//현재 내가 50노드라면 30노드를 주고 나의 기능을 수행해라,얘의 기능을 수행햇으면 return되서 아랫 줄 실행
//		printf("%d ", root->data);//왼쪽모두갓다왓으면 출력하고
//		Inorder(root->rchild);//오른쪽 다 갓다왓으면
//	}//재귀함수 2번호출됫다는건 내위치에서 화살표가2개라는걸 의미
//}
//int main()
//{
//	Node* root = NULL;
//	Node* p = NULL; 
//
//	root = AllocNode(50);
//	root->lchild = AllocNode(30);
//	root->rchild = AllocNode(70);
//
//	root->lchild->lchild = AllocNode(20);
//	root->lchild->rchild = AllocNode(40);
//
//	root->rchild->lchild = AllocNode(60);
//	root->rchild->rchild = AllocNode(90);
//	
//	Inorder(root); //핵심은 root부터시작해서 가장먼저 출력할 자식까지 가는데 그자식을 출력한후 다시 되돌아올 부모를 저장해줘야한다.다시 되돌아가야할곳을 모르기때문에,그래서 스택을 이용:하지만 코드가굉장히 복잡해지므로 재귀함수를 이용
//	//Inorder기준으로 출력을 한다면 제일 왼쪽아래있는 터미널노드가 먼저 나오는식으로 출력이되면 다 출력되면 정렬이된다.
//	//preorder기준으로는 출력한다면 부모,왼쪽,오른쪽으로 출력하면된다, postorder역시 부모가 제일 나중이므로 20이가장먼저나오고 20,40,30,60,90,70...50순으로 나옴
//	//LEVEl은 더 쉽게 위에서부터 단계별로 내려오면서 출력
//}


////시험:기말이 좀더 어렵고,저번 문제와 비슷
////트리:알고리즘에서 가장 많이 쓰는 트리: 2진트리(규칙을 많이갖고있기에 검색성능이 높다.) 탐색2진트리:부모,자식노드간의 규칙성을갖고있는것(ex)부모보다 오른쪽자식노드가큰 규칙), 균형2진트리:균형이 트리간에 잘 맞으면 몇번만에 원소를 찾을 수 있다.
////html도 트리형식으로 표현, 탐색의 기본 4가지:Inorder(부모노드를 중심에 탐색,B'A'C),preorder(부모를 제일먼저 탐색,'A'BC),postorder(부모를 제일나중에,BC'A'),level-order(레벨별 순서대로,'A'BC) , 기본적인 트리탐색은 왼쪽에서 오른쪽이다,복잡해지면 부모를 기준으로 크게크게 그려가며 잡아보자
////일반적으로 사용되는 2진탐색트리알고리즘:레드블랙? ,예를들어 ABC가있다치면 A가 부모, B가 A보다작고,C는 A보다 크다라는 전제가 모든노드가 되어있으면 탐색2진트리로 부를수있다.
//#include<stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->lchild = n->rchild = NULL;
//	return n;
//}
//int main()
//{
//	Node* root = NULL;
//	Node* p = NULL; //임시변수로 만들어줌.
//	//현재 부모보다 왼쪽은 작고,오른쪽은 큰 규칙
//	root = AllocNode(50);
//	root->lchild = AllocNode(30);
//	root->rchild = AllocNode(70);
//
//	root->lchild->lchild = AllocNode(20);
//	root->lchild->rchild = AllocNode(40);
//
//	root->rchild->lchild = AllocNode(60);
//	root->rchild->rchild = AllocNode(90);
//
//}