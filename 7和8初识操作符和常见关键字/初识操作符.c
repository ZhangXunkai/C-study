#include <stdio.h>

int main()
{
	//int a = 9 / 2;
	//printf("%d\n",a);//打印结果是4
	//return 0;

	/*int a = 2;
	int b = a << 1;
	printf("%d\n",b);
	return 0;*/

	//int a = 0;
	//printf("%d\n",!a);//0是假，非0是真，!a可以输出很多数字来表示真，但有规定，当把假变成真的时候，结果为1。所以这里输出结果是1。
	//return 0;


	//int arr[10] = {0};
	//printf("%d\n",sizeof(arr));//打印结果是40，因为arr数组里有10个元素，每一个元素占4个字节，那就一共占40个字节。
	//int sz = sizeof(arr) / sizeof(arr[0]);//C语言就是这样计算数组元素个数的
	//printf("%d\n",sz);
	//return 0;

	/*int a = 0;
	printf("%d\n",~a);
	return 0;*/

	//int a = 10;
	//int b = a++;//后置++  先使用，后++
	//printf("%d\n", b);//10
	//printf("%d\n", a);//11
	////int b = ++a;//前置++  先++，后使用
	////printf("%d\n",b);//11
	////printf("%d\n",a);//11
	//return 0;

	/*int a = (int)3.14;
	printf("%d\n",a);
	return 0;*/

	//int a = 5;
	//int b = 3;
	//int c = a && b;//结果为1，C语言非0为真，所以a和b都是真，那么a && b也是真，所以输出1
	//printf("%d\n",c);
	//return 0;

	int a = 0;
	int b = 3;
	int max = 0;
	//把a和b中的最大值放入max中
	if(a > b)
	   max = a;
	else
	   max = b;
	//以上表达式用三目操作符来写是这样的：
	max = a > b ? a : b;
	printf("%d\n",max);
	return 0;
}