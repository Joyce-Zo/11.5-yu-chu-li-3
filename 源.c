#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

					Ԥ �� �� ָ	��
	# ��ͷ��
	#define
	 1.�����ʶ��

#define MAX 100
#define STR "666"
#define reg register	// Ϊ�ؼ���register����һ����̵�����reg
#define do_forever for(;;) // ��for(;;)��������滻Ϊdo_forever - ��ѭ�����
		���治�� ;  �������������ݳ�Ϊ���� ���� 100;
int main()
{
	int max = MAX;
	reg a;
	register b;
	printf("%s ", STR);
	return 0;
}
#define SQUARE(X) X*X	//	#define ����꣬SQUARE��()������� 
#define SQUARE(X) (X)*(X)
int main()
{
	int a = 5;
	printf("%d ", SQUARE(5));
	printf("%d ", SQUARE(5 + 1));	//	������ȫ�滻�����Ǵ���(int X),
						���= 5+1 * 5+1 = 5+5+1=11
						�����Ҫ��ʵ���Լ����뷨�����ں����������()
	return 0;
}

#define DOUBLE(X) X+X
#define DOUBLE(X) ((X)+(X))
int main()
{
	int a = 5;
	int ret = 10 * DOUBLE(a);
			10 * 5+5 = 50+5=55
	printf("%d ", ret);
	return 0;
}
	������ʹ��#define������źͺ�ʱ�����裺
	1.���ú�ʱ�����ȼ��������鿴�Ƿ������#define����ķ��ţ����������ȱ��滻
	2.�滻�ı�����뵽ԭ����λ�á����ں꣬�����������ǵ�ֵ�滻
	3.����ٴζԽ���ļ�ɨ�裬����Ƿ������#define����ķ��ţ��������ظ���������

	ע��:
	1.�������#define�����п��Գ�������#define����ĳ��������겻�ܳ��ֵݹ�
	2.�ַ����е����ݲ���#define�޸�(��printf("MAX = %d)�е�MAX)

#define PRINT(X) printf("the value of X is %d\n",X)
#define PRINT(X) printf("the value of " #X " is %d\n",X)
									   "X",δ�ı��ֵ - �Ѳ������뵽�ַ�����
int main()
{
		printf("hello world\n");
		printf("hello " "world\n");
		printf("hel""lo ""world\n");	//	����hello world

	int a = 10;
	int b = 20;

	PRINT(a);// printf("the value of " "a" " is %d\n",X);
	PRINT(b);// printf("the value of " "b" " is %d\n",X);

	return 0;
}

#define ADD(x,y) x##y
				##���԰���λ�����ߵķ��źϳ�һ�����ţ�����궨��ӷ�����ı�Ƭ�δ�����ʶ��
int main()
{
	int Baby = 520;
	printf("%d ", ADD(Ba, by));
	printf("%d ", Baby); // ���ߵȼ�
	return 0;
}