#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <string.h>

//strcpy

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);//�ַ����ĸ���
//	printf("%s", arr1);//��ӡarr1����ַ��� %s - ���ַ����ĸ�ʽ��ӡ
//	return 0;
//}


//memset

//int main()
//{
//	char arr[] = "hello";
//	memset(arr, 'x', 5);//�ڴ����� - ����ڴ��
//	printf("%s\n", arr);
//
//	return 0;
//}


//�����������͵ĵط�д����void����ʾ��������������κ�ֵ��Ҳ����Ҫ����

//void Swap(int x, int y) //��ֵ����
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//дһ������ - ����2�����ͱ�����ֵ
//
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}


//swap1�ڱ����õ�ʱ��ʵ�δ����βΣ���ʵ�β���ʵ�ε�һ����ʱ����
//�ı��βΣ����ܸı�ʵ��
//��ַ���ã������ͺ�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı���

//��ַ����
//void Swap2(int* pa, int* pb)//
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap2(&a, &b);			//��ַ����
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

//----------------------------------------------------------------------------------------------

//#include <math.h>
//
//int is_prime(int n)
//{
//	//2->n-1 ֮�������
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	//100-200֮�������
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}




//is_leap_year
//����ж������귵��1
//�������꣬����0

//
//һ�����������д�������ͣ�Ĭ�Ϸ���int����

// int is_leap_year(int n)
//{
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}


//�۰����
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//�Ҳ�����
//}

//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	//�ҵ��˾ͷ����ҵ���λ�õ��±�
//	//�Ҳ�������-1
//	//����arr���Σ�ʵ�ʴ��ݵĲ�������ı���
//	//��������ȥ��������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz);
//
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}


//������Ƕ�׵��ú���ʽ����

//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ����һ�������Ĳ�����
//	printf("%d\n", strlen("abc"));
//��strlen("abc") �ķ���ֵ��ΪPrintf�Ĳ���

//Ƕ�׵��ã������ͺ���֮����Ը���ʵ�ʵ����������ϵģ�Ҳ���ǻ�����õġ�
//��������Ƕ�׵��ã����ǲ���Ƕ�׶��塣


//�����ݹ�

//void fbp(unsigned int n)
//{
//	if (n > 9)
//	{
//		fbp(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	fbp(num);
//	return 0;
//}


//int my_str(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_str(str + 1);
//	//��һ���ַ�����0 �жϵڶ����ַ�
//	else
//	return 0;  //��һ���ַ���\0 �򷵻�0
//}
//
//int main()
//{
//	char arr[] = "abc";
//	printf("%d\n", my_str(arr));
//
//	return 0;
//}


//��������
//n�Ľ׳� 

//û�е��ú���
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

////���ú���
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}


//���n��쳲���������
//1 1 2 3 5 8 13 21 34 55
//����
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int  ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}



//�ݹ�
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int  ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}



//���ű��ʽ
//exec( (v1,v2),(v3,v4),v5,v6 )
//(v1, v2) �����Ҽ������ ���Կ���v2��ʵ���� v2��v4��v5��v6 �ĸ�����


