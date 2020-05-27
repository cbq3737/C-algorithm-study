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
//	printf("%x %x %x\n", p, c,v); //시작주소가동일하기때문에 모두 같은 주소이다. p는 intㅇ형의 주소, c는 char형의 주소, v는 알수없는 주소
//	printf("%x %x %x\n", p + 1, c + 1, v+1); //즉 v+1은 안된다. 알수없는 주소이기때문에 건너뛸수있는 크기를모른다. 즉 오류가 맞다.
//
//	free(p);
//}



//#include<stdio.h> 
//#include<stdlib.h>
//int main()
//{
//	char* c; //보통 이렇게 포인터를 정해줄것이라면 먼저 선언을 해주어야 한다.
//	int* p;
//
//	p = (int*)calloc(5, sizeof(int)); 
//	c = (char*)p;
//	 
//	printf("%x %x\n", p, c);
//	printf("%x %x\n", p+1, c+1); //똑같은 주소인데 둘다 1을더하면 char형 주소이므로 1바이트가 건너뛰므로 다르게 나온다
//
//	free(p);
//}



//#include<stdio.h> 
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(5,sizeof(int)); //count memory allocation, 갯수따로 메모리의 크기 따로
//	for (int i = 0; i < 5; ++i)
//	{
//		p[i] = (i + 1) * 10;
//	}
//	for (int i = 0; i < 5; ++i)
//	{
//		printf("%10x", p + i); //x는 주소를 출력, 16진수
//	}
//	printf("\n");
//
//	free(p);
//}


//#include<stdio.h> 
//#include<stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 5); 
//	for (int i = 0; i < 5; ++i)
//	{
//		p[i] = (i + 1) * 10;
//	}
//	for (int i = 0; i < 5; ++i)
//	{
//		printf("%10x", p+i); //x는 주소를 출력, 16진수
//	}
//	printf("\n");
//
//	free(p);
//}


//#include<stdio.h> 
//#include<stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 5);
//	for (int i = 0; i < 5; ++i)
//	{
//		p[i] = (i + 1) * 10;
//	}
//	for (int i = 0; i < 5; ++i)
//	{
//		printf("%5d", p[i]);
//	}
//	printf("\n");
//
//	free(p);
//}



//#include<stdio.h> //1.callback함수를 이용 2.모든형식의 타입을 동작시키기위해서 void* 를썻다. 3. void*를쓰면 실제 안에 들어가있느 ㄴ타입을 알지 못하므로 sizeof로 타입의 크기를 알려주고 , 알고리즘을 동작시킬때 타입의 크기를 계산해서 그 주소를 감안했다.
//#include<stdlib.h> 
//#include<string.h>
//struct Person
//{
//	char name[20];
//	char phone[20];
//	int age;
//};
////////////////////////////////////////Server가 만든 코드, 
//int Bsearch(void* key, void* x, int xn, int size, int(*compare)(void*, void*))
//{
//	int left = 0;
//	int right = xn - 1;
//
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		switch (compare(key, (char*)x + middle * size))
//		{
//		case 1:
//			left = middle + 1;
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//
//		}
//	}
//	return -1;
//}
/////////////Client//////////////////////////
//int compare(int* a, int* b)
//{
//	if (*a > *b)
//	{
//		return 1;
//	}
//	else if (*a < *b)
//	{
//		return -1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int list[10] = { 20,24,26,30,35,40,70,72,84,96 };  
//	int key = 30;
//	int* p = (int*)bsearch(&key, list, 10, sizeof(int), (int(*) (const void*,const void*)) compare); //소문자로 바꾸면 전처럼 인덱스번호를 반환해주는게 아니라, 찾은 원소의 주소를 반환,나는 int형 주소로 받겠다라는 의미로 (*int)써준것.
//	if (p != NULL)
//	{
//		printf("%d: %d 원소존재\n", (int)(p - list), *p); //p에서 시작주소를 빼면 차이가 나는데 원래는 거기서 원소의 크기만큼 나눠줌, 끝은 포인터를 넘겨주면 그 배열의 원소가 나온다.
//	}
//}



