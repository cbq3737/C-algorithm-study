#include<stdio.h>
#include<stdlib.h>

void LowerString(char* array)

{

	for (int i = 0; i < 20; i++)

	{

		while (array[i] >= 65 && array[i] <= 90)

		{

			array[i] += 32;

		}

	}

}
void main()

{

	char arr1[20] = "ProgramMING";

	char arr2[20] = "World";




	LowerString(arr1);

	LowerString(arr2);

	printf("%s %s\n", arr1, arr2);

}


//배열에 값이 없는것을 찾고자 할 때
//#include <stdio.h>
//#include <stdlib.h>
//
//int compare(int a, int b) //클라이언트
//{
//	if (a > b)
//		return 1; //크다면
//	else if (a < b)
//		return -1; //작다면 
//	else
//		return 0; //찾았다면
//}
//
//int Bsearch(int x[], int size, int key) //서버
//{
//	int left = 0;// 시작인덱스
//	int right = size - 1;//끝 인덱스의 번호 (배열의 마지막 인덱스)
//	 // 중간원소의 인덱스번호를 저장하기위해
//
//	while (left <= right) //left값과 right값이 중간값을 찾아가다가 둘이 교차되면 , 둘이 middle값으로 서로 같아지면 종료 // 이렇게 종료되면 값을 못찾았다는 것
//	{
//		int middle = (left + right) / 2;// 이진검색에 필요한 중간원소의 인덱스 번호를 구함 //배열길이의 중간 인덱스번호를 구함
//
//		//compare이라는 함수를 호출
//		switch (compare(key,x[middle] ))//x[middle]과 key값 비교
//		{
//		case 1:
//			left = middle + 1;
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//		}
//		
//	}
//	return -1;//못찾으면
//}
//int main()
//{
//	int x[10] = { 10,15,22,26,28,30,59,69,78,80 };
//
//	int idx = Bsearch(x, 10, 30);
//	if (idx != -1)
//	{
//		printf("%d는 x: %d index 존재\n", x[idx], idx);
//	}
//	else
//		printf("없음");
//}



////배열에 값이 없는것을 찾고자 할 때 //left와 right가 중간원소를 찾아가다가 둘이 교차해지면 둘이 같아지면 못찾았다는 뜻
//#include <stdio.h>
//#include <stdlib.h>
//
//int Bsearch(int x[], int size, int key) //배열의 시작주소가 들어오니깐 int* 을 선언 , 배열을 받기 때문에 x[]선언
//{
//   //이진검색을 사용하려면 중간원소의 위치를 알아야하고 시작원소의 인덱스와 끝원소의 인덱스를 알아야한다.
//   int left = 0;// 시작인덱스
//   int right = size - 1;//끝 인덱스의 번호 (배열의 마지막 인덱스)
//   int middle; // 중간원소의 인덱스번호를 저장하기위해
//
//   while (left <= right) //left값과 right값이 중간값을 찾아가다가 둘이 교차되면 , 둘이 middle값으로 서로 같아지면 종료 // 이렇게 종료되면 값을 못찾았다는 것
//   {
//      middle = (left + right) / 2;// 이진검색에 필요한 중간원소의 인덱스 번호를 구함 //배열길이의 중간 인덱스번호를 구함
//      if (x[middle] < key) //중간 값구함 // key값(원하는 값)을 중간값과 비교함 // 중간값을 찾고자 하는 값과 비교
//      {//key값(원하는 값)이 더 크다면 오른쪽에 있다는 것.
//       //중간 인덱스의 번호를 바꿔야함
//         left = middle + 1;//(중간원소의 인덱스번호보다 큰 쪽에 원하는 값이 있으므로 중간원소의 인덱스를 시작인덱스로 변경하여 그 위치부터 끝인덱스사이의 중간인덱스를 구해서 중간원소를 구함)
//         //+1한 이유는 middle은 이미 원하는 값을 확인하는 계산에 사용됬고 원하는 값이 middle이 아니라면 그 다음 인덱스를 시작으로하여 끝인덱스와의 중간원소를 찾음 // 이미 middle은 비교에 사용했기 때문에
//
//      }
//      else if (x[middle] > key)
//      {
//         right = middle - 1;//middle은 이미 비교과정에 사용됬고 그 비교과정에서 middle이 원하는 값이 아니였으므로 middle값은 필요가 없고 그 -1의 값을 끝 인덱스로 지정해서 시작 인덱스와 끝인덱스 사이의 중간 인덱스를 구해서 찾고자하는 값을 확인
//
//      }
//      else
//         return middle; //찾고자하는 값을 찾았다면 종료 // 결국 찾고자하는 값은 middle위치에 존재하게 된다.
//   }
//   return -1;//못찾으면
//}
//int main()
//{
//   int x[10] = { 10,15,22,26,28,30,59,69,78,80 };
//
//   //인수: 배열의 시작주소, 원소의 갯수, 찾고자하는 값
//   int idx = Bsearch(x, 10, 100); //원소 10개를 줄테니 x배열에서 원하는 값(26)을 찾아달라는 코드 // 원하는 값이 x에 있는지 확인
//   //int idx = Bsearch(x, 10, 15);//마지막 인수는 찾고자하는 실제 값
//   if (idx != -1)
//   {
//      printf("%d는 x: %d index 존재\n", x[idx], idx);
//   }
//   else
//      printf("없음");
//}


