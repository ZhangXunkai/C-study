#include <stdio.h>

#define MAX 10000//MAX就是define定义的标识符常量。这行代码也可以写在main函数里。
int main()
{
	//1 字面常量：
	10;
	10.5;
	"abc";
	'a';

	//2 const修饰的常变量：
	const int num = 20;//num就是常变量-具有常属性（不能被改变的属性），num本质还是一个变量。

	//3 #define定义的标识符常量：
	int n = MAX;
	printf("n=%d\n",n);//打印结果是n=10000

	return 0;
}