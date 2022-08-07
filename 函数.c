#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <string.h>

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

//----------------------------------------------------------------------------------------------

//#include <math.h>
//
//int is_prime(int n)
//{
//	//2->n-1 之间的数字
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
//	//100-200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
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
//如果判断是闰年返回1
//不是闰年，返回0

//
//一个函数如果不写返回类型，默认返回int类型

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


//折半查找
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
//	return -1;//找不到了
//}

//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	//找到了就返回找到的位置的下标
//	//找不到返回-1
//	//数组arr传参，实际传递的不是数组的本身
//	//仅仅传过去了数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz);
//
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}


//函数的嵌套调用和链式访问

//链式访问：把一个函数的返回值作为另外一个函数的参数。
//	printf("%d\n", strlen("abc"));
//将strlen("abc") 的返回值作为Printf的参数

//嵌套调用：函数和函数之间可以根据实际的需求进行组合的，也就是互相调用的。
//函数可以嵌套调用，但是不能嵌套定义。


//函数递归

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
//	//第一个字符不是0 判断第二个字符
//	else
//	return 0;  //第一个字符是\0 则返回0
//}
//
//int main()
//{
//	char arr[] = "abc";
//	printf("%d\n", my_str(arr));
//
//	return 0;
//}


//函数迭代
//n的阶乘 

//没有调用函数
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

////调用函数
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


//求第n个斐波那契数。
//1 1 2 3 5 8 13 21 34 55
//迭代
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



//递归
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



//逗号表达式
//exec( (v1,v2),(v3,v4),v5,v6 )
//(v1, v2) 从左到右计算输出 可以看做v2，实际上 v2，v4，v5，v6 四个参数


