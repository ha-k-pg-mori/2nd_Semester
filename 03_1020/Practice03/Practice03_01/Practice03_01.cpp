
#include <stdio.h>
#include <stdlib.h>

#include "Player.h"
#include "Enemy.h"

int main()
{
	Base* player = new Player();
	Base* enemy  = new Enemy();

	player->SetMoveSpeed(5.0f);
	enemy->SetHp(100);

	if( player->CheckHit(10, 10, 20, 30) == false )
	{
		printf("“–‚½‚Á‚Ä‚¢‚Ü‚¹‚ñ\n");
	}
	if (enemy->CheckHit(10, 10, 20, 30) == false)
	{
		printf("“–‚½‚Á‚Ä‚¢‚Ü‚¹‚ñ\n");
	}

	delete player;
	delete enemy;

	system("pause");
	return 0;
}

