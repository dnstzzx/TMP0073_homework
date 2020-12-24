/*
 *	例7.1改
 */
#include <stdio.h>
#include <math.h>

void print_sym(char sym,int count);
void print_content(char * content);


int main()
{	
	char sym;
	int count;
	char content[50];

	printf("符号： ");
	scanf("%c", &sym);
	printf("符号数量： ");
	scanf("%d", &count);
	printf("内容： ");
	scanf("%s", content);

	print_sym(sym, count);
	print_content(content);
	print_sym(sym, count);

	printf("\n\n按 ctrl + c 结束");
	while(1) getchar();
	return 0;
}

void print_sym(char sym,int count)
{
	printf("\n");
	for(int i=0;i<count;i++){
		printf("%c", sym);
	}
}

void print_content(char * content)
{
	printf("\n%s", content);

}
