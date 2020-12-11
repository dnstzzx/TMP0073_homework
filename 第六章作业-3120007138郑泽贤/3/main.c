/*
 *	僵尸排名
 */
#include <stdio.h>
#include <math.h>

typedef struct
{
	const char *name;
	int damage;
}Zombie;


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
	Zombie zombies[5] = {{"主唱僵尸  ",75},{"伽刚特尔  ",97},{"棒球僵尸  ",70},{"冰蘑菇王  ",88},{"太阳花妹妹",10}};
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			if(zombies[j].damage<zombies[j+1].damage){
				Zombie tmp = zombies[j];
				zombies[j] = zombies[j+1];
				zombies[j+1] = tmp;
			}
	
	printf("前三名的僵尸是:\n");
	for(int i=0;i<3;i++){
		printf("%s  攻击力为:%d\n",zombies[i].name,zombies[i].damage);
	}
	
}
