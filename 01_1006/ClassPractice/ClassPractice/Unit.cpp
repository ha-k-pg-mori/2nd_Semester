#include"Common.h"
#include"Unit.h"

Unit::Unit()
{
	m_status._hp = 0;
	m_status._str = 0;
	m_status._mag = 0;
	m_status._tec = 0;
	m_status._spd = 0;
	m_status._def = 0;
	m_status._luc = 0;
	m_status._mde = 0;
}

Unit::~Unit()
{

}

void Unit::PrintStatus()
{
	printf("m_hp  = %d\n", m_status._hp);
	printf("m_str = %d\n", m_status._str);
	printf("m_mag = %d\n", m_status._mag);
	printf("m_tec = %d\n", m_status._tec);
	printf("m_spd = %d\n", m_status._spd);
	printf("m_def = %d\n", m_status._def);
	printf("m_luc = %d\n", m_status._luc);
	printf("m_mde = %d\n", m_status._mde);
}