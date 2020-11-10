#ifndef ENEMY_H
#define ENEMY_H

#include"Character.h"

class Enemy01 : public Character
{
public:
	Enemy01(int hp);
	void PrintHp();

private:
	int m_Hp;

};

#endif // !ENEMY_H
