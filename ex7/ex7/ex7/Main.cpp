#include<stdio.h>
int main()
{
	float a = 123456789.0e-5f;
	printf("%f %e", a,a);
}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int list[] = { 60,50,80,40,30,55,90,25,65,77 }; 
//	int heapSize = 0;
//	PrintList(list, 10);
//
//	make_heap(list, list + 10);
//	PrintList(list, 10); 
//	heapSize = 10;
//	//sort_heap(list, list + 10);
//	//pop_heap(list, list + heapSize);
//	//--heapSize;
//	//	PrintList(list, 10); //heapsort���� ������ �Ϸ��� ���Ұ� 10����� 10�����ָ� �Ǵ°��̴�.�̷��� �ϳ��� �����ϸ� ����ū ���� 90�� �� ���������� ������ �˼��ִ�.
//	pop_heap(list, list + heapSize);
//	--heapSize; 
//	pop_heap(list, list + heapSize); //ù��°���ڴ� �����ּ�,�ι�°���ڴ� ���ּ�
//	--heapSize;//pop_heap�� ���ִ¼��� root�� �ǵ��ڽ� �Լ��� �ٲ��ִµ� ���⼭ heapsize�� �ȕ��ָ� ������ �״�� ���� �ٽ� �ǵڿ� �մ� ���� �ٽ� �ٲ�Եȴ�.
//	pop_heap(list, list + heapSize);
//	--heapSize;
//	PrintList(list, 10); 
//}




//#include <stdio.h>//�� sort,���⼭ ���� �޸����� �ƴ� �ڷᱸ�� ���� �ǹ��ϸ� �ڷᱸ�� 2������Ʈ���� �ǹ��ϴµ� ��sort�� �ڷᱸ�� ���� ������� ���������.
//#include <algorithm>
//using namespace std;//make_heap������ ������.
//void PrintList(int list[], int size)//���� ������ ���� 2��Ʈ�������� ���� 2��Ʈ����� �θ��µ� �ű⼭ �����ϴ°� ���̴�.�ڷᱸ���� ǥ���Ҷ� ����İ��迭������ִµ� heap sort�� �ӵ��� ���� �迭������� ��Ÿ����.
////�迭����� �׳� �츮�� �˰��մ� �迭�׸��̶�� �����ϸ��->����ڷᱸ���� �迭�� �ε����� ��°��̴�.�׷��� �� ����� ����� ���� ����Ʈ����� �θ���.�׷��� �迭�� 1���� ä�����ٰ� ����������(A~E) �װ� �θ� i�� ġ�� �ڽ��� i*2,i*2+1�� �����ִ�. �װ� �迭������ �� �� �ֱ⿡ 2��Ʈ���� ���Ҽ��ִ°��̴�.
////���� �� ���ȿ� � ���� ���ִٰ� ������, �ּ����� �ڽ��� �θ𺸴� �� ū���� ���°�, �ִ����� �θ� �ڽĺ��� ������ �� ū ���� ���Ѵ�.������ ������ �ٸ��� �ȹް� �Է�(��忡 �߰�),���(��忡 ����)�� �޴´�.������ ���� �����ִ¾ָ� �������� ���� ������ root�� �����Ѵ�. �ִ������� root�� ����ū���̱⿡ ū���� ������,�ִ����� �������Ƿ� ���������� ���� �ǾƷ� ��带 root�� �ø��� �״����� �� �������� root�� �Ƶ鳢�� �������ѵ� �ٽ� �� ���������� ���Ͽ� �ٲ۴�.�׷��� �ǹ����� �ִ����� �����ϰ� �Ǹ鼭 ���Ұ� �ϳ�������Ƿ� �̰� ���� �����̴�.�׷��� �ִ� ���� ������ ����ū ���Ұ� ���´�.
////�߰��� ����ϳ�?���� �������վ��� �� ��忡 ����ū���� �ִ´ٰ� ������,�켱������ �ǾƷ� �ƹ������� �����еڿ� ���� ���� �θ����� ���ϸ� �ö󰣴�.�׷��ٰ� �� �ڸ��� �ùٸ��� �ö����� �������� �߰��� �Ϸᰡ�Ȱ�.
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int list[] = { 60,50,80,40,30,55,90,25,65,77 }; //������´��������� �ƴϹǷ� �������� ������ش�.
//	int heapSize = 0;
//	PrintList(list, 10);
//
//	make_heap(list, list + 10);//�ִ� ��
//	PrintList(list, 10); //�� ����
//	sort_heap(list, list + 10);
//	PrintList(list, 10); //��������
//}



