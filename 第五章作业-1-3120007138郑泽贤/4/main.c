/*
 *习题5.8
 */

#include <math.h>
#include <stdio.h>

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
	for(int i=100;i<1000;i++)
		if(pow(i/100,3) + pow((i%100)/10,3) + pow(i%10,3) == i)
			printf("%d ",i);
}
