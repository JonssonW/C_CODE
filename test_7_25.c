#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//	signed �з��ŵ� 10 -20
//	unsigned �޷��ŵ� ������˵û�з�������

//	�ؼ���typedef ���Ͷ��� -- ����������
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num1 = 10;
//	u_int num2 = 20;
//  num1��num2������������������һ����
//	return 0;
//}

//	�ؼ���static
//1. ���ξֲ����� - ��Ϊ��̬�ֲ�����
//2. ����ȫ�ֱ��� - ��Ϊ��̬ȫ�ֱ���
//3. ���κ��� - ��Ϊ��̬����

//static���ξֲ�����,�ı��˾ֲ��������������ڣ��������Ǹı��˱����Ĵ洢����

//void test()
//{
//	static int a = 1;  //static���ξֲ�����int�� ʹ����a���֮�󲻱�����
//	a++;
//	printf("%d ", a);  //û��static���� ������Ϊ10��2�����κ�Ϊ2~11
//}
//
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//static����ȫ�ֱ��� 
//ʹ�����ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ�����ʹ�ã���ʹextern����Ҳ������
//ȫ�ֱ���������Դ�ļ��ڲ����Ա�ʹ�ã������ⲿ�������ԣ���static���ι��󣬾ͱ�����ڲ�������������Դ�ļ��������ӵ������̬��ȫ�ֱ���

//static���κ��� ��static����ȫ�ֱ��� һ��

//����һ��Դ�ļ��д�������
//static int Add(int x, int y)
//{
//	return x + y;
//}

//�������� extern int Add(int,int);  -  x��y  ���ø�֪


//#define ���峣���ͺ�
//define ��һ��Ԥ����ָ��
//1.define�������

//#define MAX 1000
//
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2. define �����
//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//
//	return 0;
//}

//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ�� - 4���ֽ�
//	printf("%p\n", &a);//%p ר��������ӡ��ַ��
//	int* pa = &a;//pa��������ŵ�ַ�ģ���C������pa����ָ�����
//
//	//	//* ˵�� pa��ָ�����
//	//	//int ˵��paִ�еĶ�����int���͵�
//
//	char ch = 'c';
//	char* pc = &ch;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//* �����ò��� | *pa����ͨ��pa��ߵĵ�ַ���ҵ�a
//
//	printf("%d\n", a); //a=20��pa�Ϳ��Դ���a
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}
//32λ��ϵͳ - 4byte
//64λ�� - 8byte


//�ṹ�������C���Դ����µ����ͳ���

//����һ��ѧ��

struct Stu
{
	char name[20];//��Ա����
	int age;
	double score;
};

//����һ�����������
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "����", 20, 85.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����

	struct Stu * ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	// %f ��ӡ�����ȸ�����  %lf ��ӡ˫���ȸ�����
	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);
	//�ṹ��ָ��-> �ṹ���Ա
	return 0;
}