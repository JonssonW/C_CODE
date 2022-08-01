#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.打印1000年到2000年之间的闰年
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		//1. 被4整除，不能被100整除是闰年
//		//2. 能被400整除是闰年
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//				count++;
//			}
//		}
//
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//
//int main()
//{
//	int y = 0;

//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		//1. 被4整除，不能被100整除是闰年
//		//2. 能被400整除是闰年
//		if (((y%4==0) && (y%100!=0)) || (y%400==0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



//2.写一个代码：打印100~200之间的素数
//素数 - 质数
//只能被1和它本身整除
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1之间的数字去试除i,看能不能整除
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		//
//		if (i == j)
//		{
//			printf("%d ", i);//素数
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1之间的数字去试除i,看能不能整除
//		int j = 0;
//		int flag = 1;//假设i就是素数
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);//素数
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;
//	return 0;
//}

//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入：我是猪，就取消关机!
//
//shutdown -s -t 60
//shutdown -a
//
#include <string.h>
#include <stdlib.h>

int main()
{
	//关机
	//C语言提供了一个函数：system()- 执行系统命令的

	char input[20] = { 0 };//存放输入的信息
	system("shutdown -s -t 60");//system - stdlib.h

again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	//string.h
	if (strcmp(input, "我是猪") == 0)//两个字符串比较是不能使用==的，应该使用strcmp() string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

//
//int main()
//{
//	//关机
//	//C语言提供了一个函数：system()- 执行系统命令的
//	char input[20] = { 0 };//存放输入的信息
//	system("shutdown -s -t 60");//system - stdlib.h
	while (1)
	{
		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
		scanf("%s", input);
		//string.h
		if (strcmp(input, "我是猪") == 0)//两个字符串比较是不能使用==的，应该使用strcmp() string compare
		{
			system("shutdown -a");
			break;
		}
	}
//
//	return 0;
//}


//goto 语句只能在一个函数范围内跳转，不能跨函数
//
//void test()
//{
//flag:
//	printf("test\h");
//}
//
//int main()
//{
//	goto flag;
//	return 0;
//}
