#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

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