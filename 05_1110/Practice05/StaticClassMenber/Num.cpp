#include"Num.h"
#include<iostream>

Num::Num(int num)
	:m_Num(num)
{

}

void Num::Print()
{
	std::cout << m_Num << std::endl;
}