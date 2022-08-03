#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//strcpy

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);//字符串的复制
//	printf("%s", arr1);//打印arr1这个字符串 %s - 以字符串的格式打印
//	return 0;
//}


//memset

//int main()
//{
//	char arr[] = "hello";
//	memset(arr, 'x', 5);//内存设置 - 填充内存块
//	printf("%s\n", arr);
//
//	return 0;
//}


//函数返回类型的地方写出：void，表示这个函数不返回任何值，也不需要返回

//void Swap(int x, int y) //传值调用
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
//	//写一个函数 - 交换2个整型变量的值
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}


//swap1在被调用的时候，实参传给形参，其实形参是实参的一份临时拷贝
//改变形参，不能改变实参
//传址调用：函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量

//传址调用
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
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap2(&a, &b);			//传址调用
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

