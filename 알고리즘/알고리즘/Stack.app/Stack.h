#pragma once
struct Stack //������� �ñ״��� ����(�̷��ֵ����ִ�.)�� , ����ü�� ������ �־���Ѵ�.
{
	int* buf;
	int top;
};
void Push(Stack &s, int data);
int Pop(Stack &s);
void InitStack(Stack& s, int length=100);
void UnInitStack(Stack& s);