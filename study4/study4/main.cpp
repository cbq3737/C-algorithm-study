#include <stdio.h>
#include <stdlib.h>
#include <queue>
struct Node
{
	int data;
	Node* lChild;
	Node* rChild;
};

Node* AllocNode(int data)

{
	Node* n = (Node*)malloc(sizeof(Node));
	n->data = data;
	n->lChild = n->rChild = NULL;
	return n;
}

void Inorder(Node* root)

{
	if (root)
	{
		Inorder(root->lChild);
		printf("%d ", root->data);
		Inorder(root->rChild);
	}
}

void Preorder(Node* root)

{
	if (root)
	{
		printf("%d ", root->data);
		Preorder(root->lChild);
		Preorder(root->rChild);
	}
}
void Postorder(Node* root)
{
	if (root)
	{
		Postorder(root->lChild);
		Postorder(root->rChild);
		printf("%d ", root->data);
	}
}
void Levelorder(Node* root)

{

	std::queue<Node*> q;
	if (root == NULL)
		return;
	q.push(root);
	while (!q.empty())

	{

		Node* p = q.front(); q.pop();
		printf("%d ", p->data); // 1.
		if (p->lChild)
			q.push(p->lChild); //2.
		if (p->rChild)
			q.push(p->rChild); //3.
	}

}

Node* SearchTree(Node* root, int data)

{

	if (root == NULL)

		return NULL;

	if (root->data > data)

		return SearchTree(root->lChild, data);

	else if (root->data < data)

		return SearchTree(root->rChild, data);// 오른쪽

	else

		return root;

}

Node* AddTree(Node* root, int data)

{

	if (root == NULL)

		return AllocNode(data);

	else if (root->data > data)

		root->lChild = AddTree(root->lChild, data);

	else

		root->rChild = AddTree(root->rChild, data);

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



	Node* p = SearchTree(root, 60);

	if (p)

		printf("찾은 원소: %d\n", p->data);

	Inorder(root); printf("\n");

	Preorder(root); printf("\n");

	Postorder(root); printf("\n");

	Levelorder(root); printf("\n");

}



//#include <stdio.h>

//#include <stdlib.h>

//#include <queue>

//

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

//

//	return n;

//}

//void Inorder(Node* root)

//{

//	if (root)

//	{

//		Inorder(root->lChild);

//		printf("%d ", root->data);

//		Inorder(root->rChild);

//	}

//}

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

//

//	q.push(root);

//

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

//	if (root->data > data)

//		return SearchTree(root->lChild, data);

//	else if (root->data < data)

//		return SearchTree(root->rChild, data);// 오른쪽

//	else

//		return root;

//}

//int main()

//{

//	Node* root = NULL;	

//

//	root = AllocNode(50);

//	root->lChild = AllocNode(30);

//	root->rChild = AllocNode(70);

//

//	root->lChild->lChild = AllocNode(20);

//	root->lChild->rChild = AllocNode(40);

//	root->rChild->lChild = AllocNode(60);

//	root->rChild->rChild = AllocNode(90);

//

//	Node* p = SearchTree(root, 60);

//	if (p)

//		printf("찾은 원소: %d", p->data);

//

//	Inorder(root); printf("\n");

//	Preorder(root); printf("\n");

//	Postorder(root); printf("\n");

//	Levelorder(root); printf("\n");

//}



//#include <stdio.h>

//#include <stdlib.h>

//#include <queue>

//

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

//

//	return n;

//}

//void Inorder(Node* root)

//{

//	if (root)

//	{

//		Inorder(root->lChild);

//		printf("%d ", root->data);

//		Inorder(root->rChild);

//	}

//}

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

//	

//	q.push(root);

//	

//	while( !q.empty() )

//	{

//		Node* p = q.front(); q.pop();

//		printf("%d ", p->data); // 1.

//		if(p->lChild)

//			q.push(p->lChild); //2.

//		if(p->rChild)

//			q.push(p->rChild); //3.

//	}

//}

//int main()

//{

//	Node* root = NULL;

//	Node* p = NULL;

//

//	root = AllocNode(50);

//	root->lChild = AllocNode(30);

//	root->rChild = AllocNode(70);

//

//	root->lChild->lChild = AllocNode(20);

//	root->lChild->rChild = AllocNode(40);

//	root->rChild->lChild = AllocNode(60);

//	root->rChild->rChild = AllocNode(90);

//

//	Inorder(root); printf("\n");

//	Preorder(root); printf("\n");

//	Postorder(root); printf("\n");

//	Levelorder(root); printf("\n");

//}



//#include <stdio.h>

//#include <stdlib.h>

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

//

//	return n;

//}

//void Inorder(Node* root)

//{

//	if (root)

//	{

//		Inorder(root->lChild);

//		printf("%d ", root->data);

//		Inorder(root->rChild);

//	}

//}

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

//int main()

//{

//	Node* root = NULL;

//	Node* p = NULL;

//

//	root = AllocNode(50);

//	root->lChild = AllocNode(30);

//	root->rChild = AllocNode(70);

//

//	root->lChild->lChild = AllocNode(20);

//	root->lChild->rChild = AllocNode(40);

//	root->rChild->lChild = AllocNode(60);

//	root->rChild->rChild = AllocNode(90);

//

//	Inorder(root); printf("\n");

//	Preorder(root); printf("\n");

//	Postorder(root); printf("\n");

//}



//#include <stdio.h>

//#include <stdlib.h>

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

//

//	return n;

//}

//void Inorder(Node* root)

//{

//	if (root)

//	{

//		Inorder(root->lChild);

//		printf("%d ", root->data);

//		Inorder(root->rChild);

//	}

//}

//void Preorder(Node* root)

//{

//	if (root)

//	{

//		printf("%d ", root->data);

//		Preorder(root->lChild);

//		Preorder(root->rChild);

//	}

//}

//int main()

//{

//	Node* root = NULL;

//	Node* p = NULL;

//

//	root = AllocNode(50);

//	root->lChild = AllocNode(30);

//	root->rChild = AllocNode(70);

//

//	root->lChild->lChild = AllocNode(20);

//	root->lChild->rChild = AllocNode(40);

//	root->rChild->lChild = AllocNode(60);

//	root->rChild->rChild = AllocNode(90);

//

//	Inorder(root); printf("\n");

//	Preorder(root); printf("\n");

//}



//#include <stdio.h>

//#include <stdlib.h>

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

//

//	return n;

//}

//void Inorder(Node* root)

//{

//	if (root)

//	{

//		Inorder(root->lChild);

//		printf("%d ", root->data);

//		Inorder(root->rChild);

//	}

//}

//int main()

//{

//	Node* root = NULL;

//	Node* p = NULL;

//

//	root = AllocNode(50);

//	root->lChild = AllocNode(30);

//	root->rChild = AllocNode(70);

//

//	root->lChild->lChild = AllocNode(20);

//	root->lChild->rChild = AllocNode(40);

//	root->rChild->lChild = AllocNode(60);

//	root->rChild->rChild = AllocNode(90);

//	

//	Inorder(root);

//}



//#include <stdio.h>

//#include <stdlib.h>

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

//

//	return n;

//}

//int main()

//{

//	Node* root = NULL;

//	Node* p = NULL;

//

//	root = AllocNode(50);

//	root->lChild = AllocNode(30);

//	root->rChild = AllocNode(70);

//

//	root->lChild->lChild = AllocNode(20);

//	root->lChild->rChild = AllocNode(40);

//	root->rChild->lChild = AllocNode(60);

//	root->rChild->rChild = AllocNode(90);

//}