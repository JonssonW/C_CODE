#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	//确定科目数
	scanf("%d", &n);
	double arr[5] = { 0 };
	//根据科目数，输入各科成绩
	for (i = 0; i < n; i++)
	{
		scanf("%lf", &arr[i]);
	}
	int j = 0;
	//冒泡排序：将成绩从大到小排序
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
	//求和算平均值
	for (i = 0; i < n; i++)
	{
		 sum = sum+arr[i];
	}
	double avg = sum / 5;
	printf("%.2f %.2f %.2f", max, min,avg);
	return 0;
}