//#include<stdio.h> 
//#include<stdlib.h>
//#include<string.h>
//struct Person
//{
//	char name[20];
//	char phone[20];
//	int age;
//};
////////////////////////////////////////Server가 만든 코드, 
//int Bsearch(void* key, void* x, int xn, int size, int(*compare)(void*, void*)) 
//{
//	int left = 0;
//	int right = xn - 1;
//
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		switch (compare(key, (char*)x + middle * size)) // (char*)x + middle * size)얘가 middle임, 얼만큼 건너뛰올지몰라서 이렇게 알려준거
//		{
//		case 1:
//			left = middle + 1;
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//
//		}
//	}
//	return -1;
//}
/////////////Client//////////////////////////
//int compare(int* a, int* b)
//{
//	if (*a > *b) //여기서 &a를 쓰면 주소를 반환하기 때문에 주소값이 더 큰애가 표시된다. 즉 키가 middle보다 커도 주소값이 작다면 주소값이 큰애가 표시
//	{
//		return 1;
//	}
//	else if (*a < *b)
//	{
//		return -1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int list[10] = { 20,24,26,30,35,40,70,72,84,96 };  //이번엔 정수형을 찾아보자
//	int key = 30;
//	Person list[5] = { { "홍길동","010-1234-7878",25 },{ "장길산","010-1234-6778",40 },
//			{ "임꺽정","010-1234-4378",35 } ,{ "이몽룡","010-1234-4278",23 } ,{ "성춘향","010-1234-1278",22 } };
//
//	Person key = { " ","010-1234-4378",0 };
//	int idx = Bsearch(&key, list, 10, sizeof(int), (int(*) (void*, void*)) compare);
//	if (-1 != idx)
//	{
//		printf("%d: %d 원소존재\n", idx, list[idx]);
//	}
//}



//#include<stdio.h> 
//#include<stdlib.h>
//#include<string.h>
//struct Person
//{
//	char name[20];
//	char phone[20];
//	int age;
//};
////////////////////////////////////////Server가 만든 코드, 서비스코드가 절때 안바뀌게 하는방법
//int Bsearch(void* key, void* x, int xn,int size, int(*compare)(void*,void*)) //찾고자하는 값의주소, 목록의 주소 void포인터라고하는데 어떤주소든지다 담을수있는 포인터를 의미한다.,
//{
//	int left = 0;
//	int right = xn - 1;//size는 한 원소의 크기, xn은 원소의 갯수
//
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		switch (compare(key, (char*)x+middle*size)) //char*으로 해주는이유는 1바이트씩 증가해주는 char형주소로 바꿔준것,size를 곱해주는이유는 그 자료형의 크기를 알아야 넘어가면서 비교를 해주기때문에,  size를알려주고 middle로 가야되기때문에
//		{
//		case -1:
//			left = middle + 1;
//			break;
//		case 1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//
//		}
//	}
//	return -1;
//}
/////////////Client//////////////////////////
//int compare(Person* a, Person* b) 
//{
//	return strcmp(a->phone, b->phone); 
//}
//int main()
//{
//	Person list[5] = { { "홍길동","010-1234-7878",25 },{ "장길산","010-1234-6778",40 },
//			{ "임꺽정","010-1234-4378",35 } ,{ "이몽룡","010-1234-4278",23 } ,{ "성춘향","010-1234-1278",22 } };
//
//	Person key = { " ","010-1234-4378",0 }; 
//	int idx = Bsearch(&key,list,5,sizeof(Person),(int(*) (void*, void*)) compare); //bsearch라는 함수 자체가 원하는 인수가 이런식이다.
//	if (-1 != idx)
//	{
//		printf("%d: %s 원소존재\n", idx, list[idx].phone);
//	}
//}



//#include<stdio.h>  
//#include<stdlib.h>
//#include<string.h>
//struct Person
//{
//	char name[20];
//	char phone[20];
//	int age;
//};
////////////////////////////////////////Server가 만든 코드
//int Bsearch(Person x[], int size, Person key, int(*compare)(Person, Person)) //얘는 Person과 Person객체를 비교해야하므로
//{
//	int left = 0;
//	int right = size - 1;
//
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		switch (compare(key, x[middle]))
//		{
//		case -1:
//			left = middle + 1;
//			break;
//		case 1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//
//		}
//	}
//	return -1;
//}
/////////////Client//////////////////////////
//int compare(Person a, Person b) 
//{
//	 return strcmp(a.phone, b.phone); //전화번호를 비교해야하므로, 사실 이건 잘못된코드인게 이렇게 하면 문자열의 비교가 아닌 주소들의 크기 비교가 되버린다.그래서 strcmp함수를 사용
//}	//  a>b==1, a<b == -1, a=b ==0
//int main()
//{
//	Person list[5] = { { "홍길동","010-1234-7878",25 },{ "장길산","010-1234-6778",40 },
//			{ "임꺽정","010-1234-4378",35 } ,{ "이몽룡","010-1234-4278",23 } ,{ "성춘향","010-1234-1278",22 } };
//		
//	Person key = {"","010-1234-4378",0 }; //문자열을 바로 넘겨줄수없으므로 
//	int idx = Bsearch(list,5,key,compare); //임꺽정의 번호를 찾고싶다면, 여기서 5는 list의 size이다.
//	if (-1 != idx)
//	{
//		printf("%d: %s 원소존재\n", idx, list[idx].phone);
//	}
//}



//#include<stdio.h> 
//#include<stdlib.h>
////////////////////////////////////////Server가 만든 코드
//int Bsearch(int x[], int size, int key, int(*compare)(int, int)) 
//{
//	int left = 0;
//	int right = size - 1;
//
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		switch (compare(key, x[middle]))
//		{
//		case 1:
//			left = middle + 1;
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//
//		}
//	}
//	return -1;
//}
/////////////Client///////////////
//int compare(int a, int b) //다시 오름차순으로 바꾸었으므로 또 client가 만든코드이므로 마음대로 바꿀수있다.
//{
//	if (a > b)
//		return 1;
//	else if (a < b)
//		return -1;
//	else
//		return 0;
//}
//int main()
//{
//	int list[10] = { 24,50,67,69,72,75,78,80,85,90 };
//	//int list[10] = { 90,85,80,78,75,72,69,67,50,24 };
//
//	int idx = Bsearch(list, 10, 85, compare);
//	if (-1 != idx)
//	{
//		printf("%d: %d 원소존재\n", idx, list[idx]);
//	}
//}


//#include<stdio.h> 
//#include<stdlib.h>
////////////////////////////////////////Server가 만든 코드
//int Bsearch(int x[], int size, int key,int(*compare)(int,int)) //int(컴페어 주소)(비교대상들 타입),이젠 비교정책을 넘겨줘야한다 왜냐하면 아래서는 이미 알고있던 함수지만 이제는 모르기때문에 .int(*compare)(int,int)이건 callback하기위한 포인터
//{										//서버가 함수를 쓰고 싶은데 콜백함수를 쓰고싶어서 주소를 넘겨준다., 콜백 함수란 1. 다른 함수의 인자로써 이용되는 함수.2. 어떤 이벤트에 의해 호출되어지는 함수.https://recoveryman.tistory.com/369
//	int left = 0;
//	int right = size - 1;
//
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		switch (compare(key, x[middle]))
//		{
//		case 1:
//			left = middle + 1;
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//
//		}
//	}
//	return -1;
//}
/////////////Client///////////////아까는 compare를 server에서 만들엇지만 이젠 cilent가 만든 코드
//int compare(int a, int b)
//{
//	if (a < b)
//		return 1;
//	else if (a > b)
//		return -1;
//	else
//		return 0;
//}
//int main() 
//{
//	/*int list[10] = { 24,50,67,69,72,75,78,80,85,90 };*/
//	int list[10] = { 90,85,80,78,75,72,69,67,50,24 }; 
//
//	int idx = Bsearch(list, 10, 85,compare);
//	if (-1 != idx) //idx는 애초에 인덱스번호로 서로 검사 
//	{
//		printf("%d: %d 원소존재\n", idx, list[idx]);
//	}
//}


//#include<stdio.h> //메인이 bsearch를 이용하기 때문에 main은 클라이언트 ,함수는server 그래서 main이 besrech를 쓰기이해서 call이라고 요청을하면 함수에선 실행을하고 return을 해준다.
//#include<stdlib.h>
//int compare(int a, int b)
//{
//	if (a < b)
//		return 1;
//	else if (a > b)
//		return -1;
//	else
//		return 0;
//}
//int Bsearch(int x[], int size, int key)
//{
//	int left = 0;
//	int right = size - 1;
//
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		switch (compare(key, x[middle]))
//		{
//		case 1:
//			left = middle + 1;
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//
//		}
//	}
//	return -1;
//}
//
//int main() //비교정책을클라이언트에 놔라 즉 compare함수를 클라이언트에, 서비스코드가 클라이언트에있는 비교정책을 부르는것을 callback이라고 하고 그 compare함수를 callback함수라고 부른다.쓰는건 바로 위
//{
//	/*int list[10] = { 24,50,67,69,72,75,78,80,85,90 };*/
//	int list[10] = { 90,85,80,78,75,72,69,67,50,24 }; //이것 역시 정렬이지만 내림차순일뿐, 그렇기 때문에 compare함수를 수정해줘야한다.
//
//	int idx = Bsearch(list, 10, 85);
//	if (-1 != idx)
//	{
//		printf("%d: %d 원소존재\n", idx, list[idx]);
//	}
//}


