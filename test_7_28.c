#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	do
	{
		//if (i == 6)
		//break;    ��������ѭ��
		//continue; ��������ѭ��ʣ�ಿ�֣���������ѭ����������do whileѭ���п���6  �޷����

		printf("%d ", i);
		i++;
	} while(i<=10);
	return 0;
}



n!
int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
		
	}
	printf("%d\n", ret);

	return 0;
}

//���� 1!+ 2!+ 3!+ ���� + 10!
int main()
{
	int n = 1;
	int i = 0;
	int ret = 1;
	int sum = 0;
	while (n <= 3)
	{
		ret = 1;//����n���Ľ׳�֮ǰ����ret��ʶΪ1;
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		n++;
		sum += ret;
	}
	printf("%d\n", sum);

	return 0;
}