//#include <stdio.h>//����
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}
//void Swap(int& a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//void Sort(int list[], int size) //�ٸ� sort���,����sort���?���ۺ��ۿö󰡴¹������ �ΰ��� ���ذ��� ����ū���� ���� �����ذ��� �ڸ��� ���� ����ְ� �ݺ��ϴ� ���
//{
//	for (int i = 0; i < size-1 ; ++i)
//	{
//		for (int j = 0; j < size - 1 - i; ++j)
//		{
//			if (list[j] > list[j + 1])
//			{
//				Swap(list[j], list[j + 1]);
//			}
//		}
//	}
//}
//int main()
//{
//	int list[] = { 60,50,80,40,30,55,90,25,65,77 };
//	PrintList(list, 10);
//	Sort(list, 10);
//	PrintList(list, 10);
//}


//#include <stdio.h>//����, �� ���Ĺ�İ� ���� ���Ĺ��(ū�� ���� �ڿ� �ھƳ����鼭 �տ������� �ٽ� ��Ӻ��ϴ¹��)
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}
//void Swap(int& a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//void Sort(int list[], int size)
//{
//	for (int i = 0; i < size-1 ; ++i)
//	{
//		int min = i;//�����̵Ǵ� ��
//		for (int j = i+1; j < size; ++j)
//		{
//			if (list[j] < list[min])//�����������Ҹ� ã�´�.
//			{
//				min = j; //�Ʒ��� ���� �ڵ���
//			}
//		}
//		Swap(list[i], list[min]); //list[min]�� ã�� ������ ���� ���� �����̹Ƿ� �ٲ��ְ� ���� ��� ����
//	}
//}
//int main()
//{
//	int list[] = { 60,50,80,40,30,55,90,25,65,77 };
//	PrintList(list, 10);
//	Sort(list, 10);
//	PrintList(list, 10);
//}



//#include <stdio.h>//����
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d\n", list[i]);
//	}
//	printf("\n");
//}
//void Swap(int& a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//void Sort(int list[], int size)
//{
//	int min = 0;
//	for (int j = 1; j < size; ++j)
//	{
//		if (list[j] < list[min])//�����������Ҹ� ã�´�.
//		{
//			min = j; //�Ʒ��� ���� �ڵ���
//		}
//	}
//	Swap(list[0], list[min]);
//}
//int main()
//{
//	int list[] = { 60,50,80,40,30,55,90,25,65,77 };
//	PrintList(list, 10);
//	Sort(list, 10);
//	PrintList(list, 10);
//}




//#include <stdio.h>//����
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d\n", list[i]);
//	}
//	printf("\n");
//}
//int Min(int list[], int size)
//{
//	int idx = 0;
//	for (int i = 1; i < size; ++i)
//	{
//		if (list[i] < list[idx]) 
//		{
//			idx = i;
//		}
//	}
//	return idx;
//}
//int Max(int list[], int size)
//{
//	int idx = 0;
//	for (int i = 1; i < size; ++i)
//	{
//		if (list[i] > list[idx])
//		{
//			idx = i;
//		}
//	}
//	return idx;
//}
//int main()
//{
//	int list[] = { 60,50,80,40,30,55,90,25,65,77 };
//	int idx = Min(list, 10); //�������� �ε�����ȣ�� ��ȯ�ϴ� �Լ�,������ �ϱ����ؼ��¸�� �Լ��� �񱳸��ϴ°� �⺻
//	printf("min[%d]: %d\n", idx, list[idx]);
//	idx = Max(list, 10);
//	printf("max[%d]: %d\n", idx, list[idx]);
//	PrintList(list, 10);
//}
//

//#include <stdio.h>//����
//void PrintList(int list[],int size)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%5d\n", list[i]);
//	}
//	printf("\n");
//}
//int Min(int list[],int size)//�������Ҹ� ���Ҷ�, ������� �����ϴ� ù��°���Ҵ� �񱳴���̾����Ƿ� �����������ҷμ� ����
//{
//	int idx = 0;
//	if (list[1] < list[idx]) //�̷������� �񱳸� ����ϴ°Ŷ�� ����
//	{
//		idx = 1;
//	}
//	if (list[2] < list[idx])
//	{
//		idx = 2;
//	}
//	///
//	if (list[9] < list[idx])
//	{
//		idx = 9;//�̷������� 9������ ���°Ŵ�.
//	}
//	return 0;
//}
//int Max(int list[],int size)
//{
//	return 0;
//}
//int main()
//{
//	int list[] = { 60,50,80,40,30,55,90,25,65,77 };
//	int idx = Min(list, 10); //�������� �ε�����ȣ�� ��ȯ�ϴ� �Լ�,������ �ϱ����ؼ��¸�� �Լ��� �񱳸��ϴ°� �⺻
//	printf("min[%d]: %d\n", idx, list[idx]);
//	idx = Max(list, 10);
//	printf("max[%d]: %d\n", idx, list[idx]);
//	PrintList(list, 10);
//}




