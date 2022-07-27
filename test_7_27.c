#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	while (1)
//		printf("hehe\n");
//
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	//在while循环中，break用于永久的终止循环
//	// 
//	//在while循环中，continue的作用是跳过本次循环continue后边的代码
//	//直接去判断部分，看是否进行下一次循环
//
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	/*while (i <= 10)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	}*/
//
//	return 0;
//}


//getchar

//EOF - end of file - 文件结束标志

//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//输出一个字符
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	//ctrl+z - getchar 就读取结束
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}


//EOF  本质是-1 getchar 返回值类型为int
//
//int main()
//{
//	//
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//123456
//	//gets
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区
//	//getchar();//处理'\n'
//	// 
//	//清理缓冲区的中多个字符
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}



//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')   //0~9的ASCII码表是48-57 ，表示除了48-57别的都不符合条件
//			continue;
//
//		putchar(ch);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10)//判断部分
//	{
//		printf("%d ", i);
//		i++;//调整部分
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		//if (i == 5)
//		//	break;
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//循环体内改变循环变量的例子
// 
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//		int j = 0;
//		for (j = 0; j < 10; i++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	//判断部分的省略 - 判断部分恒为真
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//
//	printf("hehe\n");
//	return 0;
//}


int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)  //k=0, 把0赋值给k， 判断部分恒为假，则一次都不执行
		//k==0 是判断k是否等于0；
	{
		k++;
	}
	return 0;
}