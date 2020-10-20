
#ifndef ENEMY_H
#define ENEMY_H

#include "Base.h"

//------------------------------
// エネミークラス
//------------------------------
class Enemy : public Base
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Draw();

	// 引数の矩形情報と、自分が当たっているか判定
	virtual bool CheckHit(int x, int y, int width, int height);

private:
	// Enemy専用変数
	int		m_Routine;		// 行動ルーチン管理変数
};

#endif // #ifndef ENEMY_H

