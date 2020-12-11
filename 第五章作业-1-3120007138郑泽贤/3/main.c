/*
 * 习题5.6
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

long long fact(int n)
{
	long long product = 1;
	for(int i=1;i<=n;i++)
		product *= i;
	return product;
}

void fun()
{
	long long sum=0;
	for(int i=1;i<=20;i++) sum+=fact(i);
	printf("1!+2!+..+20!=%lld",sum);
}
