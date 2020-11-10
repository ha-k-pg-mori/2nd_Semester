#ifndef ENEMY_H
#define ENEMY_H

#include<iostream>

// namespace 名前空間の書き方
// namaspace namaspaceの名前
// {
//      グローバル変数や、クラス定義、など
// }

// Enemy名前空間
namespace Enemy
{
	static const int Max = 10; // 敵最大数

	// 同一名前空間にいる場合は、namespace名::を省略することが出来る
	// 所属範囲のことをスコープと呼ぶ
	void PrintMax(void)
	{
		printf("敵の最大数 = %d\n", Max);
	}
}

#endif // !ENEMY_H

