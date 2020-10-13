#include"Enemy.h"

Enemy::Enemy()
{
	m_Hp = 1;
	m_PosX = 0.0f;
	m_PosY = 0.0f;
	m_MoveSpeed = 1.0f;

	// エネミー専用変数
	m_Routine = 0;
}

Enemy::~Enemy()
{

}

void Enemy::Exec()
{

}

void Enemy::Drow()
{

}

void Enemy::SetHp(int hp)
{
	m_Hp = hp;
}

void Enemy::SetPos(float x, float y)
{
	m_PosX = x;
	m_PosY = y;
}

void Enemy::SetMoveSpeed(float speed)
{
	m_MoveSpeed = speed;
}

int Enemy::GetHp()
{
	return m_Hp;
}

float Enemy::GetPosX()
{
	return m_PosX;
}

float Enemy::GetPosY()
{
	return m_PosY;
}

float Enemy::GetMoveSpeed()
{
	return m_MoveSpeed;
}