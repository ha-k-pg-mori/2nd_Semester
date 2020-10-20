
#include <stdio.h>
#include <stdlib.h>

#include "Player.h"
#include "Enemy.h"

void PrintHp(Base* target)
{
	if (target == nullptr)
	{
		return;
	}
	printf("hp = %d\n", target->GetHp());
}

int main()
{
	// Baseのポインタ変数配列
	Base* array[] =
	{
		new Player(),
		new Enemy()
	};
	array[1]->SetHp(100);

	

	// arrayを使って当たり判定をfor文で回す
	for (int i = 0; i < 2; i++)
	{
		if (array[i] != nullptr)
		{
			array[i]->Exec();

			PrintHp(array[i]);
			if (array[i]->CheckHit(10, 10, 20, 30) == false)
			{
				printf("当たってません\n");
			}
		}
		
	}
	
	// 実体の破棄
	for (int i = 0; i < 2; i++)
	{
		delete array[i];
		array[i] = nullptr;
	}

	// 純粋仮想関数を宣言したクラスは、
	// 単体で実体化させることが出来なくなる
	Base base;
	Base* pBase = new Base();

	system("pause");
	return 0;
}