#include <stdlib.h>
#include "Stack.h"	//Stack이 누구지 알려줘야한다. 이미 C,C++에서 제공하는 헤더는 <>를 치고 우리가 만든것은 큰따옴표를 친다.
void Push(Stack &s, int data) //함수의 실제 정의가 들어감, 실제 구현 코드
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