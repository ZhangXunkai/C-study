#include <stdio.h>

int main()
{
	//int a = 9 / 2;
	//printf("%d\n",a);//��ӡ�����4
	//return 0;

	/*int a = 2;
	int b = a << 1;
	printf("%d\n",b);
	return 0;*/

	//int a = 0;
	//printf("%d\n",!a);//0�Ǽ٣���0���棬!a��������ܶ���������ʾ�棬���й涨�����Ѽٱ�����ʱ�򣬽��Ϊ1������������������1��
	//return 0;


	//int arr[10] = {0};
	//printf("%d\n",sizeof(arr));//��ӡ�����40����Ϊarr��������10��Ԫ�أ�ÿһ��Ԫ��ռ4���ֽڣ��Ǿ�һ��ռ40���ֽڡ�
	//int sz = sizeof(arr) / sizeof(arr[0]);//C���Ծ���������������Ԫ�ظ�����
	//printf("%d\n",sz);
	//return 0;

	/*int a = 0;
	printf("%d\n",~a);
	return 0;*/

	//int a = 10;
	//int b = a++;//����++  ��ʹ�ã���++
	//printf("%d\n", b);//10
	//printf("%d\n", a);//11
	////int b = ++a;//ǰ��++  ��++����ʹ��
	////printf("%d\n",b);//11
	////printf("%d\n",a);//11
	//return 0;

	/*int a = (int)3.14;
	printf("%d\n",a);
	return 0;*/

	//int a = 5;
	//int b = 3;
	//int c = a && b;//���Ϊ1��C���Է�0Ϊ�棬����a��b�����棬��ôa && bҲ���棬�������1
	//printf("%d\n",c);
	//return 0;

	int a = 0;
	int b = 3;
	int max = 0;
	//��a��b�е����ֵ����max��
	if(a > b)
	   max = a;
	else
	   max = b;
	//���ϱ��ʽ����Ŀ��������д�������ģ�
	max = a > b ? a : b;
	printf("%d\n",max);
	return 0;
}