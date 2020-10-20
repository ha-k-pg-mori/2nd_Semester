
#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
	// エネミー専用変数
	m_Routine = 0;
}

Enemy::~Enemy()
{
}

void Enemy::Exec()
{
}

void Enemy::Draw()
{
}

// 引数の矩形情報と、自分が当たっているか判定
bool Enemy::CheckHit(int x, int y, int width, int height)
{
	printf("EnemyクラスのCheckHit()\n");

	// オーバーライド元の関数を使うには明確に宣言して呼び出す
	Base::CheckHit(x, y, width, height);

	// 何かしらの当たり判定
	return false;
}