//#include<stdio.h> 
//#include<stdlib.h>
//struct Person
//{
//	char name[20];
//	char phone[20];
//	int age;
//};
//int compare(int a, int b)
//{
//	if (a > b)
//		return 1;
//	else if (a < b)
//		return -1;
//	else
//		return 0;
//}
//int Bsearch(int x[], int size, int key)
//{
//	int left = 0;
//	int right = size - 1;
//
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		switch (compare(key, x[middle]))
//		{
//		case 1:
//			left = middle + 1;
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//
//		}
//	}
//	return -1;
//}
//int main() //p1이 여러개라고 가정햇을때
//{
//	Person list[5] = { { "홍길동","010-1234-5678",25 },{ "임꺽정","010-1234-5678",40 },
//	{ "장길산","010-1234-5678",35 } ,{ "이몽룡","010-1234-5678",23 } ,{ "성춘향","010-1234-5678",22 } };
//
//	for (int i = 0; i < 5; ++i) {
//		printf("name:%s,phone:%s,age:%d\n", list[i].name, list[i].phone, list[i].age);
//	}
//}



//#include<stdio.h> 
//#include<stdlib.h>
//struct Person 
//{
//	char name[20];
//	char phone[20];
//	int age;
//};
//int compare(int a, int b)
//{
//	if (a > b)
//		return 1;
//	else if (a < b)
//		return -1;
//	else
//		return 0;
//}
//int Bsearch(int x[], int size, int key)
//{
//	int left = 0;
//	int right = size - 1;
//
//	while (left <= right) 
//	{
//		int middle = (left + right) / 2;
//		switch (compare(key, x[middle]))
//		{
//		case 1:
//			left = middle + 1;
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//
//		}
//	}
//	return -1;
//}
//int main() //p1이 여러개라고 가정햇을때
//{
//	Person list[5] = { { "홍길동","010-1234-5678",25 },{ "임꺽정","010-1234-5678",40 },
//	{ "장길산","010-1234-5678",35 } ,{ "이몽룡","010-1234-5678",23 } ,{ "성춘향","010-1234-5678",22 } };
//
//	printf("name:%s,phone:%s,age:%d\n", list[0].name, list[0].phone, list[0].age);
//	printf("name:%s,phone:%s,age:%d\n", list[1].name, list[1].phone, list[1].age);
//	printf("name:%s,phone:%s,age:%d\n", list[2].name, list[2].phone, list[2].age);
//	printf("name:%s,phone:%s,age:%d\n", list[3].name, list[3].phone, list[3].age);
//	printf("name:%s,phone:%s,age:%d\n", list[4].name, list[4].phone, list[4].age);
//}



//#include<stdio.h> 
//#include<stdlib.h>
//struct Person //저번수업에 구조체를 언급햇으므로 사람의 정보를 만듦,구조체는 하나의 단위로 정보를 정의할수있다.
//{
//	char name[20];
//	char phone[20];
//	int age;
//};
//int compare(int a, int b)
//{
//	if (a > b)
//		return 1;
//	else if (a < b)
//		return -1;
//	else
//		return 0;
//}
//int Bsearch(int x[], int size, int key)
//{
//	int left = 0;
//	int right = size - 1;
//
//	while (left <= right) //교차하기전까지만 돌려라
//	{
//		int middle = (left + right) / 2;
//		switch (compare(key, x[middle]))
//		{
//		case 1:
//			left = middle + 1;
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//
//		}
//	}
//	return -1;
//}
//int main() 
//{
//	Person p1 = { "홍길동","010-1234-5678",25 };
//
//	printf("name:%s,phone:%s,age:%d\n",p1.name, p1.phone, p1.age);
//}

