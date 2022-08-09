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


//%p是按地址的格式打印 - 十六进制的打印
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

//二维数组

//int main()
//{
//	//int arr[3][4] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
//	int arr[][4] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
//	行号不能省略
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


//数组作为函数参数

void mp_arr(int arr[],int sz)
{
	//确定趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
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

//数组名是数组首元素的地址
// 但是有2个例外
//1. sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小,单位是字节
//2. &数组名 - 数组名表示整个数组 - 取出的是整个数组的地址
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);//1 - &arr取出的是数组的地址
//	printf("%p\n", &arr+1);//
//
//
//	printf("%p\n", arr);//2
//	printf("%p\n", arr+1);//2
//
//	//printf("%p\n", &arr[0]);//3
//
//	//int sz = sizeof(arr);//数组名表示整个数组
//	//printf("%d\n", sz);
//
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", arr);//数组名是首元素的地址
//
//	return 0;
//}