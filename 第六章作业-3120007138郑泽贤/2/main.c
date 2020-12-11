/*
 *	求10个实数的最小值。
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
	double real_nums[10]={0},min;
	printf("输入十个实数\n");
	for(int i=0;i<10;i++){
		scanf("%lf",&(real_nums[i]));
	}
	min = real_nums[0];
	for(int i=1;i<10;i++)
		if(real_nums[i]<min)
			min=real_nums[i];
	printf("最小的是%lf",min);
}
