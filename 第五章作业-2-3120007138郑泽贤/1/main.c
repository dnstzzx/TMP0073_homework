/*
 *	九九乘法表
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
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++)
			if(j>=i)
				printf("%dx%d=%d\t",i,j, i*j);
		printf("\n");
	}
	
}
