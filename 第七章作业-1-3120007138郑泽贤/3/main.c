/*
 *	不知道在干什么
 */
#include <stdio.h>
#include <math.h>

int fact(int num);
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
	int nums[]={8, 6, 12};
	printf("8!+12！= %d\n", fact(nums[0]) + fact(nums[2]));
	printf("8!+6!+12！= %d", fact(nums[0]) + fact(nums[1]) + fact(nums[2]));
}


int fact(int num)
{
	int result = 1;
	for(;num>1;num--)
		result *= num;
	
	return result;

	/*
	if(num==1) return 1;
	return num * fact(num-1)

	*/

}
