//stack.h, stack.app�� ���� �ڵ�
#include<stdio.h>
#include"Stack.h"

int main() //���״�� �����Լ��� �����
{
	Stack st;
	printf("StackApp..\n");
	InitStack(st);
	Push(st, 100);
	Push(st, 200);	//�� 9������ ��ȣ �ֱ�,Ʋ���ڵ带 ã�ƶ�,����� �����, �ʱ�, ����ٷ� ����: ������ �ϼ��� �ڵ� �����
	Push(st, 300);	//������ ������ �ۼ��Ͻÿ�, ���� �Ѱ� �����̽� ���� ,�ΰ� �����̽� �ΰ� ���� �ΰ�, ���� ���� �����̽� �Ѱ� ���� ���� �ۼ��ض�

	printf("%d\n", Pop(st));
	printf("%d\n", Pop(st));
	printf("%d\n", Pop(st));
	UnInitStack(st);

	Stack st2;
	InitStack(st2, 10000); 
	Push(st2, 1050);
	printf("%d\n", Pop(st2));
	UnInitStack(st2);
}