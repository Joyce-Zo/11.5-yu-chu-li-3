#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//C代码（文本文件）																									二进制信息（2进制文件）
//test.c(源文件 / 源程序) - > test.exe - > 运行
//编译(编译器) - > 翻译环境 < -链接(链接器)																			运行环境
//	test.obj
//
//	test.c																													test.exe
//	翻译环境																											运行环境
//	编译(编译器)																 |				链接(链接器)
//	目标文件
//	Ⅰ.预编译 / 预处理						 Ⅱ.编译					 Ⅲ.汇编					1.合并段表
//	test.c							  test.i				      test.s				test.o		2.符号表的合并与重定位	test.exe
//	1.#include 头文件的包含				1.语法分析					把汇编代码转换成		
//	2.注释的删除，使用空格替换			2.词法分析						二进制指令
//	3.#difene的直接替换MAX->100			3.语义分析					形成符号表
//	文本操作								4.符号汇总
//	把c语言代码翻译成汇编代码

	//	程序执行过程：
	//	1.程序载入内存。(有操作系统的环境中，一般又操作系统自动完成；没有操作系统的环境，必须手动完成；或通过可执行代码置入只读内存完成)
	//	2.程序开始执行，调用main函数
	//	3.开始执行程序代码，程序使用一个运行时堆栈来存放函数的局部变量和返回地址，同时程序也可以使用静态内存static，
	//	4.终止程序。正常终止main函数；也有可能意外终止。

//				预 定 义 符 号

//#define MAX 100 // 非预定义符号，是自己定义的
//
//int main()
//{
//	//printf("%s\n ", __FILE__);	// 文件的绝对路径
//	//printf("%d \n", __LINE__);	// 当前代码行数 - 所在第几行
//	//printf("%s\n", __DATE__);		// 当前日期
//	//printf("%s\n", __TIME__);		// 当前时间
//
//	int i = 0;
//	//int arr[10] = { 0 };
//	//FILE* pf = fopen("log.txt", "w");
//	//for (i = 0; i < 10; i++)
//	//{
//	//	arr[i] = i;
//	//	fprintf(pf,"i= %d file=%s line= %d date= %s time= %s function= %s\n",
//	//		arr[i], __FILE__, __LINE__, __DATE__, __TIME__,__FUNCTION__);
//	//	printf("\n");
//	//}
//	printf("%d ", __STDC__); // 如果编译器遵循ANSI C(标准C语言),其值为1，否则未定义
//	//fclose(pf);
//	//pf = NULL;
//	return 0;
//}

//					预 处 理 指	令
//	# 开头的
//	#define
//	 1.定义标识符

#define MAX 100
#define STR "666"
#define reg register	// 为关键字register创建一个简短的名称reg
#define do_forever for(;;) // 把for(;;)这条语句替换为do_forever - 死循环语句
int main()
{
	int max = MAX;
	reg a;
	register b;
	printf("%s ", STR);
	return 0;
}