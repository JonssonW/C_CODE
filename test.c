#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));//4*4=16
//
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    char str[] = "hello bit";
//    //[hello bit\0]
//    printf("%d %d\n", sizeof(str), strlen(str));
//    //10 9
//    //strlen - ����-���ַ������ȵģ���\0֮ǰ���ֵ��ַ�����
//    //sizeof - ������-�������/������ռ�ڴ��С����λ���ֽ�
//
//    char acX[] = "abcdefg";//a b c d e f g \0
//    char acY[] = {'a','b','c','d','e','f','g' };
//
//        //A.����acX������acY�ȼ� no
//        //B.����acX������acY�ĳ�����ͬ no
//        //C.����acX�ĳ��ȴ�������acY�ĳ��� yes
//        //D.����acX�ĳ���С������acY�ĳ��� no
//    //int a[2][] = { {0,1,2},{3,4,5} };//no
//    //int a[][3] = { {0,1,2},{3,4,5} };//yes
//   // int a[2][4] = { {0,1,2},{3,4},{5} };//no
//    //int a[][3] = { {0,,2},{},{3,4,5} };//no
//
//    return 0;
//}
//


//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}
//


//
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	//int arr3[5] = {0};
//	//��������������Ԫ�صĵ�ַ - 0x0012ff44
//	//3 = 5;//err
//	/*arr3 = arr1;
//	arr1 = arr2;
//	arr2 = arr3;*/
//
//	return 0;
//}
//
//
//


//int main()
//{
//	int a = 10;//aռ4���ֽ� - 
//	int * pa = &a;//�õ�����a��4���ֽ��е�һ���ֽڵĵ�ַ
//	*pa = 20;
//
//	return 0;
//}


//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//
//	return 0;
//}
