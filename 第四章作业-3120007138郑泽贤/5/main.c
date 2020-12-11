/* 
 * 编程判断输入的三条边能否构成三角形: 
 * 输入:三角形的三条边 
 * 输出:不是三角形，一般，等腰，直角，等边
 */

#include <stdio.h>
#include <math.h>

#define SWAP(A,B) A=A^B;B=A^B;A=A^B;

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
	printf("输入三边\n");
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a>c){SWAP(a,c)}
	if(b>c){SWAP(b,c)}

	if(a+b<=c){
		printf("不是三角形");
		return;
	}
		
	if(a*a + b*b == c*c){
		if(a==b) printf("等腰直角三角形");
		else printf("直角三角形");
		return;
	}

	if(a>b){SWAP(a,b)}
	if(a==b || b==c){
		if(a==b && b==c) printf("等边三角形");
		else printf("等腰三角形");
		return;
	}
	printf("一般三角形");
}
