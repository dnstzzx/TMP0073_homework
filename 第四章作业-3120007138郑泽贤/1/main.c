/* 
 * 习题4
 */
#include <stdio.h>
#include <math.h>

void fun();

int main()
{	
	printf("-------------- 3120007138 郑泽贤 -------------\n");
	fun();
	printf("\n---------------------------------------------\n按 ctrl + c 结束");
	while(1) getchar();
	return 0;
}

void fun()
{
	printf("输入三个整数\n");
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int max = a;
	max = max > b ? max : b;
	max = max > c ? max : c;
	printf("最大的整数是: %d", max);
}

int min(int a,int b,int c){
	int min=a;
	min = min < b ? min : b;
	min = min < c ? min : c;
	return min;
}
