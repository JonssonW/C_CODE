#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ָ�����͵�����
//1. ָ�����;����ˣ�ָ������õ�Ȩ���ж��
//2. ָ�����;����ˣ�ָ����һ�������߶�Զ��������
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int  *p = arr;
//	char *pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//
//	//0 1 2 3 4 5 6 7 8 9 a b c d e f
//	//11111111
//	//    8421
//	//
//		һ��ʮ������λ ���� �ĸ�2����λ
//	int a = 0x11223344;  -- 4���ֽ�
//	char* pc = &a;
//	*pc = 0;
//
//	//int* pa = &a;
//	//*pa = 0;
//	
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;  //p+i �൱�� i�ĵ�ַ
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}


//int main()
//{
//	//�����p����һ��Ұָ��
//	1. ָ��δ��ʼ��
//	//int* p;//p��һ���ֲ���ָ��������ֲ���������ʼ���Ļ���Ĭ�������ֵ
//	//*p = 20;//�Ƿ������ڴ���

//	//2.Խ�����
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;         //*p = 11 Ұָ�� 
//		p++;
//	}
//	return 0;


//3.ָ��ָ��Ŀռ��ͷ�
//int* test()
//{
//	int a = 10;
//	return &a;  //�����������ڣ� a�ͱ�������
//}
//
//int main()
//{
//	int*p = test();
//	*p = 20;   //Ұָ��
//
//	return 0;
//}


//int main()
//{
//	//��ǰ��֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
//	//int* p = NULL;
//	//��ȷ֪����ʼ����ֵ
//	//int a = 10;
//	//int* ptr = &a;
//

//  ָ��Ҫô�ǿ�ָ�룬Ҫô����Ч�ĵ�ַ��ָ��
//	//C���Ա����ǲ��������ݵ�Խ����Ϊ��
//	int* p = NULL;
//
//	if(p != NULL)   //�ж�ָ���Ƿ�Ϊ��Ч��ָ��
//		*p = 10;
//
//	return 0;
//}




//ָ�������

//for (vp = &values[0]; vp < &values[N_VALUES];)  //ָ��Ĺ�ϵ����  
//												�������У������±����������ַҲ�ɵ͵���
//{
//	*vp++ = 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//
//	while (p<=pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}

int mian()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%d\n", &arr[9] - &arr[0]);
	//ָ��-ָ�� �õ���������ָ��֮���Ԫ�ظ���
	//ָ���ָ�������ǰ���ǣ�����ָ��ָ��ͬһ��ռ�
	//char c[5]��
	//printf("%d\n", &arr[9] - &c[0]);  ��ͬ�Ŀռ�
	return 0;
}


#include <string.h>
//������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//�ݹ�
//ָ��-ָ��

//int my_strlen(char* str)
//{
//	char* tmp = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - tmp;
//}
//
//
//int main()
//{
//	//strlen(); - ���ַ�������
//	//�ݹ�
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}


//Ҫ��������д����׼�涨 ָ����������Խ������Ƚϣ�������ǰ�������һ����֮ǰ���Ǹ��ڴ棩�Ƚ�
//for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--) 
//{
//	*vp = 0;
//}


//ָ�������

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��������������Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]);
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p <==> %p\n", &arr[i], p + i);  
		//p + i ���������±�Ϊi�ĵ�ַ
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//
//	int* p = arr;//������
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);//p[2] --> *(p+2)
//
//	//[] ��һ��������  2��arr������������
//	//a+b
//	//b+a  ֧�ֽ����� -- 2[arr] == arr[2]
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//
//	//arr[2] --> *(arr+2)-->*(2+arr)-->2[arr]
//
//	//arr[2] <==> *(arr+2) <==> *(p+2) <==> *(2+p) <==> *(2+arr) == 2[arr]
//	//2[arr] <==> *(2+arr)
//	return 0;
//}


//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�������һ��ָ��
//
//	//ppa����һ������ָ�����
//	int ** ppa = &pa;//paҲ�Ǹ�������&paȡ��pa���ڴ�����ʼ��ַ
//	int*** pppa = &ppa;
//
//	return 0;
//}

//ָ������
//int main()
//{
//	int arr[10];//�������� - ������ε����������������
//	char ch[5];//�ַ����� - ��ŵ����ַ�
//	//ָ������ - ���ָ�������
//	int* parr[5];//����ָ�������
//	char* pch[5];
//
//	return 0;
//}
//