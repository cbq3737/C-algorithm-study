//#include<stdio.h> 
//#include<stdlib.h>
//#include<Windows.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	srand(GetTickCount());
//	//////////////////////////////
//	for (int i = 0; i < 10; ++i)
//	{
//		arr[i] = rand() % 11 + 10; //10~20까지 나타내는 코드를 작성하시오. arr[i] =(     )이런식으로 나올수도 있다. 0~10까지 단위를 만들어주고 +10만 해주면 된다.
//	}
//
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%d\n", arr[i]);
//	}
//}



//#include<stdio.h> 
//#include<stdlib.h>
//#include<Windows.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	srand(GetTickCount());
//	//////////////////////////////
//	for (int i = 0; i < 10; ++i)
//	{
//		arr[i] = rand() % 11 + 10; //10~20까지 나타내는 코드를 작성하시오. arr[i] =(     )이런식으로 나올수도 있다. 0~10까지 단위를 만들어주고 +10만 해주면 된다.
//	}	
//
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%d\n", arr[i]);
//	}
//}


//#include<stdio.h> 
//#include<stdlib.h>
//#include<Windows.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	srand(GetTickCount());//GetTickCount은 1000분의 1초단위를 반환하는애, 윈도우의 시간에 가는대로 랜덤을 새로 만드는것,
//	//////////////////////////////
//	for (int i = 0; i < 10; ++i)
//	{
//		arr[i] = rand() % 10 +1; //아래 0~9 까지와 다르게 1~10까지 하고싶다면? +1만 해주면 된다. 하지만 랜덤이 되긴하지만 항상 같은수의 랜덤만 나오게 된다. 그렇기때문에 srand를 사용해준다.
//	}	//10~20까지 나타내는 코드를 작성하시오. arr[i] =(     )이런식으로 나올수도 있다. 0~10까지 단위를 만들어주고 +10만 해주면 된다.
//
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%d\n", arr[i]);
//	}
//}


//#include<stdio.h> 
//#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//////////////////////////////
//	for (int i = 0; i < 10; ++i)
//	{
//		arr[i] = rand()%10; //아래 0~0xFFFF까지 나오는 임의의 수가 나오는걸 0~9까지의 랜덤수로 나타내고 싶을때
//	}
//
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%d\n", arr[i]);
//	}
//}



//#include<stdio.h> 
//#include<stdlib.h>
//int main()//값을 랜덤으로 발생시키는 방법
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	//////////////////////////////
//	for (int i = 0; i < 10; ++i)
//	{
//		//arr[i] = 0;//이렇게 되면 arr안에 모든수가 0으로 초기화되는것.
//		arr[i] = rand(); //메모리상에잇는 수를 임의의 수로 랜덤하게 들어가게 해주는 메소드.
//	}
//
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%d\n", arr[i]);
//	}
//}



//#include<stdio.h> 
//struct Person
//{
//	char name[20];
//	char phone[20]; 
//	int age;
//};
//void PrintPerson(Person* per)//주소를 넘겼기에 *로 받는다.
//{
//	printf("%s,%s,%d\n", per->name, per->phone, per->age);//주소로써 받았기때문에 화살표를 사용해줘야한다.
//}
//int main()
//{
//
//	Person p1 = { "홍길동","010-4567-1234",25 };
//	PrintPerson(&p1); //아래와 달리 주소를 넘김
//
//	Person p2 = { "임꺽정","010-2222-5444",30 };
//	PrintPerson(&p2);
//}



//#include<stdio.h> 
//struct Person
//{
//	char name[20];
//	char phone[20]; //단순하게 아래의 int형의 number가 아닌 문자열 phone으로 바꿔본것.
//	int age;
//};
//void PrintPerson(Person per)
//{
//	printf("%s,%s,%d\n", per.name, per.phone, per.age);
//}
//int main()
//{
//
//	Person p1 = { "홍길동","010-4567-1234",25 };
//	PrintPerson(p1);
//
//	Person p2 = { "임꺽정","010-2222-5444",30 };
//	PrintPerson(p2);
//
//}



//#include<stdio.h> //단순하게 이름만 바꿔준것.
//struct Person
//{
//	char name[20];
//	int number;
//	int age;
//};
//void PrintPerson(Person per)
//{
//	printf("%s,%d,%d\n", per.name, per.number, per.age);
//}
//int main()
//{
//
//	Person p1 = { "홍길동",100,25 };
//	PrintPerson(p1);
//
//	Person p2 = { "임꺽정",200,30 };
//	PrintPerson(p2);
//
//}



//#include<stdio.h>		//단순히 두개 출력 
//struct PersonInfo
//{
//	char name[20];
//	int number;
//	int age;
//};
//void PrintInfo(PersonInfo per)
//{
//	printf("%s,%d,%d\n", per.name, per.number, per.age);
//}
//int main()
//{
//
//	PersonInfo p1 = { "홍길동",100,25 };
//	PrintInfo(p1);
//
//	PersonInfo p2 = { "임꺽정",200,30 };
//	PrintInfo(p2);
//
//}


//#include<stdio.h> 
//struct PersonInfo
//{  
//	char name[20];	
//	int number;
//	int age;
//};
//void PrintInfo(PersonInfo per)
//{
//	printf("%s,%d,%d\n", per.name, per.number, per.age);
//}
//int main()
//{
//
//	PersonInfo p1 = { "홍길동",100,25 }; //구조체를 만들어서 하나의 단위로 작업을 처리해줄수 있는 장점이있다.
//
//	PrintInfo(p1);//출력하는 함수를 만들 때 이젠 세개를 따로따로 넘겨줄 필요가없다. p1이 세개의정보를 갖고있으므로 
//}


//#include<stdio.h> //사용자가 정의한 형식 구조체
//struct PersonInfo
//{  //여기서 우리가 변수를 정의를 해준다. 정의이기때문에 값이 없다.
//	char name[20];	//아래 적혀있는 순서대로 정의를 해줘야 한다.
//	int number ;
//	int age ;
//};
//int main()
//{
//
//	PersonInfo p1 = { "홍길동",100,25 }; //이런것처럼 우리가 알기쉽게 되어있으면 이해하기 쉬울것.그래서 우리가 정의한 형식 = 구조체
//	
//	printf("%s,%d,%d\n", p1.name, p1.number, p1.age); //이렇게 출력해도 아래와 같다.
//}


//#include<stdio.h>
//void PrintInfo(char* name,int number,int age)
//{
//	printf("%s,%d,%d\n", name, number, age);
//}
//int main()
//{
//	int number = 100;
//	int age = 25;
//	char name[20] = "홍길동"; //아래와 같은 것.
//
//	PrintInfo(name,number,age);//세가지 정보를 출력하는 함수
//}


//#include<stdio.h>
//int main()
//{
//	int number = 100;
//	int age = 25;
//	char name[20] = "홍길동"; //아래와 같은 것.
//
//	printf("%s,%d,%d\n", name, number, age);
//}


//#include<stdio.h>
//int main()
//{
//	int number = 100;
//	int age = 25;
//	const char* name = "홍길동";
//
//	printf("%s,%d,%d\n", name, number, age);
//}