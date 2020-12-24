/*
 *	排序-选择法
 */
#include <stdio.h>

#define SWAP(a,b) {int c=a;a=b;b=c;}
void rank(int nums[], int length);

int main()
{
	printf("-------------- 3120007138 郑泽贤 -------------\n");

	int array[]={8,6,-9,61,52,4,3,0,3,-1,4848};
	int length = sizeof(array)/sizeof(int);
	rank(array, length);
	printf("排序：\n");
	for(int i=0;i<length;i++){
		printf("%d\t", array[i]);
	}

	printf("\n---------------------------------------------\n按 ctrl + c 结束");
	while(1) getchar();
	return 0;
}

void rank(int nums[], int length)
{
	for(int i=0;i<length-1;i++)
		for(int j=i+1;j<length;j++)
			if(nums[i]>nums[j])
				SWAP(nums[i],nums[j])

}
