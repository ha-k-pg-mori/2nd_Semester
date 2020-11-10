#include "Character.h"
#include <iostream>

int Character::m_CharacterNum = 0;

Character::Character()
{
	m_CharacterNum++;
}

Character::~Character()
{
	m_CharacterNum--;
}

// staticなメンバ関数の作り方（定義）
// 通常のメンバ関数と同じ(staticはつけなくてよい）
void Character::Print()
{
	std::cout << m_CharacterNum << std::endl;
}
