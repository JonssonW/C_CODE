#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//if else语句-------------------------------------------------------------------------------------------------------

//int main()
//{
//		int age = 170;
//	
//		if (age < 18)
//			printf("少年\n");
//		else if (age >= 18 && age < 26)    //else if (age<26) 逻辑上也行，不能写成18<=age>=26
//			printf("青年\n");
//		else if (age >= 26 && age < 40)
//			printf("中年\n");
//		else if (age >= 40 && age < 60)
//			printf("壮年\n");
//		else if (age >= 60 && age <= 100)
//			printf("老年\n");
//		else
//			printf("lao\n");
//	
//		/*if (age >= 18)
//		{ 
//			printf("成年\n");
//		}
//		else
//		{ 
//			printf("未成年\n");
//			printf("不能谈恋爱\n");
//		}*/
//		/*if (age >= 18)
//			printf("成年\n");*/
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//		else
//		{
//			printf("haha\n");
//		}
//	}
//	return 0;
//}


//int test()
//{
//	if (0)
//		return 0;
//	return 1;
//}
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//	int num = 3;
//
//	//if (num == 5)
//	if(5 == num)
//		printf("hehe\n");
//
//
//	return 0;
//}
//
//int main()
//{
//	int num = 15;
//	if (num % 2 == 1)
//		printf("奇数\n");
//
//	return 0;

//1-100的奇数
//int main()
//{
//	int a;
//	for (a = 1; a <= 100; a++)
//	{
//
//		if (a <= 100 && a % 2 == 1)
//		{
//			printf("%d\n", a);
//		}
//	}
//	return 0;
//}


//switch语句-------------------------------------------------------------------------------------------------------
//case 决定入口  break 决定停止  default子句
//case 后跟整型常量表达式
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//			printf("星期1\n");
//			break;
//	case 2:
//				printf("星期2\n");
//				break;
//	case 3:
//				printf("星期3\n");
//				break;
//	case 4:
//				printf("星期4\n");
//				break;
//	case 5:
//				printf("星期5\n");
//				break;
//	case 6:
//				printf("星期6\n");
//				break;
//	case 7:
//				printf("星期日\n");
//				break;
//	}
//	return 0;
//}

//1-5 工作日
//6-7 休息日

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:m++;
//    case 2:n++;
//    case 3:
//        switch (n)
//        {//switch允许嵌套使用
//        case 1:
//            n++;
//        case 2:m++;n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);  // 5 3 
//    return 0;
//}