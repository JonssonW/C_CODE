#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//
//{
//	char ch1[] = "abc";
//	//[b i t \0]
//	char ch2[] = { 'a','b','c' };
//	//[b i t]
//	printf("%s\n", ch1);
//	printf("%s\n", ch2);
//	return 0;
//}


//%p�ǰ���ַ�ĸ�ʽ��ӡ - ʮ�����ƵĴ�ӡ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	arr[5] = 4;
//	for (i = 1; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n",i, &arr[i]);
//	}
//	return 0;
//}

//��ά����

//int main()
//{
//	//int arr[3][4] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
//	int arr[][4] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
//	�кŲ���ʡ��
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("arr[%d][%d]=%p ", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//������Ϊ��������

void mp_arr(int arr[],int sz)
{
	//ȷ������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������Ĺ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	mp_arr(arr,sz);
	return 0;
}

//��������������Ԫ�صĵ�ַ
// ������2������
//1. sizeof(������) - ��������ʾ�������� - ���������������Ĵ�С,��λ���ֽ�
//2. &������ - ��������ʾ�������� - ȡ��������������ĵ�ַ
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);//1 - &arrȡ����������ĵ�ַ
//	printf("%p\n", &arr+1);//
//
//
//	printf("%p\n", arr);//2
//	printf("%p\n", arr+1);//2
//
//	//printf("%p\n", &arr[0]);//3
//
//	//int sz = sizeof(arr);//��������ʾ��������
//	//printf("%d\n", sz);
//
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", arr);//����������Ԫ�صĵ�ַ
//
//	return 0;
//}