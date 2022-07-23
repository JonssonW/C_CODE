#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//初识选择语句
//int main()
//{
//	int input = 0; //输入的值
//	printf("好好学习？(选择 1 or 0):");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//
//	return 0;
//}

//初识循环语句--whlie语句--for语句--do...while 语句
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("offer\n");
//	}
//	return 0;
//}

//函数

//int f(int x, int y)  //返回值z是整型 f函数也是整型
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	//int sum = num1 + num2;
//	//函数的方式
//	int sum = f(num1, num2);
//
//	printf("%d\n", sum);
//	return 0;
//}

//数组--一组相同类型的元素的集合
//10个整型下标为0-9存起来
//数组是用下标来访问的
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//
//	char ch[5] = { 'a', 'b', 'c' };//不完全初始化，剩余的默认为0  - '\0'
//	printf("%c\n", ch[0]);
//	return 0;
//}

