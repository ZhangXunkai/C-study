#include <stdio.h>

//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ��-4���ֽ�
//	&a;//��ȡһ��4�ֽڵı�����ַʱ��ʵ����ȡ���ǵ�1���ֽڵĵ�ַ����ΪֻҪȡ����1���ֽڵĵ�ַ������3���ֽھͺܺ��ҵ���
//	printf("%p\n",&a);//%p�Ǵ�ӡ��ַ��
//
//	int *pa = &a;//pa��������ŵ�ַ��,��C�����н���ָ�������
//	//* ˵��pa��ָ�����
//	//int ˵��paָ��Ķ�����int���͵�
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
//	*pa = 20;//* �н����ò���������һ����Ŀ��������*pa����ͨ��pa����ĵ�ַ�ҵ�a
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