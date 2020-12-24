/*
 *	求最小
 */
#include <stdio.h>
#include <math.h>

int min(int a,int b,int c);

int main()
{	
	printf("-------------- 3120007138 郑泽贤 -------------\n");
	min(2,3,4);
	printf("\n---------------------------------------------\n按 ctrl + c 结束");
	while(1) getchar();
	return 0;
}

int min(int a,int b,int c)
{
	int minimum = a;
	minimum = b>minimum ? b : minimum;
	minimum = c>minimum ? c : minimum;
	return minimum;
}
