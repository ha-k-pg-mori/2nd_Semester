#include "Enemy01.h"
#include <iostream>

Enemy01::Enemy01(int hp)
	:m_Hp(hp)
{

}
void Enemy01::PrintHp()
{
	std::cout << m_Hp << std::endl;
}