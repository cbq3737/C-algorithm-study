#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, mok, nmg;
	int a[12], b[14] = { 0 };
	while (1)
	{
		for (i = 0; i <= 11; i++)
			scanf("%d", &a[i]);
		if (a[0] == 0)
			break;
		else
			for (i = 0; i <= 11; i++)
				b[i + 2] += a[i];
	}
	for (i = 13; i >= 1; i--)
	{
		mok = b[i] / 10;
		nmg = b[i] - mok * 10;
		b[i] = nmg;
		b[i - 1] += mok;
	}
	if (b[0] == 0)
		j = 1;
	else
		j = 0;
	for (i = j; i <= 13; i++)
		printf("%d", b[i]);
}

//#include<stdio.h> //stack.h:��������,��������(�Լ�����,��ɾ�) ,stack.app:��ü ��ü�� ����,���� ����(�Լ�,��ɾ�)
//#include<stdlib.h>
//struct Stack
//{
//	int* buf; 
//	int top;
//};
//void Push(Stack &s, int data)
//{
//	s.buf[s.top++] = data;
//}
//int Pop(Stack &s)
//{
//	return s.buf[--s.top];
//}
//void InitStack(Stack& s, int length=100) 
//{
//	s.buf = (int*)malloc(sizeof(int) * length);
//	s.top = 0;
//}
//void UnInitStack(Stack& s)
//{
//	free(s.buf);
//	s.top = 0;
//}
//int main()
//{
//	Stack st;
//	InitStack(st);
//	Push(st, 100);
//	Push(st, 200);
//	Push(st, 300);
//
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	UnInitStack(st);
//
//	Stack st2;
//	InitStack(st2,10000); //���� �޸𸮸� 10000���� ����� �ʹٸ� �̷������� �Ѱ��ָ� ������ �ȴ�.
//	Push(st2, 1050);
//	printf("%d\n", Pop(st2));
//	UnInitStack(st2);
//}


//#include<stdio.h> 
//#include<stdlib.h>
//struct Stack
//{
//	int* buf; //� ������ 5��,10�� �ϰ�ͱ⶧���� �����س��°� ���������ʴ� �׷��� �ƿ� �ּҸ� �㵵�� �Ѵ�. ���� �ٸ� ũ���� �޸𸮸� ����Ű�⸸ �ϸ� �Ǵϱ�
//	int top;
//};
//void Push(Stack &s, int data)
//{
//	s.buf[s.top++] = data;
//}
//int Pop(Stack &s)
//{
//	return s.buf[--s.top];
//}
//void InitStack(Stack& s) //�ʱ�ȭ �Լ����� buf��� �Ǿ��ִ¾ָ� �޸𸮸� �������ִ°��̴�.
//{
//	s.buf = (int*)malloc(sizeof(int) * 5);
//	s.top = 0;
//}
//void UnInitStack(Stack& s)
//{
//	free(s.buf);
//	s.top = 0;
//}
//int main()
//{
//	Stack st;
//	InitStack(st);
//	Push(st, 100);
//	Push(st, 200);
//	Push(st, 300);
//
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	UnInitStack(st);
//
//	Stack st2;
//	InitStack(st2);
//	Push(st2, 1050);
//	printf("%d\n", Pop(st2));
//	UnInitStack(st2);
//}



//#include<stdio.h> 
//#include<stdlib.h>
//struct Stack
//{
//	int buf[5];
//	int top;
//};
//void Push(Stack &s, int data)
//{
//	s.buf[s.top++] = data;
//}
//int Pop(Stack &s)
//{
//	return s.buf[--s.top];
//}
//void InitStack(Stack& s)
//{
//	s.top = 0;
//}
//void UnInitStack(Stack& s)
//{
//	s.top = 0;
//}
//int main()
//{
//	Stack st;  
//	InitStack(st); 
//	Push(st, 100);
//	Push(st, 200);
//	Push(st, 300);
//
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	UnInitStack(st); //�׳� �ٽ� ó������ �ǵ������´ٴ� �ǹ��ε�?
//
//	Stack st2;
//	InitStack(st2);
//	Push(st2, 1050);
//	printf("%d\n", Pop(st2));
//	UnInitStack(st2);
//}


