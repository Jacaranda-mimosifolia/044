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
// #define�����ʶ���ı��ʾ����滻 
// #define ���ư�����һ���涨������Ѳ����滻���ı��У�����ʵ��ͨ����Ϊ�꣨macro������� (define macro)
//��һ���ǲ��������ĺ궨��
//�ڶ����Ǵ������ĺ궨��
