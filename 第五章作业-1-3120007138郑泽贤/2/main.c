/**
 * 
 * 求100的阶乘-高精度
 * 
 */
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define LENGTH 160
#define SIZE LENGTH*sizeof(int)

int poola[LENGTH];
int poolb[LENGTH];
int *product=&poola, *last_product=&poolb;

void fun();


int main()
{
	printf("-------------- 3120007138 郑泽贤 -------------\n");
	fun();
	printf("\n---------------------------------------------\n按 ctrl + c 结束");
	while(1) getchar();
	return 0;
}

void multiply(int bvalue)
{
	// 乘积小端存储，操作数大端存储，则 第i位操作数 乘以 第j位乘积 为 第j-i位结果的原始乘积
	char b[3];
	b[0]=bvalue%10, b[1]=(bvalue%100)/10, b[2]=bvalue/100;

	char *tmp = product;
	product = last_product;
	last_product = tmp;
	memset(product,0,SIZE);

	for(int i=0;i<3;i++)	// 计算原始乘积
		if(b[i])
			for(int j=LENGTH-1;j>=0;j--)
				if(last_product[j])
					product[j-i] += b[i] * last_product[j];

	for(int i=LENGTH-1;i>0;i--)	//进位
		if(product[i]>9){
			product[i-1] += product[i] / 10;
			product[i] %= 10;
		}
}

void fun()
{
	memset(poola, 0, SIZE);
	memset(poolb, 0, SIZE);

	product[LENGTH-1] = 1;
	for(int i=1;i<=100;i++)
		multiply(i);		
	
	printf("100! = ");
			int j=0;
			for(;j<LENGTH-1;j++)	//跳过前面的0
				if(product[j])	break;
			for(;j<LENGTH;j++)
				printf("%d", product[j]);
}
