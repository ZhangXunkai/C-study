#include <stdio.h>

//int main()
//{
//	int a = 10;//a在内存中要分配空间的-4个字节
//	&a;//当取一个4字节的变量地址时，实际上取的是第1个字节的地址，因为只要取到第1个字节的地址，后面3个字节就很好找到了
//	printf("%p\n",&a);//%p是打印地址的
//
//	int *pa = &a;//pa是用来存放地址的,在C语言中叫做指针变量。
//	//* 说明pa是指针变量
//	//int 说明pa指向的对象是int类型的
//
//	char c ='w';
//	char *pc = &c;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *pa = &a;
//
//	*pa = 20;//* 叫解引用操作符，是一个单目操作符，*pa就是通过pa里面的地址找到a
//
//	printf("%d\n",a);
//	return 0;
//}

int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	
	return 0;
}