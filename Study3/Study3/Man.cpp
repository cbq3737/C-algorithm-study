#include<stdio.h>
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
			root = root -> lchild;
		}
		else if (root->data < data)
		{
			root = root->rchild;
		}
		else if (root->data == data)
		{
			return root;
		}
		if(root == NULL)
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
		printf("찾는 원소가 없습니다.");
	}
	Inorder(root); printf("\n");
	Preorder(root); printf("\n");
	Postorder(root); printf("\n");
	Levelorder(root);
}



//#include<stdio.h>
//#include<Windows.h>
//#include<stdlib.h>
//int image[10][10]=
//{
//		0,0,0,0,0,0,0,0,0,0,
//		0,0,0,1,1,1,1,0,0,0,
//		0,0,1,0,1,0,1,0,0,0,
//		0,0,0,0,0,0,1,0,0,0,
//		0,0,0,0,0,0,1,0,0,0,
//		0,0,5,5,5,5,0,0,0,0,
//		0,0,0,0,5,5,0,0,0,0,
//		0,0,0,0,5,0,5,0,0,0,
//		0,0,0,0,5,5,5,5,0,0,
//		0,0,0,0,0,0,5,5,5,0
//	};
//void PrintImage(int image[][10])
//{
//	system("cls");
//		for (int i = 0; i < 10; ++i)
//		{
//			for (int j = 0; j < 10; ++j)
//			{
//				printf("%3d", image[i][j]);
//			}
//			printf("\n");
//		}
//		Sleep(1300);
//}
//void _Fill(int image[][10], int i, int j, int newColor, int oldColor)
//{
//	if (i < 0 || i >= 10 || j < 0 || j >= 10)
//	{
//		return;
//	}
//	if (image[i][j] != oldColor)
//	{
//		return;
//	}
//	image[i][j] = newColor;
//	PrintImage(image);
//	_Fill(image, i - 1, j, newColor, oldColor); 
//	_Fill(image, i, j+1, newColor, oldColor);
//	_Fill(image, i + 1, j, newColor, oldColor);
//	_Fill(image, i , j-1, newColor, oldColor);
//}
//void Fill(int image[][10], int i, int j, int newColor)
//{
//	if (newColor != image[i][j])
//	{
//		_Fill(image, i, j, newColor, image[i][j]);
//	}
//}
//int main()
//{
//	Fill(image, 1, 4, 6);
//	PrintImage(image);
//}