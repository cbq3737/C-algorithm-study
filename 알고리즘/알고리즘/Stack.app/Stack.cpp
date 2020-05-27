#include <stdlib.h>
#include "Stack.h"	//Stack�� ������ �˷�����Ѵ�. �̹� C,C++���� �����ϴ� ����� <>�� ġ�� �츮�� ������� ū����ǥ�� ģ��.
void Push(Stack &s, int data) //�Լ��� ���� ���ǰ� ��, ���� ���� �ڵ�
{
	s.buf[s.top++] = data;
}
int Pop(Stack &s)
{
	return s.buf[--s.top];
}
void InitStack(Stack& s, int length)
{
	s.buf = (int*)malloc(sizeof(int) * length);
	s.top = 0;
}
void UnInitStack(Stack& s)
{
	free(s.buf);
	s.top = 0;
}