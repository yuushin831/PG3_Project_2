#include<stdio.h>
#include"Enemy.h"

int main()
{
	Enemy enemy;
	int input;

	while (true)
	{
		//‘±‚¯‚é‚©‚Ç‚¤‚©“ü—Í‚³‚¹‚é
		printf("0:exit 1:continue  ==>");
		scanf_s("%d", &input);
		if (input == 0)break;

		//s“®
		enemy.Update();
	}
	return 0;
}