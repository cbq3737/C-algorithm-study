#pragma once
struct Stack //헤더에는 시그니쳐 정보(이런애들이있다.)와 , 구조체의 정보가 있어야한다.
{
	int* buf;
	int top;
};
void Push(Stack &s, int data);
int Pop(Stack &s);
void InitStack(Stack& s, int length=100);
void UnInitStack(Stack& s);