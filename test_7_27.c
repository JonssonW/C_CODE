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
//	//��whileѭ���У�break�������õ���ֹѭ��
//	// 
//	//��whileѭ���У�continue����������������ѭ��continue��ߵĴ���
//	//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
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

//EOF - end of file - �ļ�������־

//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//���һ���ַ�
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	//ctrl+z - getchar �Ͷ�ȡ����
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}


//EOF  ������-1 getchar ����ֵ����Ϊint
//
//int main()
//{
//	//
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//123456
//	//gets
//	printf("��ȷ������(Y/N):>");
//	//��������
//	//getchar();//����'\n'
//	// 
//	//�����������ж���ַ�
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}



//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')   //0~9��ASCII�����48-57 ����ʾ����48-57��Ķ�����������
//			continue;
//
//		putchar(ch);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 1;//��ʼ��
//
//	while (i <= 10)//�жϲ���
//	{
//		printf("%d ", i);
//		i++;//��������
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

//ѭ�����ڸı�ѭ������������
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
//	//�жϲ��ֵ�ʡ�� - �жϲ��ֺ�Ϊ��
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
	for (i = 0, k = 0; k = 0; i++, k++)  //k=0, ��0��ֵ��k�� �жϲ��ֺ�Ϊ�٣���һ�ζ���ִ��
		//k==0 ���ж�k�Ƿ����0��
	{
		k++;
	}
	return 0;
}