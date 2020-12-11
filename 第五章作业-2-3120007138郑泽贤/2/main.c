/*
 *	肥波垃圾数列前20个
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
	printf("0\t");
	int last=0,last_last=1;
	int tmp=0;
	for(int i=1;i<20;i++){
		tmp = last + last_last;
		last_last = last;
		last = tmp;
		printf("%d\t",tmp);
		if((i+1)%5 == 0)  printf("\n");
	}
	
}
