/*
 *	选择排序
 */
#include <stdio.h>
#include <math.h>

void fun();

int main()
{	
	printf("-------------- 3120007138 郑泽贤 -------------\n");
	fun();
	printf("\n----------------------------------------------\n按 ctrl + c 结束");
	while(1) getchar();
	return 0;
}

void fun()
{
	int nums[10];
	printf("输入十个整数\n");
	for(int i=0;i<10;i++)
		scanf("%d",&nums[i]); 
    for(int i=0;i<9;i++){
        int min_index=i;
        for(int j=i+1;j<10;j++)
            if(nums[j] < nums[min_index])    
                min_index = j;    
		   int tmp=nums[i];
		   nums[i]=nums[min_index];
		   nums[min_index]=tmp;
    }

	printf("从小到大排序为：\n[%d",nums[0]);
	for(int i=1;i<10;i++)
		printf(", %d",nums[i]);
	printf("]");

}
