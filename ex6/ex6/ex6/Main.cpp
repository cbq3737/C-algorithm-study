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

/////////////////////////////////////////2��Ʈ���� ����Լ��� ������ ��.
//#include<stdio.h> //����Լ�����:�Ǻ���ġ
//int Factorial(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return Factorial(n - 1)* n; //�Ʒ��� �������� �Լ� 
//}
//int main() {
//	int total = Factorial(5);
//	printf("%d\n", total);
//}



//#include<stdio.h> //����Լ�����:�Ǻ���ġ
////5! = 5*4! �� f(n) = n*f(n-1)�� �����ִ�. �̶� ������ n�� 1���� ū ��
//int Factorial(int n)//���丮���� 1����������
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	int result = Factorial(n - 1);
//	return result * n; //�ڽ��� ���� ���ؼ� result���� ��ȯ
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
		for (int i = 0; i < n; ++i)//�̰� ������������ �˼�����. ��� �ֵ��� ��ȸ�� �غ����Ѵ�.ex)������ ���ϰ����� �˼��ֳ�?���� Ȯ���غ����Ѵ�.�غ��������� �˼�����.�̰��� ������̶�� �� �� �ִ�.
		{
			Print(n - 1);
		}//�̷ε� ��������: ã������ ��� ��η� �����°�.
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
//		Print(n - 1);//Ʈ�� �׸����� �ϳ��� ������
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
//	printf("+%d\n", n); //���� ��µǴ°�
//	if (n > 0)
//	{
//		Print(n - 1);//�׸��׷��� Ʈ�����踦 ���� �ɰ�. ���� ���� �ι����Ѵٴ°�.
//		Print(n - 1);
//	}
//	printf("-%d\n", n); //��ȯ�ϸ� ��µǴ°�.
//}
//
//int main()
//{
//	Print(5);
//}



//#include<stdio.h> //���� ȣ���ߴ����� �ּҴ� ���ø޸��� ������ �ȴ�. �� return �ּ�, ��������� �Լ��� ���ÿ� ���� ������ �ȴ�. 
//void Print(int n)
//{
//	printf("%d\n", n);
//	if (n > 0)
//	{
//		Print(n - 1);
//	}//������� �Ʒ��� ���������̰�
//	printf("%d\n", n); //�����ڵ�� ����Լ��� �� ȣ��ǰ��� �� �Ʒ��������� ��ȯ�ɶ� ����̵Ȱ�.���ø޸𸮿� ���̴°��̶�� �����Ұ�. 
//}
//
//int main()
//{
//	Print(5);
//}



//#include<stdio.h> 
//void Print(int n)
//{
//	if (n <= 0) //����� ���� ����̰��� �ٸ��� ���´�. -> �̹� ����Լ��� �Ǵ��ϱ⶧����->0�̳����� ���ְ� ������ n<0���� ���ָ� �ȴ�.  
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
//	if (n <= 0)//�̷��� �����ع�����
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
//		Print(n - 1); //0�� ����̵Ǵ� ������ 0����µǾ���� ���������� �Ǵ��� �� �� �ֱ⋚����,0�̱⶧���� if���� �������ϹǷ� ��Ͱ� ���ᰡ�ȴ�.
//	}	//�̷������� �������� �̷��� ȣ���ϰ� �ٽ� ��ȯ�޴°��� ������Ͷ�� �Ѵ�.
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
//	Print(20);//n�� 20�̹Ƿ� ���ڸ��� ���������̵Ȱ�.
//}



//#include<stdio.h> 
//void Print(int n)
//{
//	printf("%d\n", n);
//	if (n < 10)
//	{
//		Print(n + 1);//����Լ���1.�������� 2.���������� ���߰� �־���Ѵ�.
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
	//		Print(n-1); //�������ǰ� ������������ �����ذ��� ������ �ִ�.�̷��� �Ǹ� ���� ����Լ�
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
//	if (n > 0)//����Լ��� ȣ�������ʴ� ������ ��������->���̿��ϱ�->������ �������ǿ� ������������
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
//	Print(5);//�� ����Լ��� �ڱ��ڽ��� ȣ�������� ���ǿ� �������������Ƿ� ����Լ���� �� �� ����.�켱 ���� ������ ����.
//}
//int main()
//{
//	Print(5);
//}



