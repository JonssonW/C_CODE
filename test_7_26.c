#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//if else���-------------------------------------------------------------------------------------------------------

//int main()
//{
//		int age = 170;
//	
//		if (age < 18)
//			printf("����\n");
//		else if (age >= 18 && age < 26)    //else if (age<26) �߼���Ҳ�У�����д��18<=age>=26
//			printf("����\n");
//		else if (age >= 26 && age < 40)
//			printf("����\n");
//		else if (age >= 40 && age < 60)
//			printf("׳��\n");
//		else if (age >= 60 && age <= 100)
//			printf("����\n");
//		else
//			printf("lao\n");
//	
//		/*if (age >= 18)
//		{ 
//			printf("����\n");
//		}
//		else
//		{ 
//			printf("δ����\n");
//			printf("����̸����\n");
//		}*/
//		/*if (age >= 18)
//			printf("����\n");*/
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
//		printf("����\n");
//
//	return 0;

//1-100������
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


//switch���-------------------------------------------------------------------------------------------------------
//case �������  break ����ֹͣ  default�Ӿ�
//case ������ͳ������ʽ
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//			printf("����1\n");
//			break;
//	case 2:
//				printf("����2\n");
//				break;
//	case 3:
//				printf("����3\n");
//				break;
//	case 4:
//				printf("����4\n");
//				break;
//	case 5:
//				printf("����5\n");
//				break;
//	case 6:
//				printf("����6\n");
//				break;
//	case 7:
//				printf("������\n");
//				break;
//	}
//	return 0;
//}

//1-5 ������
//6-7 ��Ϣ��

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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
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
//        {//switch����Ƕ��ʹ��
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