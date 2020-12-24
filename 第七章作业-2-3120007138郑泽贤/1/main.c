/*
 *	数组最大值及其下标
 */
#include <stdio.h>
#include <stdint.h>

uint64_t max(int32_t array[],int length);

int main()
{
	printf("-------------- 3120007138 郑泽贤 -------------\n");

	int32_t array[]={8,6,-9,61,52,4,3,0,3,-1};
	uint64_t result = max(array, sizeof(array) / 4);
	int max_index = result >> 32;
	int32_t maximum = (int32_t)result;
	if(maximum<0){
		maximum = (((uint32_t)maximum) << 1) >> 1;
		maximum *= -1;
	}

	printf("最大值为：%d, 下标为：%d", (int)maximum, max_index);


	printf("\n---------------------------------------------\n按 ctrl + c 结束");
	while(1) getchar();
	return 0;
}

uint64_t max(int32_t array[],int length)
{
	int32_t max_ind=0, max_val=array[0];
	for(int i =1;i<length;i++)
		if(array[i] > max_val){
			max_ind = i;
			max_val = array[i];
		}

	int neg = max_val < 0;
	if(neg)	max_val *= -1;

	uint64_t result = ((uint64_t)max_ind) << 32 | (uint32_t)max_val;
	if(neg) result |= (uint64_t)1 << 31;
	return result;
}