//#include <stdio.h>//��ĥ�ϱ�,�׸��� ��ĥ�ϱ� ����
//#include<Windows.h> //system�� sleep������ ����־��ذ�
//#include<stdlib.h>
//int image[10][10] =
//{
//	0,0,0,0,0,0,0,0,0,0,
//	0,0,0,1,1,1,1,0,0,0,
//	0,0,1,0,1,0,1,0,0,0,
//	0,0,0,0,0,0,1,0,0,0,
//	0,0,0,0,0,0,1,0,0,0,
//	0,0,5,5,5,5,0,0,0,0,
//	0,0,0,0,5,5,0,0,0,0,
//	0,0,0,0,5,0,5,0,0,0,
//	0,0,0,0,5,5,5,5,0,0,
//	0,0,0,0,0,0,5,5,5,0
//};//(3,3)�� 1�� ���ڸ� 4�������� ���� �����ȼ�?�̾ƴ����� 8�������� �밢������ �����Ͽ� ���� �´�.
//void PrintImage(int image[][10])
//{
//	system("cls");//����ϱ����� Ŭ����
//	for (int i = 0; i < 10; ++i)
//	{
//		for (int j = 0; j < 10; ++j)
//		{
//			printf("%3d", image[i][j]);
//		}
//		printf("\n");
//	}
//	Sleep(300);//0.1��
//}
//void _Fill(int image[][10], int i, int j, int newColor, int oldColor)//����ĥ���������� �˻��Ѵ�
//{
//	//������â�� ��踦 �Ѿ�ٸ� ��ĥ�� �ʿ䰡 ����. i,j�� �������� 4�������� ĥ�ص��ǳİ� ����°�
//	if (i < 0 || i >= 10 || j < 0 || j >= 10)//��踦 �Ѿ�����ٸ�
//	{
//		return;//��������
//	}
//	//�츮�� i,j�ǻ���� old��������ƾ��� ��ĥ�ϱ� �����Ѵ�->�׷��Ƿ� �츮�� old�������� �˻��ؾ���
//	if (image[i][j] != oldColor)//oldcolor�� �ƴϸ� ���̻� ���ʿ䰡���ٶ�¶�
//	{
//		return;
//	}
//	image[i][j] = newColor;
//	PrintImage(image);//Ȯ���� ����غ�
//	_Fill(image, i - 1, j, newColor, oldColor); //�����⿡�� 4�������� ���°�
//	_Fill(image, i, j+1, newColor, oldColor);
//	_Fill(image, i + 1, j, newColor, oldColor);
//	_Fill(image, i , j-1, newColor, oldColor);
//}
//void Fill(int image[][10],int i , int j, int newColor) //��� ����Լ��� ���������������, �����ϴ� �Լ�(deligation)�� ����->�ϴ����� �Ȱ���
//{
//	if (newColor != image[i][j])//���� ��ĥ�ؾ��ϴ� �������� �˻��ϴ°�.���ο� ����� ���� ����� ����������
//	{
//		_Fill(image, i, j, newColor, image[i][j]);//image[i][j]�� oldcolor,�츮�� �긦 �ٲ����ȹٲ��� �˾ƾ��ϹǷ�
//	}
//}
//int main()
//{
//	Fill(image, 1, 4, 6);//ĥ�ض�,ĥ�ϰ����ϴ� ��ġ�� ��ǥ,����(�츮�� 0~9���� �������ִٰ� �����Ͽ�����)
//	PrintImage(image);// image����ϴ� �Լ�
//}



//#include <stdio.h>//����Լ�,�Ǻ���ġ����:�տ� ����(C1,C2)�� �־�������,n��° ���� ���� �����ΰ�? 
//void Fibonacci(int n, int c1, int c2,int* presult) //������ư��ߵǱ⶧���� �����ͺ����� �־���
//{
//	if (n == 1)
//	{
//		*presult = c1; 
//	}
//	else if (n == 2)
//	{
//		*presult = c2; 
//	}
//	else
//	{
//		int f1, f2; //���ġ�� �޾ƾ��ϴ� ����
//		Fibonacci(n - 1, c1, c2, &f1);//�̷������� ���� f1,f2�� ���ġ�� ���������� �޾Ƽ� �־��ش�.�Ʒ�ó�� presult���� ������ �������� �ޱ⶧���� ���� ������� ������
//		Fibonacci(n - 2, c1, c2, &f2);
//		*presult = f1 + f2;
//	}
//		//*presult = Fibonacci(n - 1, c1, c2,presult) + Fibonacci(n - 2, c1, c2,presult); //�̷������� �ϸ� presult�� �Լ������ٿͼ� ���ο�� ä��⶧���� ���� ���ư������⶧���� ���̾ȵȴ�.
//}
//int main()
//{
//	int result;
//	Fibonacci(5,1,2,&result);//�̰� �ƿ��Ķ���ͷ� �޴� �����,result�ּҸ� �༭ result�� �ްڴ�.
//	printf("n: %d\n",result);
//}



