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
//	v = (void*)c; //void�� � �����̵� �� ���� �� �ִ�. 
//
//	printf("%x %x %x\n", p, c, v); 
//	printf("%x %x %x\n", p + 1, c + 1, (int*)v + 1);//���࿡ v�� intó�� �ٰ�ʹٸ� ���ĺ�ȯ�� ���ָ� �Ǵ°��̴�.   
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
//	v = (void*)c; //void�� � �����̵� �� ���� �� �ִ�. 
//
//	printf("%x %x %x\n", p, c,v); //�����ּҰ������ϱ⶧���� ��� ���� �ּ��̴�. p�� int������ �ּ�, c�� char���� �ּ�, v�� �˼����� �ּ�
//	printf("%x %x %x\n", p + 1, c + 1, v+1); //�� v+1�� �ȵȴ�. �˼����� �ּ��̱⶧���� �ǳʶۼ��ִ� ũ�⸦�𸥴�. �� ������ �´�.
//
//	free(p);
//}



//#include<stdio.h> 
//#include<stdlib.h>
//int main()
//{
//	char* c; //���� �̷��� �����͸� �����ٰ��̶�� ���� ������ ���־�� �Ѵ�.
//	int* p;
//
//	p = (int*)calloc(5, sizeof(int)); 
//	c = (char*)p;
//	 
//	printf("%x %x\n", p, c);
//	printf("%x %x\n", p+1, c+1); //�Ȱ��� �ּ��ε� �Ѵ� 1�����ϸ� char�� �ּ��̹Ƿ� 1����Ʈ�� �ǳʶٹǷ� �ٸ��� ���´�
//
//	free(p);
//}



//#include<stdio.h> 
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(5,sizeof(int)); //count memory allocation, �������� �޸��� ũ�� ����
//	for (int i = 0; i < 5; ++i)
//	{
//		p[i] = (i + 1) * 10;
//	}
//	for (int i = 0; i < 5; ++i)
//	{
//		printf("%10x", p + i); //x�� �ּҸ� ���, 16����
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
//		printf("%10x", p+i); //x�� �ּҸ� ���, 16����
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



