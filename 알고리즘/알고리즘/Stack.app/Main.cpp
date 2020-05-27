//stack.h, stack.app는 서버 코드
#include<stdio.h>
#include"Stack.h"

int main() //말그대로 메인함수만 갖고옴
{
	Stack st;
	printf("StackApp..\n");
	InitStack(st);
	Push(st, 100);
	Push(st, 200);	//총 9문제는 괄호 넣기,틀린코드를 찾아라,출력을 적어라, 필기, 시험바로 전날: 손으로 완성된 코드 적어보기
	Push(st, 300);	//간단한 문제를 작성하시오, 별을 한개 스페이스 세개 ,두개 스페이스 두개 별을 두개, 별을 세개 스페이스 한개 별을 세개 작성해라

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