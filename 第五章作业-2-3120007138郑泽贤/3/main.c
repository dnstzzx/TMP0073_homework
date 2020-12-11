/*
 *	判断素数
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	long data;
	struct Node *next;
}Node,List;

void fun();
Node* new_node(long data);
Node* append_data(Node *tail,long data);

int main()
{
	printf("-------------- 3120007138 郑泽贤 -------------\n");
	fun();
	printf("\n---------------------------------------------\n按 ctrl + c 结束");
	while(1) getchar();
	return 0;
}

inline Node* new_node(long data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	return node;
}

inline Node* append_data(Node *tail,long data)
{
	Node *node = new_node(data);
	tail->next=node;
	return node;
}
	
void fun()
{
	List *primes = new_node(2);
	Node *tail = primes;
	Node *tmp;
	long n = 0;
	printf("请输入需要判断的数\n");
	scanf("%ld",&n);
	for(int i=3;i<n;i++){
		tmp = primes;
		int is_prime=1;
		while(tmp->next!=NULL){
			if(i % tmp->data == 0){
				is_prime = 0;
				break;
			}
			tmp = tmp->next;
		}
		if(is_prime){
			tail=append_data(tail, i);
			//printf("%d\n",i);
		}
	}

	tmp = primes;
	int is_prime=1;
	while(tmp->next!=NULL){
		if(n % tmp->data == 0){
			is_prime = 0;
			break;
		}
		tmp = tmp->next;
	}
	printf("该数");
	printf(is_prime ? "是质数" : "不是质数");
}
