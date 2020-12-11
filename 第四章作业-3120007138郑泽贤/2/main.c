/* 
 * 习题7
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
	printf("输入x\n");
	int x, y;
	scanf("%d", &x);
	y =  x<0 ? -1 : x==0 ? 0 : 1;
	printf("y=%d", y);
}