//#include<stdio.h> 
//#include<stdlib.h>
//struct Stack
//{
//	int buf[5];
//	int top;
//};
//void Push(Stack &s, int data)
//{
//	s.buf[s.top++] = data;
//}
//int Pop(Stack &s)
//{
//	return s.buf[--s.top];
//}
//void InitStack(Stack& s)//�ʱ�ȭ�� ���ֱ⶧���� returnŸ���� ����
//{
//	s.top = 0;
//}
//void UnInitStack(Stack& s) 
//{
//	s.top = 0;
//}
//int main()
//{
//	Stack st;  //stack �� ���������� �� �����ڵ�ȿ� ������ �ȴ�.�ٸ� �Լ����� �����ڰ� ������ c�� �ʱ�ȭ�Լ��� �ݵ�� ȣ���� ������Ѵ�.�� top�� ���� buf�� ��ŭ�Ǵ��� �𸥴ٴ� �Ҹ�
//	InitStack(st); //�ʱ�ȭ ���ִ� �Լ�
//	Push(st, 100);
//	Push(st, 200);
//	Push(st, 300);
//
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	UnInitStack(st); //�ʱ�ȭ�� �Լ��� ���������ִ� �Լ�
//
//	Stack st2; 
//	InitStack(st2);
//	Push(st2, 1050);
//	printf("%d\n", Pop(st2));
//	UnInitStack(st2);
//}


//#include<stdio.h> 
//#include<stdlib.h>
//struct Stack //���迡 �������� ������ �ѹ��� ��������°��� �����ش�. �̷��� �����س������� Ŭ������� �θ���.
//{
//	int buf[5];
//	int top;
//
//	void Push(int data)
//	{
//		buf[top++] = data;
//	}
//	int Pop()
//	{
//		return buf[--top];
//	}
//};
//int main()
//{
//	Stack st = { 0 }; //���� ���ڵ��� �������� 1. Ŭ���̾�Ʈ�� ������ ���θ� �����Ƿ� �ʱ�ȭ�� �̷������� �Ѵٴ°� ���̾ȵȴ�. �ֳĸ� ���� ������ ������ �������� �𸣱� ������. 2.������ü�� Ŭ���̾�Ʈ���� �ٲ��� ���ϰ� 5���� �����̵Ǿ��ִ�.
//
//	st.Push(100);
//	st.Push(200);
//	st.Push(300);
//
//	printf("%d\n", st.Pop());
//	printf("%d\n", st.Pop());
//	printf("%d\n", st.Pop());
//
//	Stack st2 = { 0 }; //�ϼ������Ͽ��⶧���� 0���� �ʱ�ȭ�� ������Ѵ�.
//	st2.Push(1050);
//	printf("%d\n", st2.Pop());
//}




//#include<stdio.h> 
//#include<stdlib.h>
//struct Stack
//{
//	int buf[5];
//	int top;
//};
//void Push(Stack &s, int data)
//{
//	s.buf[s.top++] = data;
//}
//int Pop(Stack &s)
//{
//	return s.buf[--s.top];
//}
//int main()
//{
//	Stack st = { 0 };
//
//	Push(st, 100);
//	Push(st, 200);
//	Push(st, 300);
//
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//
//	Stack st2 = { 0 }; //�ϼ������Ͽ��⶧���� 0���� �ʱ�ȭ�� ������Ѵ�.
//	Push(st2, 1050);
//	printf("%d\n", Pop(st2));
//}



//#include<stdio.h> 
//#include<stdlib.h>
//struct Stack
//{
//	int buf[5];
//	int top;
//};
//void Push(Stack &s, int data)
//{
//	s.buf[s.top++] = data;
//}
//int Pop(Stack &s)
//{
//	return s.buf[--s.top];
//}
//int main()
//{
//	Stack st = { 0 };
//
//	Push(st,100);
//	Push(st,200);
//	Push(st,300);
//
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//
//	Stack st2 = {0}; //�ϼ������Ͽ��⶧���� 0���� �ʱ�ȭ�� ������Ѵ�.
//	Push(st2, 1050);
//	printf("%d\n", Pop(st2));
//}


//#include<stdio.h> 
//#include<stdlib.h>
//struct Stack
//{
//	int buf[5];
//	int top;
//};
//void Push(int buf[], int& top, int data)
//{
//	buf[top++] = data;
//}
//int Pop(int buf[], int& top)
//{
//	return buf[--top];
//}
//int main()
//{
//	Stack st = {0};
//
//	Push(st.buf, st.top, 100);
//	Push(st.buf, st.top, 200);
//	Push(st.buf, st.top, 300);
//
//	printf("%d\n", Pop(st.buf, st.top));
//	printf("%d\n", Pop(st.buf, st.top));
//	printf("%d\n", Pop(st.buf, st.top));
//
//	int buf5[5]; 
//	int top5 = 0;
//	Push(buf5, top5, 1050);
//	printf("%d\n", Pop(buf5, top5));
//}



//#include<stdio.h> 
//#include<stdlib.h>
//
//void Push(int buf[], int* top, int data) 
//{
//	buf[(*top)++] = data; 
//}
//int Pop(int buf[], int& top)
//{
//	return buf[--top];
//}
//int main()
//{
//	int buf[5];
//	int top = 0;
//
//	Push(buf, &top, 100);//�̷��� ������ ���������� �Լ����� ������ �ȴ�.
//	Push(buf, &top, 200);
//	Push(buf, &top, 300);
//
//	printf("%d\n", Pop(buf, top));
//	printf("%d\n", Pop(buf, top));
//	printf("%d\n", Pop(buf, top));
//
//	int buf5[5]; //�Ǵٸ� ������ �ϳ� �� �����.
//	int top5 = 0;
//	Push(buf5, &top5, 1050);
//	printf("%d\n", Pop(buf5, top5));
//
//}




//#include<stdio.h> //���� �Ʒ� �ڵ忣 ������ �Ѱ��� ��������մ»������� ���� ���� 5,10���� �����ʹٸ�? �˰����� ������ ���� � ���º����� ���� ���� ù��° ������ �������� �ι�° ���ÿ� �������� �ִ�.
//#include<stdlib.h> //������ ������ �Ǹ� Ŭ���̾�Ʈ�ڵ带 �ٲٴ°ͺ��� ��� �ְ�,���� ����Ű�°͸� �ٲ��ָ� �ȴ�. ex)A.push(),B.push() ó�� ������ �ν��Ͻ��� �̸��� �����ش�. 
////int buf[5]; //buf[],top ��� ���� ������ ���º������ �� �� �ִ�.
////int top = 0;
//
//void Push(int buf[],int& top,int data) //top�� �������������� �ܺ��� ������ �̺����� ��� ��.���� &�� �Ⱥ��̸� ���纻�� �������� �����̱⶧���� ���纻�� ������ �ȴ�.&�� �ٷΰ���� ���� ����
//{
//	buf[top++] = data; //������ �������� ����� A��, ����� B�ǰ��� �ǵ��� ������Ѵ�.
//}
//int Pop(int buf[],int& top) //������ top�� ���������� �־��⶧���� ++,--�Ŀ� ������ �ѿ����վ��⶧���� ����������� ������ ���������̱⶧���� �ٽ� �ʱ�ȭ�� ��. �׷��� ������ �����ذŴ�.
//{
//	return buf[--top]; 
//}
//int main() //������� �� �������� �־���.
//{
//	int buf[5];
//	int top = 0;
//
//	Push(buf,top,100);
//	Push(buf,top,200);
//	Push(buf,top,300);
//
//	printf("%d\n", Pop(buf,top));
//	printf("%d\n", Pop(buf,top));
//	printf("%d\n", Pop(buf,top));
//}



