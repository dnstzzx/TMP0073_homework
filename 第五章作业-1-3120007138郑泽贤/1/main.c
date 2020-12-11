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
	int i,sum=0;
	for(i=1;i<=99;i+=2) sum+=i;
	printf("1+3+5+…+99=%d",sum);
}
