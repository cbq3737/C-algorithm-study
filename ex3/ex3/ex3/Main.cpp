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
//		arr[i] = rand() % 11 + 10; //10~20���� ��Ÿ���� �ڵ带 �ۼ��Ͻÿ�. arr[i] =(     )�̷������� ���ü��� �ִ�. 0~10���� ������ ������ְ� +10�� ���ָ� �ȴ�.
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
//		arr[i] = rand() % 11 + 10; //10~20���� ��Ÿ���� �ڵ带 �ۼ��Ͻÿ�. arr[i] =(     )�̷������� ���ü��� �ִ�. 0~10���� ������ ������ְ� +10�� ���ָ� �ȴ�.
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
//	srand(GetTickCount());//GetTickCount�� 1000���� 1�ʴ����� ��ȯ�ϴ¾�, �������� �ð��� ���´�� ������ ���� ����°�,
//	//////////////////////////////
//	for (int i = 0; i < 10; ++i)
//	{
//		arr[i] = rand() % 10 +1; //�Ʒ� 0~9 ������ �ٸ��� 1~10���� �ϰ�ʹٸ�? +1�� ���ָ� �ȴ�. ������ ������ �Ǳ������� �׻� �������� ������ ������ �ȴ�. �׷��⶧���� srand�� ������ش�.
//	}	//10~20���� ��Ÿ���� �ڵ带 �ۼ��Ͻÿ�. arr[i] =(     )�̷������� ���ü��� �ִ�. 0~10���� ������ ������ְ� +10�� ���ָ� �ȴ�.
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
//		arr[i] = rand()%10; //�Ʒ� 0~0xFFFF���� ������ ������ ���� �����°� 0~9������ �������� ��Ÿ���� ������
//	}
//
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%d\n", arr[i]);
//	}
//}



//#include<stdio.h> 
//#include<stdlib.h>
//int main()//���� �������� �߻���Ű�� ���
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	//////////////////////////////
//	for (int i = 0; i < 10; ++i)
//	{
//		//arr[i] = 0;//�̷��� �Ǹ� arr�ȿ� ������ 0���� �ʱ�ȭ�Ǵ°�.
//		arr[i] = rand(); //�޸𸮻��մ� ���� ������ ���� �����ϰ� ���� ���ִ� �޼ҵ�.
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
//void PrintPerson(Person* per)//�ּҸ� �Ѱ�⿡ *�� �޴´�.
//{
//	printf("%s,%s,%d\n", per->name, per->phone, per->age);//�ּҷν� �޾ұ⶧���� ȭ��ǥ�� ���������Ѵ�.
//}
//int main()
//{
//
//	Person p1 = { "ȫ�浿","010-4567-1234",25 };
//	PrintPerson(&p1); //�Ʒ��� �޸� �ּҸ� �ѱ�
//
//	Person p2 = { "�Ӳ���","010-2222-5444",30 };
//	PrintPerson(&p2);
//}



//#include<stdio.h> 
//struct Person
//{
//	char name[20];
//	char phone[20]; //�ܼ��ϰ� �Ʒ��� int���� number�� �ƴ� ���ڿ� phone���� �ٲ㺻��.
//	int age;
//};
//void PrintPerson(Person per)
//{
//	printf("%s,%s,%d\n", per.name, per.phone, per.age);
//}
//int main()
//{
//
//	Person p1 = { "ȫ�浿","010-4567-1234",25 };
//	PrintPerson(p1);
//
//	Person p2 = { "�Ӳ���","010-2222-5444",30 };
//	PrintPerson(p2);
//
//}



//#include<stdio.h> //�ܼ��ϰ� �̸��� �ٲ��ذ�.
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
//	Person p1 = { "ȫ�浿",100,25 };
//	PrintPerson(p1);
//
//	Person p2 = { "�Ӳ���",200,30 };
//	PrintPerson(p2);
//
//}



//#include<stdio.h>		//�ܼ��� �ΰ� ��� 
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
//	PersonInfo p1 = { "ȫ�浿",100,25 };
//	PrintInfo(p1);
//
//	PersonInfo p2 = { "�Ӳ���",200,30 };
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
//	PersonInfo p1 = { "ȫ�浿",100,25 }; //����ü�� ���� �ϳ��� ������ �۾��� ó�����ټ� �ִ� �������ִ�.
//
//	PrintInfo(p1);//����ϴ� �Լ��� ���� �� ���� ������ ���ε��� �Ѱ��� �ʿ䰡����. p1�� ������������ ���������Ƿ� 
//}


//#include<stdio.h> //����ڰ� ������ ���� ����ü
//struct PersonInfo
//{  //���⼭ �츮�� ������ ���Ǹ� ���ش�. �����̱⶧���� ���� ����.
//	char name[20];	//�Ʒ� �����ִ� ������� ���Ǹ� ����� �Ѵ�.
//	int number ;
//	int age ;
//};
//int main()
//{
//
//	PersonInfo p1 = { "ȫ�浿",100,25 }; //�̷���ó�� �츮�� �˱⽱�� �Ǿ������� �����ϱ� �����.�׷��� �츮�� ������ ���� = ����ü
//	
//	printf("%s,%d,%d\n", p1.name, p1.number, p1.age); //�̷��� ����ص� �Ʒ��� ����.
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
//	char name[20] = "ȫ�浿"; //�Ʒ��� ���� ��.
//
//	PrintInfo(name,number,age);//������ ������ ����ϴ� �Լ�
//}


//#include<stdio.h>
//int main()
//{
//	int number = 100;
//	int age = 25;
//	char name[20] = "ȫ�浿"; //�Ʒ��� ���� ��.
//
//	printf("%s,%d,%d\n", name, number, age);
//}


//#include<stdio.h>
//int main()
//{
//	int number = 100;
//	int age = 25;
//	const char* name = "ȫ�浿";
//
//	printf("%s,%d,%d\n", name, number, age);
//}