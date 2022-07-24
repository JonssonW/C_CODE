#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
	//int a = 5 / 2; //算数操作符
	//float a = 9 / 2.0;
	//int a = 5 % 2;//% - 取模（余）

	//printf("%f\n", a);//打印小数点的数用%f
//	return 0;
//}

//int main()
//{
//	int a = 2; //左移操作符 - 移动的是二进制位
//	int b = a << 1;  //00000000000000000000000000000010 -- 00000000000000000000000000000100=2^2=4
//	printf("%d\n", b);	
//	return 0;
//}

//int main()
//{
//	//赋值操作符
//	int a = 1;
//	a = a + 3;
//	a += 3;
//	a = a % 3;
//	a %= 3;
//	return 0;
//}

//int main()
//{
//	//int a, b;
//	//a = a + b; //双目操作符
//	//单目操作符
//	int c = 10;
//	printf("%d\n", !c); 
//	//0表示假，非0就是真
//	return 0;
//}

//int main()
//{
//	//sizeof是一个操作符
//	//计算类型或者变量的大小
//	int a = 1;
//	printf("%d\n", sizeof(int)); //sizeof的单位是字节 byte = 8bit
//	printf("%d\n", sizeof(a));//4,一个变量等于一个int的大小
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr)); //求一个数组的大小
//	printf("%d\n", sizeof(arr[0])); //求一个元素的大小
//
//	int sz = sizeof(arr) / sizeof(arr[0]); //求一个数组中元素的个数
//	printf("%d\n", sz);
//
//	return 0;
//}

int main()
{
	int a = 2;  00000000000000000000000000000010
	printf("%d\n", ~a); //按位取反：把所有二进制中的数字，1变成0,0变成1
	return 0;
}
整数在内存中存储的是补码	
正整数的原码、反码、补码都一样
负数的计算：原码符号位不变，其他位按位取反得到反码 再+1得到补码

00000000000000000000000000000010 a的原码 按位取反得到11111111111111111111111111111101 - ~a ，而存储的都是补码 需要转换成原码输出
11111111111111111111111111111101 ~a的补码
11111111111111111111111111111100 ~a的反码
10000000000000000000000000000011 -3的原码

//int main()
//{
//	//int a = 10;
//	//int b = a++;//后置++，先使用，再++   先赋值给b，a再++
//
//	//printf("%d\n", b);//10
//	//printf("%d\n", a);//11
//
//	//int b = ++a;//前置++ - 先++，后使用   a先++再赋值给b
//
//	//printf("%d\n", b);//11
//	//printf("%d\n", a);//11
//
//	return 0;
//}

//强制类型转换
//int main()
//{
//	int a = (int)3.14;
//
//	printf("%d\n", a);
//	return 0;
//}

//逻辑操作符
//int main()
//{
//	int a = 1;
//	int b = 2;
//
//	int c = a || b;
//
//	printf("%d\n", c);
//
//	/*int a = 3;
//	int b = 0;
//
//	int c = a && b;
//	
//	printf("%d\n", c);*/
//
//	/*if (a && b)
//	{
//
//	}*/
//	return 0;
//}

//条件操作符 exp1?exp2:exp3  ? :  三目操作符
//exp1 成立 exp2计算，整个表达式的结果是：exp2的结果
//exp1 不成立 exp3计算，整个表达式的结果是：exp3的结果
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//	return 0;
//}

//逗号表达式：逗号隔开的一串表达式
//exp1，exp2，exp3，expn
//int main()
//{
//	//(2, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	        //a=5       c=1        b=3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式，是从左向右依次计算的
//	//整个表达式的结果是最后一个表达式的结果
//
//	printf("%d\n", d);
//	return 0;
//}

//下标引用操作符[]

//函数调用操作符
//int main()
//{
//	//调用函数的时候，函数名后边的（）就是函数调用操作符
//	printf("hehe\n");
//	printf("%d", 100);
//
//	return 0;
//}

& * . -> 随后