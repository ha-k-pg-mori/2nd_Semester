#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Drow();

public:
	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);

	int GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();

private:
	int   m_Hp;
	float m_PosX;
	float m_PosY;
	float m_MoveSpeed;

	// Enemy専用変数
	int m_Routine;  // 行動ルーチン管理変数
};


#endif // !ENEMY_H

