#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	//ȷ����Ŀ��
	scanf("%d", &n);
	double arr[5] = { 0 };
	//���ݿ�Ŀ����������Ƴɼ�
	for (i = 0; i < n; i++)
	{
		scanf("%lf", &arr[i]);
	}
	int j = 0;
	//ð�����򣺽��ɼ��Ӵ�С����
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				double tmp = 0;
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	double max = arr[0];
	double min = arr[4];
	double sum = 0;
	//�����ƽ��ֵ
	for (i = 0; i < n; i++)
	{
		 sum = sum+arr[i];
	}
	double avg = sum / 5;
	printf("%.2f %.2f %.2f", max, min,avg);
	return 0;
}