#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//	signed 有符号的 10 -20
//	unsigned 无符号的 对它来说没有符号意义

//	关键字typedef 类型定义 -- 类型重命名
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num1 = 10;
//	u_int num2 = 20;
//  num1和num2这两个变量的类型是一样的
//	return 0;
//}

//	关键字static
//1. 修饰局部变量 - 称为静态局部变量
//2. 修饰全局变量 - 称为静态全局变量
//3. 修饰函数 - 称为静态函数

//static修饰局部变量,改变了局部变量的生命周期，本质上是改变了变量的存储类型

//void test()
//{
//	static int a = 1;  //static修饰局部变量int， 使变量a输出之后不被销毁
//	a++;
//	printf("%d ", a);  //没有static修饰 输出结果为10个2，修饰后为2~11
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

//static修饰全局变量 
//使得这个全局变量只能在自己所在的源文件内部使用，其他源文件不能使用，即使extern声明也不能用
//全局变量在其他源文件内部可以被使用，具有外部链接属性，被static修饰过后，就变成了内部链接属性其他源文件不能链接到这个静态的全局变量

//static修饰函数 和static修饰全局变量 一样

//在另一个源文件中创建函数
//static int Add(int x, int y)
//{
//	return x + y;
//}

//声明函数 extern int Add(int,int);  -  x和y  不用告知


//#define 定义常量和宏
//define 是一个预处理指令
//1.define定义符号

//#define MAX 1000
//
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2. define 定义宏
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
//	int a = 10;//a在内存中要分配空间的 - 4个字节
//	printf("%p\n", &a);//%p 专门用来打印地址的
//	int* pa = &a;//pa是用来存放地址的，在C语言中pa叫是指针变量
//
//	//	//* 说明 pa是指针变量
//	//	//int 说明pa执行的对象是int类型的
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
//	*pa = 20;//* 解引用操作 | *pa就是通过pa里边的地址，找到a
//
//	printf("%d\n", a); //a=20，pa就可以代表a
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
//32位的系统 - 4byte
//64位的 - 8byte


//结构体可以让C语言创建新的类型出来

//创建一个学生

struct Stu
{
	char name[20];//成员变量
	int age;
	double score;
};

//创建一个的书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "张三", 20, 85.5 };//结构体的创建和初始化
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量

	struct Stu * ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	// %f 打印单精度浮点数  %lf 打印双精度浮点数
	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);
	//结构体指针-> 结构体成员
	return 0;
}