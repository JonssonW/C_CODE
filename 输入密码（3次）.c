#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	//������ȷ���������ַ���"123456"
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		//if (password == "123456")//err - �����ַ����Ƚϣ�����ʹ��==��Ӧ��ʹ��strcmp �Ƚ϶�Ӧ�ַ���ASCIIֵ
		//string1����string2������<0���෴����>0; ��ͬ�Ļ� ����0;
		if(strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("��������������룡\n");
		}
	}
	if (i == 3)
		printf("��������������˳�����\n");

	return 0;
}