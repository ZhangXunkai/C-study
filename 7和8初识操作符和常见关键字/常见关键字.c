#include <stdio.h>

typedef unsigned int u_int;//��unsigned int���¶���Ϊu_int

void test()
{
	int a = 1;
	a++;//�ȸ�ֵ����+1
	printf("%d ",a);//��ӡ�����2
}
extern int g_val;//extern���������ⲿ����
//�����ⲿ����
extern int Add(int,int);//ֻҪ˵���������͡�������������������ʲô�����ˣ�Ҳ����д�ɣ�extern int Add(int x, inty);
int main()
{
	//{//�ڽ��������ʱ��a������ʼ
	//	int a = 10;//a���Զ��������Զ����ٵģ�����a���Զ�����
	//}//�ڳ�������ʱ��a����
	//return 0;

	//unsigned int num = 100;
	//u_int num2 = 100;//��ʽ������ʽ��������ͬ
	//return 0;

	//int i =0;
	//while (i < 10)//����ִ�н����10��2
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
