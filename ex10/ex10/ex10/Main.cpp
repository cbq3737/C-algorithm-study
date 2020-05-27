#include<stdio.h>  //��ġ�Լ�����
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
		printf("ã�� ����:%d \n", p->data);
	}
	else
	{
		printf("ã�� ���Ұ� �����ϴ�.\n");
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
//	if (root->data > data) //����
//	{
//		return SearchTree(root->lchild, data); ////�������� ���°�
//	}
//	else if (root->data < data) //������
//	{
//		return SearchTree(root->rchild, data);
//	}
//	else
//	{
//		return root; //���⼭ root�� ã�� ����
//	}
//}
//Node* AddTree(Node* root, int data)
//{
//	if (root == NULL)
//	{
//		return AllocNode(data);
//	}
//	else if (root->data > data) //�����ͺ��� ������ 
//	{
//		root->lchild = AddTree(root->lchild, data);
//	}
//	else //�����ͺ��� Ŭ��
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
//	Node* p = SearchTree(root, 60);//�˻����ִ¾� , ��3���� ����Լ��� ȣ���
//	if (p) //����ã�Ҵٸ�
//	{
//		printf("ã�� ����: %d\n", p->data);
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
//	if (root->data > data) //����
//		return SearchTree(root->lChild, data);////�������� ���°�
//	else if (root->data < data)
//		return SearchTree(root->rChild, data);// ������
//	else
//		return root;//���⼭ root�� ã�� ����
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
//	Node* p = SearchTree(root, 60);//�˻����ִ¾� , ��3���� ����Լ��� ȣ���
//	if (p)//����ã�Ҵٸ�
//		printf("ã�� ����: %d", p->data);
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
//	std::queue<Node*> q; //�ȿ� int�� ���������ʴ´�
//	if (root ==NULL)
//	{
//		return;
//	}
//	q.push(root);
//	while (!q.empty())  //ť�� ����� ��� ����� �Լ�, ���� �ʾҴٸ� 
//	{  
//		Node* p = q.front(); q.pop(); //���� �տ��ִ� �ָ� ������ �������ش�.
//		printf("%d", p->data);//1��
//		if (p->lchild)
//		{
//			q.push(p->lchild); //2��
//
//		}
//		if (p->rchild)
//		{
//			q.push(p->rchild);//3��
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
//	Levelorder(root); //���ȭ��ǥ�� ���ؼ� �θ��°� �ƴ϶� Ʈ���� �ܼ��� �ܰ躰�� ���ʿ��� ���������� �����, ť�� �̿�,ť�� ó�� �θ�,1�ܰ� �ڽĵ����ְ� �� �ڽĵ��� ���� �Ǵٸ� �ڽĳ����� ť�� ����
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
////����Լ� ��������:lchild,rchild��� �����̾�����, 
//void Inorder(Node* root)
//{
//	if (root) 
//	{
//		Inorder(root->lchild);
//		printf("%d ", root->data);
//		Inorder(root->rchild);
//	}
//}
//void Preorder(Node* root) //����Լ������� ���̴� ������ �׸��پ˾ƾ��Ѵ�.������ ���ϳ������̴°� NULL
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
////����Լ� ��������:lchild,rchild��� �����̾�����, 
//void Inorder(Node* root)
//{
//	if (root) //null�� �ƴҶ� ����.�ǾƷ��� null�̹Ƿ� �����̾ȵǱ⋚���� ���������̶�� ���Ҽ��ִ�.
//	{
//		Inorder(root->lchild);//���� ���� 50����� 30��带 �ְ� ���� ����� �����ض�,���� ����� ���������� return�Ǽ� �Ʒ� �� ����
//		printf("%d ", root->data);//���ʸ�ΰ��ٿ����� ����ϰ�
//		Inorder(root->rchild);//������ �� ���ٿ�����
//	}//����Լ� 2��ȣ��̴ٴ°� ����ġ���� ȭ��ǥ��2����°� �ǹ�
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
//	Inorder(root); //�ٽ��� root���ͽ����ؼ� ������� ����� �ڽı��� ���µ� ���ڽ��� ������� �ٽ� �ǵ��ƿ� �θ� ����������Ѵ�.�ٽ� �ǵ��ư����Ұ��� �𸣱⶧����,�׷��� ������ �̿�:������ �ڵ尡������ ���������Ƿ� ����Լ��� �̿�
//	//Inorder�������� ����� �Ѵٸ� ���� ���ʾƷ��ִ� �͹̳γ�尡 ���� �����½����� ����̵Ǹ� �� ��µǸ� �����̵ȴ�.
//	//preorder�������δ� ����Ѵٸ� �θ�,����,���������� ����ϸ�ȴ�, postorder���� �θ� ���� �����̹Ƿ� 20�̰������������ 20,40,30,60,90,70...50������ ����
//	//LEVEl�� �� ���� ���������� �ܰ躰�� �������鼭 ���
//}


////����:�⸻�� ���� ��ư�,���� ������ ���
////Ʈ��:�˰��򿡼� ���� ���� ���� Ʈ��: 2��Ʈ��(��Ģ�� ���̰����ֱ⿡ �˻������� ����.) Ž��2��Ʈ��:�θ�,�ڽĳ�尣�� ��Ģ���������ִ°�(ex)�θ𺸴� �������ڽĳ�尡ū ��Ģ), ����2��Ʈ��:������ Ʈ������ �� ������ ������� ���Ҹ� ã�� �� �ִ�.
////html�� Ʈ���������� ǥ��, Ž���� �⺻ 4����:Inorder(�θ��带 �߽ɿ� Ž��,B'A'C),preorder(�θ� ���ϸ��� Ž��,'A'BC),postorder(�θ� ���ϳ��߿�,BC'A'),level-order(������ �������,'A'BC) , �⺻���� Ʈ��Ž���� ���ʿ��� �������̴�,���������� �θ� �������� ũ��ũ�� �׷����� ��ƺ���
////�Ϲ������� ���Ǵ� 2��Ž��Ʈ���˰���:�����? ,������� ABC���ִ�ġ�� A�� �θ�, B�� A�����۰�,C�� A���� ũ�ٶ�� ������ ����尡 �Ǿ������� Ž��2��Ʈ���� �θ����ִ�.
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
//	Node* p = NULL; //�ӽú����� �������.
//	//���� �θ𺸴� ������ �۰�,�������� ū ��Ģ
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