//값이 있는 것을 찾을 때 //값이 배열에 있는것을 찾을 때만 사용가능
//#include <stdio.h>
//#include <stdlib.h>
//
//int Bsearch(int* x[], int size, int key) //배열의 시작주소가 들어오니깐 int* 을 선언 , 배열을 받기 때문에 x[]선언
//{
//   //이진검색을 사용하려면 중간원소의 위치를 알아야하고 시작원소의 인덱스와 끝원소의 인덱스를 알아야한다.
//   int left = 0;// 시작인덱스
//   int right = size - 1;//끝 인덱스의 번호 (배열의 마지막 인덱스)
//   int middle; // 중간원소의 인덱스번호를 저장하기위해
//   
//   while (1) //원하는 값을 찾을 때 까지 무한 루프
//   {
//      middle = (left + right) / 2;// 이진검색에 필요한 중간원소의 인덱스 번호를 구함 //배열길이의 중간 인덱스번호를 구함
//      if (x[middle] < key) //중간 값구함 // key값(원하는 값)을 중간값과 비교함 // 중간값을 찾고자 하는 값과 비교
//      {//key값(원하는 값)이 더 크다면 오른쪽에 있다는 것.
//       //중간 인덱스의 번호를 바꿔야함
//         left = middle + 1;//(중간원소의 인덱스번호보다 큰 쪽에 원하는 값이 있으므로 중간원소의 인덱스를 시작인덱스로 변경하여 그 위치부터 끝인덱스사이의 중간인덱스를 구해서 중간원소를 구함)
//         //+1한 이유는 middle은 이미 원하는 값을 확인하는 계산에 사용됬고 원하는 값이 middle이 아니라면 그 다음 인덱스를 시작으로하여 끝인덱스와의 중간원소를 찾음 // 이미 middle은 비교에 사용했기 때문에
//
//      }
//      else if (x[middle] > key)
//      {
//         right = middle - 1;//middle은 이미 비교과정에 사용됬고 그 비교과정에서 middle이 원하는 값이 아니였으므로 middle값은 필요가 없고 그 -1의 값을 끝 인덱스로 지정해서 시작 인덱스와 끝인덱스 사이의 중간 인덱스를 구해서 찾고자하는 값을 확인
//
//      }
//      else
//         return middle; //찾고자하는 값을 찾았다면 종료 // 결국 찾고자하는 값은 middle위치에 존재하게 된다.
//   }
//   return -1;//못찾으면
//}
//int main()
//{
//   int x[10] = { 10,15,22,26,28,30,59,69,78,80 };
//
//   //인수: 배열의 시작주소, 원소의 갯수, 찾고자하는 값
//   int idx = Bsearch(x, 10, 26); //원소 10개를 줄테니 x배열에서 원하는 값(26)을 찾아달라는 코드 // 원하는 값이 x에 있는지 확인
//   //int idx = Bsearch(x, 10, 15);//마지막 인수는 찾고자하는 실제 값
//   if (idx != -1)
//   {
//      printf("%d는 x: %d index 존재\n", x[idx], idx);
//   }
//   else
//      printf("없음");
//}


