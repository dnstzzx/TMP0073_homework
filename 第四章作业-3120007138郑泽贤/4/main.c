/* 
 * 习题9
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
	printf("输入不多于5位的正整数,不要加入其它东西\n");
	
	char input[] = {0,0,0,0,0,0,0,0};
	int len = 1;
	scanf("%s", input);
	for(int i=4;i>=0;i--){
		int value = input[i];
		if(value != '\0' && value != '\n' && value != '\r'){
			len = i + 1;
			break;
		}
	}
	printf("位数为: %d", len);
}
