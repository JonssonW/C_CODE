#define _CRT_SECURE_NO_WARNINGS 1
//����ֻ��һ�У��������ڣ����������գ�������֮�������û�зָ����� 20130225
//���У���һ��Ϊ������ݣ��ڶ���Ϊ�����·ݣ�������Ϊ�������ڡ����ʱ����·ݻ�����Ϊ1λ������Ҫ��1λ��ǰ�油0
//ͨ��scanf������%m��ʽ���ƿ���ָ�������������������������������˿�Ƚ�ȡ�������ݣ�
//ͨ��printf������%0��ʽ���Ʒ��������ֵʱָ�����治ʹ�õĿ�λ���Զ���0��
#include <stdio.h>
int main()
{
	int year = 0;
	int month = 0;
	int date = 0;
	scanf("%4md%2md%2md", &year, &month, &date);
	printf("year=%d\n", year);
	printf("month=%02d\n", month);
	printf("date=%02d\n", date);
	return 0;
}

