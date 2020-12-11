/* 
 * 习题8
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
	int x;
	char grade;
	scanf("%d", &x);
	x /= 10;
	if (x==10) x=9;
	if (x<6) grade='E';
	else grade = 74 - x;
	printf("等级为: %c", grade);
}
