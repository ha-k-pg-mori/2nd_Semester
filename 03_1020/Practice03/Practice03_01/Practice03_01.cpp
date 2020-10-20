
#include <stdio.h>
#include <stdlib.h>

#include "Player.h"
#include "Enemy.h"
#include"EnemyManager.h"

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
	/*
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
	/*Base base;
	Base* pBase = new Base();*/
	// EnemyManagerを使ったEnemyクラスの管理の例
	EnemyManager* enemyMng = new EnemyManager();
	Base* pEnemy           = nullptr;

	// ステージ開始時点でまとめて初期化
	enemyMng->CreateEnemy(0);
	enemyMng->CreateEnemy(1);
	pEnemy = enemyMng->CreateEnemy(2);
	enemyMng->CreateEnemy(3);
	enemyMng->CreateEnemy(4);
	enemyMng->CreateEnemy(4);
	enemyMng->CreateEnemy(4);

	// 作成したエネミーに各処理を行わせる
	enemyMng->Exec();
	enemyMng->Draw();

	// 指定したエネミーを削除
	enemyMng->DestoryEnemy(pEnemy);
	// 指定座標と接触しているエネミーを取得
	pEnemy = enemyMng->CheckHit(10, 10, 20, 30);

	system("pause");
	return 0;
}