//#include<stdio.h> //1.callback�Լ��� �̿� 2.��������� Ÿ���� ���۽�Ű�����ؼ� void* ������. 3. void*������ ���� �ȿ� ���ִ� ��Ÿ���� ���� ���ϹǷ� sizeof�� Ÿ���� ũ�⸦ �˷��ְ� , �˰����� ���۽�ų�� Ÿ���� ũ�⸦ ����ؼ� �� �ּҸ� �����ߴ�.
//#include<stdlib.h> 
//#include<string.h>
//struct Person
//{
//	char name[20];
//	char phone[20];
//	int age;
//};
////////////////////////////////////////Server�� ���� �ڵ�, 
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
//	int* p = (int*)bsearch(&key, list, 10, sizeof(int), (int(*) (const void*,const void*)) compare); //�ҹ��ڷ� �ٲٸ� ��ó�� �ε�����ȣ�� ��ȯ���ִ°� �ƴ϶�, ã�� ������ �ּҸ� ��ȯ,���� int�� �ּҷ� �ްڴٶ�� �ǹ̷� (*int)���ذ�.
//	if (p != NULL)
//	{
//		printf("%d: %d ��������\n", (int)(p - list), *p); //p���� �����ּҸ� ���� ���̰� ���µ� ������ �ű⼭ ������ ũ�⸸ŭ ������, ���� �����͸� �Ѱ��ָ� �� �迭�� ���Ұ� ���´�.
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
////////////////////////////////////////Server�� ���� �ڵ�, 
//int Bsearch(void* key, void* x, int xn, int size, int(*compare)(void*, void*)) 
//{
//	int left = 0;
//	int right = xn - 1;
//
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		switch (compare(key, (char*)x + middle * size)) // (char*)x + middle * size)�갡 middle��, ��ŭ �ǳʶٿ������� �̷��� �˷��ذ�
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
//	if (*a > *b) //���⼭ &a�� ���� �ּҸ� ��ȯ�ϱ� ������ �ּҰ��� �� ū�ְ� ǥ�õȴ�. �� Ű�� middle���� Ŀ�� �ּҰ��� �۴ٸ� �ּҰ��� ū�ְ� ǥ��
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
//	int list[10] = { 20,24,26,30,35,40,70,72,84,96 };  //�̹��� �������� ã�ƺ���
//	int key = 30;
//	Person list[5] = { { "ȫ�浿","010-1234-7878",25 },{ "����","010-1234-6778",40 },
//			{ "�Ӳ���","010-1234-4378",35 } ,{ "�̸���","010-1234-4278",23 } ,{ "������","010-1234-1278",22 } };
//
//	Person key = { " ","010-1234-4378",0 };
//	int idx = Bsearch(&key, list, 10, sizeof(int), (int(*) (void*, void*)) compare);
//	if (-1 != idx)
//	{
//		printf("%d: %d ��������\n", idx, list[idx]);
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
////////////////////////////////////////Server�� ���� �ڵ�, �����ڵ尡 ���� �ȹٲ�� �ϴ¹��
//int Bsearch(void* key, void* x, int xn,int size, int(*compare)(void*,void*)) //ã�����ϴ� �����ּ�, ����� �ּ� void�����Ͷ���ϴµ� ��ּҵ����� �������ִ� �����͸� �ǹ��Ѵ�.,
//{
//	int left = 0;
//	int right = xn - 1;//size�� �� ������ ũ��, xn�� ������ ����
//
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		switch (compare(key, (char*)x+middle*size)) //char*���� ���ִ������� 1����Ʈ�� �������ִ� char���ּҷ� �ٲ��ذ�,size�� �����ִ������� �� �ڷ����� ũ�⸦ �˾ƾ� �Ѿ�鼭 �񱳸� ���ֱ⶧����,  size���˷��ְ� middle�� ���ߵǱ⶧����
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
//	Person list[5] = { { "ȫ�浿","010-1234-7878",25 },{ "����","010-1234-6778",40 },
//			{ "�Ӳ���","010-1234-4378",35 } ,{ "�̸���","010-1234-4278",23 } ,{ "������","010-1234-1278",22 } };
//
//	Person key = { " ","010-1234-4378",0 }; 
//	int idx = Bsearch(&key,list,5,sizeof(Person),(int(*) (void*, void*)) compare); //bsearch��� �Լ� ��ü�� ���ϴ� �μ��� �̷����̴�.
//	if (-1 != idx)
//	{
//		printf("%d: %s ��������\n", idx, list[idx].phone);
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
////////////////////////////////////////Server�� ���� �ڵ�
//int Bsearch(Person x[], int size, Person key, int(*compare)(Person, Person)) //��� Person�� Person��ü�� ���ؾ��ϹǷ�
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
//	 return strcmp(a.phone, b.phone); //��ȭ��ȣ�� ���ؾ��ϹǷ�, ��� �̰� �߸����ڵ��ΰ� �̷��� �ϸ� ���ڿ��� �񱳰� �ƴ� �ּҵ��� ũ�� �񱳰� �ǹ�����.�׷��� strcmp�Լ��� ���
//}	//  a>b==1, a<b == -1, a=b ==0
//int main()
//{
//	Person list[5] = { { "ȫ�浿","010-1234-7878",25 },{ "����","010-1234-6778",40 },
//			{ "�Ӳ���","010-1234-4378",35 } ,{ "�̸���","010-1234-4278",23 } ,{ "������","010-1234-1278",22 } };
//		
//	Person key = {"","010-1234-4378",0 }; //���ڿ��� �ٷ� �Ѱ��ټ������Ƿ� 
//	int idx = Bsearch(list,5,key,compare); //�Ӳ����� ��ȣ�� ã��ʹٸ�, ���⼭ 5�� list�� size�̴�.
//	if (-1 != idx)
//	{
//		printf("%d: %s ��������\n", idx, list[idx].phone);
//	}
//}



//#include<stdio.h> 
//#include<stdlib.h>
////////////////////////////////////////Server�� ���� �ڵ�
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
//int compare(int a, int b) //�ٽ� ������������ �ٲپ����Ƿ� �� client�� �����ڵ��̹Ƿ� ������� �ٲܼ��ִ�.
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
//		printf("%d: %d ��������\n", idx, list[idx]);
//	}
//}


