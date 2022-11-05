#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

					预 处 理 指	令
	# 开头的
	#define
	 1.定义标识符

#define MAX 100
#define STR "666"
#define reg register	// 为关键字register创建一个简短的名称reg
#define do_forever for(;;) // 把for(;;)这条语句替换为do_forever - 死循环语句
		后面不加 ;  否则会和其他内容成为整体 ，如 100;
int main()
{
	int max = MAX;
	reg a;
	register b;
	printf("%s ", STR);
	return 0;
}
#define SQUARE(X) X*X	//	#define 定义宏，SQUARE和()必须紧贴 
#define SQUARE(X) (X)*(X)
int main()
{
	int a = 5;
	printf("%d ", SQUARE(5));
	printf("%d ", SQUARE(5 + 1));	//	宏是完全替换，而非传参(int X),
						结果= 5+1 * 5+1 = 5+5+1=11
						如果想要宏实现自己的想法，则在宏里添加括号()
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
	程序中使用#define定义符号和宏时，步骤：
	1.调用宏时，首先检查参数，查看是否包含由#define定义的符号，若有则首先被替换
	2.替换文本后插入到原来的位置。对于宏，参数名被他们的值替换
	3.最后再次对结果文件扫描，检查是否包含由#define定义的符号，若有则重复上述步骤

	注意:
	1.宏参数和#define定义中可以出现其他#define定义的常量。但宏不能出现递归
	2.字符串中的内容不被#define修改(如printf("MAX = %d)中的MAX)

#define PRINT(X) printf("the value of X is %d\n",X)
#define PRINT(X) printf("the value of " #X " is %d\n",X)
									   "X",未改变成值 - 把参数插入到字符串中
int main()
{
		printf("hello world\n");
		printf("hello " "world\n");
		printf("hel""lo ""world\n");	//	三个hello world

	int a = 10;
	int b = 20;

	PRINT(a);// printf("the value of " "a" " is %d\n",X);
	PRINT(b);// printf("the value of " "b" " is %d\n",X);

	return 0;
}

#define ADD(x,y) x##y
				##可以把他位于两边的符号合成一个符号，允许宏定义从分离的文本片段创建标识符
int main()
{
	int Baby = 520;
	printf("%d ", ADD(Ba, by));
	printf("%d ", Baby); // 二者等价
	return 0;
}