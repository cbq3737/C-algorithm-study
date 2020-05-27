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

//#include<stdio.h> //stack.h:간략정보,선언정보(함수선언,명령어) ,stack.app:실체 구체적 정보,정의 정보(함수,명령어)
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
//	InitStack(st2,10000); //만약 메모리를 10000개를 만들고 싶다면 이런식으로 넘겨주면 생성이 된다.
//	Push(st2, 1050);
//	printf("%d\n", Pop(st2));
//	UnInitStack(st2);
//}


//#include<stdio.h> 
//#include<stdlib.h>
//struct Stack
//{
//	int* buf; //어떤 스택은 5개,10개 하고싶기때문에 고정해놓는건 정말좋지않다 그래서 아예 주소를 담도록 한다. 각기 다른 크기의 메모리를 가르키기만 하면 되니까
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
//void InitStack(Stack& s) //초기화 함수에서 buf라고 되어있는애를 메모리를 생성해주는것이다.
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
//	UnInitStack(st); //그냥 다시 처음으로 되돌려놓는다는 의미인듯?
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
//void InitStack(Stack& s)//초기화를 해주기때문에 return타입이 없음
//{
//	s.top = 0;
//}
//void UnInitStack(Stack& s) 
//{
//	s.top = 0;
//}
//int main()
//{
//	Stack st;  //stack 을 만든사람만이 저 서비스코드안에 구조를 안다.다른 함수들은 생성자가 잇지만 c는 초기화함수를 반드시 호출을 해줘야한다.즉 top이 뭘지 buf가 얼만큼되는지 모른다는 소리
//	InitStack(st); //초기화 해주는 함수
//	Push(st, 100);
//	Push(st, 200);
//	Push(st, 300);
//
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	UnInitStack(st); //초기화한 함수를 마무리해주는 함수
//
//	Stack st2; 
//	InitStack(st2);
//	Push(st2, 1050);
//	printf("%d\n", Pop(st2));
//	UnInitStack(st2);
//}


//#include<stdio.h> 
//#include<stdlib.h>
//struct Stack //시험에 나오지는 않지만 한번에 묶어버리는것을 보여준다. 이렇게 정의해놓은것을 클래스라고 부른다.
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
//	Stack st = { 0 }; //현재 이코드의 문제점은 1. 클라이언트가 서버의 내부를 못보므로 초기화를 이런식으로 한다는건 말이안된다. 왜냐면 내부 구조나 변수가 무엇인지 모르기 때문에. 2.버프자체를 클라이언트에서 바꾸지 못하고 5개로 고정이되어있다.
//
//	st.Push(100);
//	st.Push(200);
//	st.Push(300);
//
//	printf("%d\n", st.Pop());
//	printf("%d\n", st.Pop());
//	printf("%d\n", st.Pop());
//
//	Stack st2 = { 0 }; //완성을덜하엿기때문에 0으로 초기화를 해줘야한다.
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
//	Stack st2 = { 0 }; //완성을덜하엿기때문에 0으로 초기화를 해줘야한다.
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
//	Stack st2 = {0}; //완성을덜하엿기때문에 0으로 초기화를 해줘야한다.
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
//	Push(buf, &top, 100);//이렇게 보내면 저런식으로 함수에서 받으면 된다.
//	Push(buf, &top, 200);
//	Push(buf, &top, 300);
//
//	printf("%d\n", Pop(buf, top));
//	printf("%d\n", Pop(buf, top));
//	printf("%d\n", Pop(buf, top));
//
//	int buf5[5]; //또다른 스택을 하나 더 만든것.
//	int top5 = 0;
//	Push(buf5, &top5, 1050);
//	printf("%d\n", Pop(buf5, top5));
//
//}




//#include<stdio.h> //지금 아래 코드엔 스택이 한개만 만들어져잇는상태지만 만약 내가 5,10개를 만들고싶다면? 알고리즘이 동작한 내가 어떤 상태변수에 따라서 내가 첫번째 스택을 넣을수도 두번째 스택에 넣으수도 있다.
//#include<stdlib.h> //스택이 세개나 되면 클라이언트코드를 바꾸는것보다 어디에 넣고,뺄지 가르키는것만 바꿔주면 된다. ex)A.push(),B.push() 처럼 독립된 인스턴스의 이름을 정해준다. 
////int buf[5]; //buf[],top 얘네 둘을 스택의 상태변수라고 볼 수 있다.
////int top = 0;
//
//void Push(int buf[],int& top,int data) //top을 참조해준이유는 외부의 변수가 이변수다 라는 뜻.만약 &을 안붙이면 복사본인 독립적인 변수이기때문에 복사본이 증가가 된다.&는 바로가기와 같은 개념
//{
//	buf[top++] = data; //스택이 여러개면 어떨때는 A것, 어떨때는 B의것이 되도록 해줘야한다.
//}
//int Pop(int buf[],int& top) //전에는 top이 전역변수로 있었기때문에 ++,--후에 여전히 겉에서잇었기때문에 상관없었지만 이제는 지역변수이기때문에 다시 초기화가 됨. 그래서 참조를 시켜준거다.
//{
//	return buf[--top]; 
//}
//int main() //여기까진 한 군데에만 넣엇다.
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
//	buf[top++] = data; //이문장을 벗어날때 top을 증가시켜라
//}
//int Pop()
//{
//	return buf[--top]; //아래코드를 이렇게 간략화할수있다. top을 1감소한후에 원소를 던져줘라라는 뜻
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



//#include<stdio.h> //스택과 큐라는 자료구조관련 수업, 스택에서 자료구조:1,추상화(스택이란 자료구조를 만들려면 무엇,멤버,어떤 동작,어떤 자료구조가 필요할까?) 2.인터페이스(스택에 추상화된 애들을 소통하는 역할이 필요함(넣든(push()),빼든(pop()),확인해보든) 그래서 일반적으로 명령어들의 집합인 함수라고 알 수 있다.) 
//#include<stdlib.h> //외부는 일반적으로 클라이언트(사용자측), 내부는 서버(서비스를 제공하는 측),//스택의 구조를 만들기위해 가장 좋은방법은 배열, 또 그것을 꺼내기위해서 그 값의 위치를 알아야한다.top이 제일 먼저가르키는 위치는 배열의 0(아직 아무것도 들어오기전)
//int buf[5];
//int top = 0; //위치를 저장하는변수
//void Push(int data)
//{
//	buf[top] = data; //buf의 top이라는 위치에 data를 저장한다. 
//	++top; //가장먼저 0을 가르키고 있었으므로 저장할때마다 하나씩 올라가게 만들어주어 여기에 저장하면 된다라고 알려주는것.
//}
//int Pop()
//{
//	int data = buf[top - 1];
//	--top;
//	return data;
//}
//int main() //여기코드는 스택이란 서비스를 사용하는 클라이언트 코드
//{
//	Push(100); //스택에 원소를 넣는 인터페이스
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
//	p = (int*)malloc(5*sizeof(int)); //p라는 변수에 int형의 주소를 담았다.그래서 그 주소가 가르키는 배열의 첫번쨰는 *p또는 p[0]이라고 볼수있고, 그다음은 *(p+1),*(p+2)등등 으로 올라간다.
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
//	v = (void*)c; //void는 어떤 형식이든 다 담을 수 있다. 
//
//	printf("%x %x %x\n", p, c, v); 
//	printf("%x %x %x\n", p + 1, c + 1, (int*)v + 1);//만약에 v를 int처럼 뛰고싶다면 형식변환을 해주면 되는것이다.   
//	printf("%x %x %x\n", p + 1, c + 1, (char*)v + 1);
//
//	free(p);
//}