//배열의 시작주소를 함수로 보내서  찾고자하는 값이 배열에 있는지 확인.
//#include <stdio.h>
//#include <stdlib.h>
//
//int Bsearch(int x[], int size) //배열의 시작주소가 들어오니깐 int* 을 선언 , 배열을 받기 때문에 x[]선언
//{
//   return -1;//못찾으면
//}
//int main()
//{
//   int x[10] = { 10,15,22,26,28,30,59,69,78,80 }; 
//
//   int idx = Bsearch(x, 10); //원소 10개를 줄테니 x배열에서 원하는 값을 찾아달라는 코드 // 원하는 값이 x에 있는지 확인
//   if (idx != -1)
//   {
//      printf("%x는 %dindex 존재\n");
//   }
//   else
//      printf("없음");
//}
/*
이진검색은 규칙을 이용해서 순차적으로 검색하는것 아니라 "중간원소를 기준으로 왼쪽인지 오른쪽인지 검사하는 것" // 정렬된거에서 중간원소를 구한후 중간원소보다 작으면 왼쪽에 크면 오른쪽에 존재하는것.

*/



////문자열
///* bsearch 함수를 사용하여 오름차순으로 정렬된 배열을 검색 */
//#include <stdio.h>
//#include <stdlib.h>//bsearch()를 사용하기 위해
//#include <string.h>
//
//int compare(char** a, char** b)
//{
//   //if (*a > *b) //*a는 문자열의 주소를 담고 있음  따라서 strcmp라는 함수를 사용해서 문자열 비교
//   //   return 1;
//   //else if (*a < *b)
//   //   return -1;
//   //else
//   //   return 0;
//   //return 0; //이진검색을 사용하여 무조건 0이면 맞는거니깐 이진검색은 전체 크기의 중앙부터 검색하기 때문에 인덱스 4가 출력됨 >> 0과 9의 중간은 4.5이지만 정수를 출력하기 때문에 4
//   return strcmp(*a, *b);
//}   
//int main(void) //char* 타입으로 지정했기 때문에 그 타입의 주소를 가리킬때는 char* 타입의 * 주소를 가리키게한다. 따라서 **작성 >> char** p
//{
//   char* ky = "80";
//   char* x[10] = { "10","15","22","26","28","30","59","69","78","80" }; 
//
//   char** p; //*두개쓰는것은 char*로 타입을 지정했고 그 타입의 시작주소를 p가 가리켜야하므로 char*타입의 시작주소(*)를 가리키는 p를 생성 따라서 *두개사용
//   p = bsearch(&ky,                                /* 검색 값에 대한 포인터 */
//      x,                                         /* 배열 */
//      10,                                         /* 요소의 개수 */
//      sizeof(char*),   //데이터의 크기를 알려주는 코드  /* 요소의 크기 */
//      compare//비교할 때 어떻게 비교할지 결정
//   );
//
//   if (p == NULL)
//      puts("검색에 실패했습니다.");
//   else
//      printf("%s는 x[%d]에 있습니다.\n", ky, (int)(p - x));//(int)(p - x) 인덱스 위치
//
//}


////double
///* bsearch 함수를 사용하여 오름차순으로 정렬된 배열을 검색 */
//#include <stdio.h>
//#include <stdlib.h>//bsearch()를 사용하기 위해
//
//int compare(double* a, double* b)
//{
//   if (*a > *b)
//      return 1;
//   else if (*a < *b)
//      return -1;
//   else
//      return 0;
//}
//int main(void)
//{
//   //int ky = 50; //값을 찾고자 하는 키
//   double ky = 80; //값을 찾고자 하는 키 //ky값을 통해 x배열에 있는 값을 찾음 
//   double x[10] = { 10,15,22,26,28,30,59,69,78,80 }; //double로 할 시 찾고자 하는 키도 실수여야함.
//
//   double* p;
//   p = bsearch(&ky,                                /* 검색 값에 대한 포인터 */
//      x,                                         /* 배열 */
//      10,                                         /* 요소의 개수 */
//      sizeof(double),                           /* 요소의 크기 */
//      compare//비교할 때 어떻게 비교할지 결정
//   );
//
//   if (p == NULL)
//      puts("검색에 실패했습니다.");
//   else
//      printf("%g는 x[%d]에 있습니다.\n", ky, (int)(p - x));//(int)(p - x) 인덱스 위치
//
//}
/*
bsearch함수는 범용성을 가지기 위해 사용 // 타입에 상관없이 작동해야한다?
*/

