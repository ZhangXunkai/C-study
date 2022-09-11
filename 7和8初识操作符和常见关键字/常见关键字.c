#include <stdio.h>

typedef unsigned int u_int;//把unsigned int重新定义为u_int

void test()
{
	int a = 1;
	a++;//先赋值，后+1
	printf("%d ",a);//打印结果是2
}
extern int g_val;//extern用来声明外部符号
//声明外部函数
extern int Add(int,int);//只要说明函数类型、函数名、函数参数是什么就行了，也可以写成：extern int Add(int x, inty);
int main()
{
	//{//在进入大括号时，a生命开始
	//	int a = 10;//a是自动创建、自动销毁的，所以a是自动变量
	//}//在出大括号时，a销毁
	//return 0;

	//unsigned int num = 100;
	//u_int num2 = 100;//此式与上面式子意义相同
	//return 0;

	//int i =0;
	//while (i < 10)//代码执行结果是10个2
	//{
	//	test();
	//	i++;
	//}
	//return 0;
	
	/*printf("%d\n",g_val);
	return 0;*/

	int a = 10;
	int b = 20;
	int sum = Add(a,b);
	printf("sum = %d\n",sum);
	return 0;
}
