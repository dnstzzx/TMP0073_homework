/*
 *	杨辉三角
 */
#include <stdio.h>
#include <math.h>

#define LINE_COUNT 10

void fun();
int index(int i,int j);

int main()
{	
	printf("-------------- 3120007138 郑泽贤 -------------\n");
	fun();
	printf("\n----------------------------------------------\n按 ctrl + c 结束");
	while(1) getchar();
	return 0;
}

inline int index(int i,int j)
{
	return i*(i+1)/2+j;
}
	

void fun()
{
	int nums[(LINE_COUNT*LINE_COUNT+LINE_COUNT)/2];
	nums[0]=1;
	nums[1]=1;
	nums[2]=1;
	printf("1\n1   1\n");
	for(int i=2;i<LINE_COUNT;i++){
		printf("1   ");
		nums[index(i,0)]=1;
		for(int j=1;j<i;j++){
			nums[index(i,j)] = nums[index(i-1,j)] + nums[index(i-1,j-1)];
			if(nums[index(i,j)]>=100){
				printf("%d ",nums[index(i,j)]);
			}else if(nums[index(i,j)]>=10){
				printf("%d  ",nums[index(i,j)]);
			}else{
				printf("%d   ",nums[index(i,j)]);
			}
		}
		printf("1\n");
		nums[index(i,i)]=1;
	}
}
