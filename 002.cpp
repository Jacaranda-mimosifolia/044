#include<stdio.h>
#define H "hello world" 
#define i int
#define add(a,b,c) (((a)+(b))*(c))
int main()
{
	i a,b,c;
	printf("%s\n",H);
	scanf("%d%d%d",&a,&b,&c);
	printf("add=%d",add(a,b,c));	
	return 0;
}
// #define定义标识符的本质就是替换 
// #define 机制包括了一个规定，允许把参数替换到文本中，这种实现通常称为宏（macro）或定义宏 (define macro)
//第一种是不带参数的宏定义
//第二种是带参数的宏定义