//#include<stdio.h> //����Լ�->�˰����� �ʼ�,����Լ�: �ڽ��� �Լ��� ��ȣ���ϴ� �Լ�//a�Լ� ������ a�Լ��� ȣ���ϴ°�:���� ���, a�Լ��� b�Լ�ȣ��, b�Լ��� a�Լ� ȣ��: ��������Լ�(���� �������� ����)
////������� ������ ����������̵ȴ�.�� main�Լ����� a,b�Լ��� ������, a�Լ��� �����̵ǰ��ִٸ� b�Լ��� a�Լ��� �� �Ϸᰡ�Ǳ������� �����ʴ´�.������ a���������������� �𸥴�.
// //��� �Լ��� �ڱ⸦ ȣ���� �����׸� �ݵ�� �ǵ��ư���(��ȯ,return�ȴ�.)(Ʈ���� ����,Ʈ���� �ǾƷ� ����Ǵ� �Լ��� �����ҋ� �߿��� ���� ��ɾ�� ������ ���°��� �ٸ���.�� �ൿ�� ���������� ���°��� �ٸ���. �׷��� ���� �Լ��Ʒ����� ��� ȣ��������� �ٸ��Լ���� �����ִ�.���� ���°��� ��� �������ٸ� ���ѷ������ǹ�����.)
// //ȭ�鿡 �ؽ�Ʈ�� ����ϴ� �ڵ� �ۼ�
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
//	//rear = rear + 1; //�� ���ڵ�� buf�� ��������� �����ʵ��� ���� ����ϴ� �ڵ��̴�.
//	//if (rear == 5)
//	//{
//	//	rear = 0;
//	//}
//	if ((rear + 1)%5 == front) // ���� front�� buf[1]����ġ���ְ�, rear���� buf[1]��ġ���� 5���� �־��ٸ� ���Ƽ� rear�� front���������� �̰� ���̾ȵȴ�.�������� ����ִ� ���´ϱ� ,Max-f?ũ��-1?,rear�� front�� �Ѱ����̰� ���ĸ� �˻��ظ� �غ����Ѵ�.rear�� �Ѱ������ϸ� front�� �������Եȴ�. �� r+1==f�� �����ִ»��°��ǹǷ� üũ�ϴ»����̴�.
//	{
//		return; //log�� ������.
//	}//�׷��� r+1�ڵ�� rear�� 4�� , front�� 0���ִٸ� rear�� ���ϸ� 5������ 0�̾ȵǹǷ� �������� �ʴ´�.�׷��� (rear + 1)%5�� �ڵ带 ���ִ°��̴�. ���� ���� ���� �߿��� �ڵ� 
//	rear = (rear + 1) % 5; //���� �ڵ�� ����.0,1,2,3,4 �ݺ�->�� ���� ó�� �����ϴ°��� buf[1]�̴�.front���� ��������
//	buf[rear] = data; //���� rear +1�� +1�� ���ְ� buf���� ����������++���ϸ� ���������� �غ���.
//}
//int Pop()
//{
//	if (front == rear) //���Ұ� ���������ʴ� ����, �츮���� ����ó��,����ť���� �߿��� ����
//	{
//		return -1;////����ť�� ���� �߿��� ������ front�� rear�� ������ ����մ� ����,�� ť�� �������� ��𼭺��� ���������� �߿������ʴ�. �׸��� �׷����� �����غ���
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
//	//�̷������� 3���־��ٰ� 3�������� buf�� �ƹ��͵� ���⶧���� �Ǵٽ� ������ �����ؾ��ϴµ� �Ұ����ϴ�.�̹� rear�� front�� �״��� ���� 4��°�� ����Ű�µ� �ű⼭ �Ȱ��� �۾����ϸ鼭 ��ġ�� �� �����ϸ� buf�� ������ �Ѿ������.�׷��� ����ϴ°� ����ť-> �� buf������ĭ���� ��ġ�������� �ٽ� 0���� ���� �Ǵ� ť,�� 0,1,2,3,4�� �ݺ�
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
//int buf[5];//������ �����Ҹ޸𸮰���
//int front = 0, rear = 0; //����Ǵ� ��ġ rear,���������ϴ� ��ġ front
//void Push(int data)//ť�� ����Ǵ� ��ġ�� �������� ��ġ�� �ٸ���. ���ð��� �ٸ�,�׷��⶧���� �� ��ġ�� �������ִ� ��ü�� �������.
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




//#include<stdio.h> //�Ʒ��� ťó�� ������.
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


//#include<stdio.h> //ť
//#include<queue>
//using namespace std;
//typedef queue<int> Queue;//typedef:int�� �����ϴ� queue�� Queue��� �θ��ڴ�.
//int main()
//{
//	Queue q;//Queue���� q��� ��ü 
//
//	q.push(10);
//	q.push(20);
//	q.push(30);
//
//	printf("%d\n", q.front());  q.pop();  //�����̾��ٸ� 30,20,10 ť�� 10,20,30������ �����⶧���� FIFO(First in First out) 
//	printf("%d\n", q.front());  q.pop();  //q���� ���� ���ʿ��մ³�����ȯ�ش޶�
//	printf("%d\n", q.front());  q.pop();
//	//printf("%d\n", q.front());  //q.pop(); //�����̷��� �־��ٸ� ���� �տ��ִ¿��Ҹ� ��� ��ȯ��.
//	//printf("%d\n", q.front());  //q.pop();
//	//printf("%d\n", q.front());  //q.pop();
//}