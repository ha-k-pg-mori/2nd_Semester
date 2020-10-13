#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
	Player();
	~Player();

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
};

#endif // !PLAYER_H