//#include<stdio.h> 
//#include<stdlib.h> 
//int buf[5];
//int top = 0; 
//void Push(int data)
//{
//	buf[top++] = data; //�̹����� ����� top�� �������Ѷ�
//}
//int Pop()
//{
//	return buf[--top]; //�Ʒ��ڵ带 �̷��� ����ȭ�Ҽ��ִ�. top�� 1�������Ŀ� ���Ҹ� ��������� ��
//}
//int main() 
//{
//	Push(100); 
//	Push(200);
//	Push(300);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//}



//#include<stdio.h> //���ð� ť��� �ڷᱸ������ ����, ���ÿ��� �ڷᱸ��:1,�߻�ȭ(�����̶� �ڷᱸ���� ������� ����,���,� ����,� �ڷᱸ���� �ʿ��ұ�?) 2.�������̽�(���ÿ� �߻�ȭ�� �ֵ��� �����ϴ� ������ �ʿ���(�ֵ�(push()),����(pop()),Ȯ���غ���) �׷��� �Ϲ������� ��ɾ���� ������ �Լ���� �� �� �ִ�.) 
//#include<stdlib.h> //�ܺδ� �Ϲ������� Ŭ���̾�Ʈ(�������), ���δ� ����(���񽺸� �����ϴ� ��),//������ ������ ��������� ���� ��������� �迭, �� �װ��� ���������ؼ� �� ���� ��ġ�� �˾ƾ��Ѵ�.top�� ���� ��������Ű�� ��ġ�� �迭�� 0(���� �ƹ��͵� ��������)
//int buf[5];
//int top = 0; //��ġ�� �����ϴº���
//void Push(int data)
//{
//	buf[top] = data; //buf�� top�̶�� ��ġ�� data�� �����Ѵ�. 
//	++top; //������� 0�� ����Ű�� �־����Ƿ� �����Ҷ����� �ϳ��� �ö󰡰� ������־� ���⿡ �����ϸ� �ȴٶ�� �˷��ִ°�.
//}
//int Pop()
//{
//	int data = buf[top - 1];
//	--top;
//	return data;
//}
//int main() //�����ڵ�� �����̶� ���񽺸� ����ϴ� Ŭ���̾�Ʈ �ڵ�
//{
//	Push(100); //���ÿ� ���Ҹ� �ִ� �������̽�
//	Push(200);
//	Push(300);
//	
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//}



//#include<stdio.h> 
//#include<stdlib.h>
//int main()
//{
//	char* c;
//	int* p;
//	void* v;
//
//	p = (int*)malloc(5*sizeof(int)); //p��� ������ int���� �ּҸ� ��Ҵ�.�׷��� �� �ּҰ� ����Ű�� �迭�� ù������ *p�Ǵ� p[0]�̶�� �����ְ�, �״����� *(p+1),*(p+2)��� ���� �ö󰣴�.
//	c = (char*)p;
//	v = (void*)c; 
//
//	printf("%x %x %x\n", p, c, v); 
//	printf("%x %x %x\n", p + 1, c + 1, (int*)v + 1);
//	printf("%x %x %x\n", p + 1, c + 1, (char*)v + 1);
//
//	free(p);
//}



//#include<stdio.h> 
//#include<stdlib.h>
//int main()
//{
//	char* c;
//	int* p;
//	void* v;
//
//	p = (int*)calloc(5, sizeof(int));
//	c = (char*)p;
//	v = (void*)c; //void�� � �����̵� �� ���� �� �ִ�. 
//
//	printf("%x %x %x\n", p, c, v); 
//	printf("%x %x %x\n", p + 1, c + 1, (int*)v + 1);//���࿡ v�� intó�� �ٰ�ʹٸ� ���ĺ�ȯ�� ���ָ� �Ǵ°��̴�.   
//	printf("%x %x %x\n", p + 1, c + 1, (char*)v + 1);
//
//	free(p);
//}