//int
/* bsearch 함수를 사용하여 오름차순으로 정렬된 배열을 검색 */
//#include <stdio.h>
//#include <stdlib.h>//bsearch()를 사용하기 위해
//
//int compare(int* a, int* b)
//{
//   if (*a > *b)
//      return 1;
//   else if (*a < *b)
//      return -1;
//   else
//      return 0;
//}
//int main(void)
//{
//   //int ky = 50; //값을 찾고자 하는 키
//   int ky = 80; //값을 찾고자 하는 키 //ky값을 통해 x배열에 있는 값을 찾음 
//   int x[10] = { 10,15,22,26,28,30,59,69,78,80 }; //double로 할 시 찾고자 하는 키도 실수여야함.
//
//   int* p;
//   p = bsearch(&ky,                                /* 검색 값에 대한 포인터 */
//      x,                                         /* 배열 */
//      10,                                         /* 요소의 개수 */
//      sizeof(int),                           /* 요소의 크기 */
//      compare//비교할 때 어떻게 비교할지 결정
//   );
//
//   if (p == NULL)
//      puts("검색에 실패했습니다.");
//   else
//      printf("%d는 x[%d]에 있습니다.\n", ky, (int)(p - x));
//
//}

///* bsearch 함수를 사용하여 오름차순으로 정렬된 배열을 검색 */ //compare함수 만들어서 작성
//#include <stdio.h>
//#include <stdlib.h>//bsearch()를 사용하기 위해
//
//int compare(int* a, int* b)
//{
//   if (*a > *b)
//      return 1;
//   else if (*a < *b)
//      return -1;
//   else
//      return 0;
//}
//int main(void)
//{
//   //int ky = 50; //값을 찾고자 하는 키
//   int ky = 80; //값을 찾고자 하는 키 //ky값을 통해 x배열에 있는 값을 찾음 
//   int x[10] = { 10,15,22,26,28,30,59,69,78,80 };
//
//   int* p;
//   p = bsearch(&ky,                                /* 검색 값에 대한 포인터 */
//      x,                                         /* 배열 */
//      10,                                         /* 요소의 개수 */
//      sizeof(int),                           /* 요소의 크기 */
//      compare//비교할 때 어떻게 비교할지 결정
//   );
//
//   if (p == NULL)
//      puts("검색에 실패했습니다.");
//   else
//      printf("%d는 x[%d]에 있습니다.\n", ky, (int)(p - x));
//
//}



///* bsearch 함수를 사용하여 오름차순으로 정렬된 배열을 검색 */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- 정수를 비교하는 함수(오름차순) ---*/
//int int_cmp(const int *a, const int *b)
//{
//   if (*a < *b)
//      return -1;
//   else if (*a > *b)
//      return 1;
//   else
//      return 0;
//}
//
//int main(void)
//{
//   int i, nx, ky;
//   int *x;             /* 배열의 첫 번째 요소에 대한 포인터 */
//   int *p;            /* 검색한 요소에 대한 포인터 */
//   
//   puts("bsearch 함수를 사용하여 검색");
//   printf("요소의 개수 : ");
//   scanf("%d", &nx); //요소의 갯수 입력
//   x = calloc(nx, sizeof(int));//malloc이랑 동일한 것.c는 카운터의 약자       /* 요소의 개수 nx인 int형 배열을 생성 */
//
//   printf("오름차순으로 입력하세요.\n");
//   printf("x[0] : ");
//   scanf("%d", &x[0]);
//   for (i = 1; i < nx; i++) {
//      do {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//      } while (x[i] < x[i - 1]);    /* 바로 앞의 값보다 작으면 다시 입력 */
//   }
//
//   printf("검색 값 : ");
//   scanf("%d", &ky);
//   p = bsearch(&ky,                                /* 검색 값에 대한 포인터 */
//      x,                                         /* 배열 */
//      nx,                                         /* 요소의 개수 */
//      sizeof(int),                           /* 요소의 크기 */
//      (int(*)(const void *, const void *)) int_cmp    /* 비교 함수 */
//   );
//
//   if (p == NULL)
//      puts("검색에 실패했습니다.");
//   else
//      printf("%d는 x[%d]에 있습니다.\n", ky, (int)(p - x));
//   
//   free(x);       /* 배열을 해제 */
//
//   return 0;
//}


















////////////////////입력한 별의 (홀의 갯수)행개수에 따라 피라미드///////// 
//include<stdio.h>
//include<stdlib.h>
//int main()
//{
//	int total = 0;
//	printf("별의 개수를 입력: ");
//	scanf_s("%d", &total);
//
//	for (int i = 0; i < (total+1)/2; ++i)
//	{
//		for (int j = 0; j < ((total-1)/2)-i; ++j)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < (2*i)+1; ++j)
//		{
//			printf("%c", '*');
//		}
//		for (int j = 0; j < ((total - 1) / 2) - i; ++j)
//		{
//			printf(" ");
//		}
//		printf("\n");
//	}
//}