//#include <stdio.h>//����Լ�,�Ǻ���ġ����:�տ� ����(C1,C2)�� �־�������,n��° ���� ���� �����ΰ�? 
//int Fibonacci(int n,int c1,int c2) 
//{
//	if (n == 1)
//	{
//		return c1; 
//	}
//	else if (n == 2)
//	{
//		return c2; 
//	}
//	else
//		return Fibonacci(n - 1,c1,c2) + Fibonacci(n - 2,c1,c2);
//}
//int main()
//{
//	printf("n: %d\n", Fibonacci(5, 1, 2));
//	printf("n: %d\n", Fibonacci(5,2,3));//������� 2,3(C1,C2)���Z���� ���� �����ϱ�??
//}


//#include <stdio.h>//����Լ�,�Ǻ���ġ����:�տ� ����(C1,C2)�� �־�������,n��° ���� ���� �����ΰ�? 
//int Fibonacci(int n) //Ʈ���� �׷���������, f5�� f4,f3�ǰ��ġ�� ����,f4�� f3,f2�� ���ġ������,f3�� f2,f1�ǰ��ġ�� ����..������ �׷�����,�׷� �̷��� ������� ��ͷν� ȣ��ȴٴ°� �˼�����.
//{
//	if (n == 1)
//	{
//		return 1; //C1�� 1��
//	}
//	else if (n == 2)
//	{
//		return 2; //C2�� ����
//	}
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main()
//{
//	printf("n: %d\n",Fibonacci(5));
//}


//#include <stdio.h>//����Լ�
//void Print(int n) //���ϳ��� �Ʒ����մ� -1�� ����ϰ�����ʴٸ� if������ �ٲ��ָ� �ȴ�.
//{
//	printf("+%d\n", n);
//	if (n - 1 >= 0) //������ �� ������ ���� ������ �ΰ��� ����� �޾��� �ϹǷ� �̷��� �з��� ���ش�.
//	{
//		Print(n - 1);
//	}	
//	if (n - 2 >= 0) //Ʈ�������� �׸��ٸ� �� ���ǿ� �������� ���� ��尡 ����Ƿ� �Ʒ����� �׷����� �ȱ׷����� �ǾƷ��� Ʈ�������� �ܸ��ν� ��Ÿ������ �ȴ�.
//	{
//		Print(n - 2);
//	}
//	printf("-%d\n", n);
//}
//int main()
//{
//	Print(5);
//}



//#include <stdio.h>//����Լ�
//void Print(int n) //�긦 Ʈ�������� �׸��ٸ� P5�� P4�� ����ȣ���ѵ� ���� �ð��뿡 ���������� P3�� ȣ��,P4,P3���� ����������ȣ��,�׷��ٰ� P2,P1�̳��ö�,P2�� ����ȣ��ǹǷ� n��2�� �����̵�,�׷���n>0�̹Ƿ� P1�� P0�� P-1�� ȣ��
//{
//	printf("+%d\n", n);
//	if (n > 0)
//	{
//		Print(n - 1);
//		Print(n - 2);
//	}
//	printf("-%d\n", n);
//}
//int main()
//{
//	Print(5);
//}



//#include <stdio.h>//����Լ�
//void Print(int n) //Ʈ���������� P5�� P4�� �ΰ� ȣ���ϰ�, ���ϳ��� P4�� ������ P3�ΰ��� ȣ���ϴ� �ϸ� P0���� ȣ��->�� 2�� 6�� -1����ŭ ȣ��
//{
//	printf("+%d\n", n);
//	if (n > 0)
//	{
//		Print(n - 1);
//		Print(n - 1);
//	}
//	printf("-%d\n", n);
//}
//int main()
//{
//	Print(5);
//}


//#include <stdio.h>//����Լ�
//void Print(int n)
//{
//	printf("+%d\n", n);
//	if (n > 0)
//	{
//		Print(n-1);
//	}
//	printf("-%d\n", n);
//}
//int main() 
//{
//	Print(5);
//}

//#include<stdio.h> //�ϳ�����ž
//void hanoi(int n, char from, char to, char via)
//{
//	if (n > 1)
//	{
//		hanoi(n - 1, from, via, to);
//		printf("%c->%c\n", from, to);
//		hanoi(n - 1, via, to, from);
//	}
//	else
//	{
//		printf("%c -> %c\n", from, to);
//	}
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	hanoi(n, 'a', 'b', 'c');
//
//	return 0;
//}