//#include<stdio.h> 
//#include<stdlib.h>
////////////////////////////////////////Server�� ���� �ڵ�
//int Bsearch(int x[], int size, int key,int(*compare)(int,int)) //int(����� �ּ�)(�񱳴��� Ÿ��),���� ����å�� �Ѱ�����Ѵ� �ֳ��ϸ� �Ʒ����� �̹� �˰��ִ� �Լ����� ������ �𸣱⶧���� .int(*compare)(int,int)�̰� callback�ϱ����� ������
//{										//������ �Լ��� ���� ������ �ݹ��Լ��� ����; �ּҸ� �Ѱ��ش�., �ݹ� �Լ��� 1. �ٸ� �Լ��� ���ڷν� �̿�Ǵ� �Լ�.2. � �̺�Ʈ�� ���� ȣ��Ǿ����� �Լ�.https://recoveryman.tistory.com/369
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
/////////////Client///////////////�Ʊ�� compare�� server���� ��������� ���� cilent�� ���� �ڵ�
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
//	if (-1 != idx) //idx�� ���ʿ� �ε�����ȣ�� ���� �˻� 
//	{
//		printf("%d: %d ��������\n", idx, list[idx]);
//	}
//}


//#include<stdio.h> //������ bsearch�� �̿��ϱ� ������ main�� Ŭ���̾�Ʈ ,�Լ���server �׷��� main�� besrech�� �������ؼ� call�̶�� ��û���ϸ� �Լ����� �������ϰ� return�� ���ش�.
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
//int main() //����å��Ŭ���̾�Ʈ�� ���� �� compare�Լ��� Ŭ���̾�Ʈ��, �����ڵ尡 Ŭ���̾�Ʈ���ִ� ����å�� �θ��°��� callback�̶�� �ϰ� �� compare�Լ��� callback�Լ���� �θ���.���°� �ٷ� ��
//{
//	/*int list[10] = { 24,50,67,69,72,75,78,80,85,90 };*/
//	int list[10] = { 90,85,80,78,75,72,69,67,50,24 }; //�̰� ���� ���������� ���������ϻ�, �׷��� ������ compare�Լ��� ����������Ѵ�.
//
//	int idx = Bsearch(list, 10, 85);
//	if (-1 != idx)
//	{
//		printf("%d: %d ��������\n", idx, list[idx]);
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
//int main() //p1�� ��������� ����������
//{
//	Person list[5] = { { "ȫ�浿","010-1234-5678",25 },{ "�Ӳ���","010-1234-5678",40 },
//	{ "����","010-1234-5678",35 } ,{ "�̸���","010-1234-5678",23 } ,{ "������","010-1234-5678",22 } };
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
//int main() //p1�� ��������� ����������
//{
//	Person list[5] = { { "ȫ�浿","010-1234-5678",25 },{ "�Ӳ���","010-1234-5678",40 },
//	{ "����","010-1234-5678",35 } ,{ "�̸���","010-1234-5678",23 } ,{ "������","010-1234-5678",22 } };
//
//	printf("name:%s,phone:%s,age:%d\n", list[0].name, list[0].phone, list[0].age);
//	printf("name:%s,phone:%s,age:%d\n", list[1].name, list[1].phone, list[1].age);
//	printf("name:%s,phone:%s,age:%d\n", list[2].name, list[2].phone, list[2].age);
//	printf("name:%s,phone:%s,age:%d\n", list[3].name, list[3].phone, list[3].age);
//	printf("name:%s,phone:%s,age:%d\n", list[4].name, list[4].phone, list[4].age);
//}



//#include<stdio.h> 
//#include<stdlib.h>
//struct Person //���������� ����ü�� ��������Ƿ� ����� ������ ����,����ü�� �ϳ��� ������ ������ �����Ҽ��ִ�.
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
//	while (left <= right) //�����ϱ��������� ������
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
//	Person p1 = { "ȫ�浿","010-1234-5678",25 };
//
//	printf("name:%s,phone:%s,age:%d\n",p1.name, p1.phone, p1.age);
//}

