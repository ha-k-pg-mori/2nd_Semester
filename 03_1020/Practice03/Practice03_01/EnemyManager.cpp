#include "EnemyManager.h"
#include "Base.h"
#include "Enemy.h"

// �R���X�g���N�^
EnemyManager::EnemyManager()
{
	m_Enemies.clear();
}

// �f�X�g���N�^
EnemyManager::~EnemyManager()
{
	std::vector<Base*>::iterator itr;
    for (itr = m_Enemies.begin(); itr != m_Enemies.end();++itr)
	{
		Base* ptr = *itr;
		delete ptr;
		ptr = nullptr;
	}
	// m_Enemies�ɂ�nullptr��������Base*�̔z�񂪓����Ă���
	m_Enemies.clear();
}

class Base* EnemyManager::CreateEnemy(int enemy_type)
{
	std::vector<Base*>::iterator itr;
	for (itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		// �ϒ��z��ɋ󂫂�����΂����ɍ��
		Base* ptr = *itr;
		if (ptr == nullptr)
		{
			ptr = new Enemy();
			return ptr;
		}
	}

	// �󂫂��Ȃ��̂ŁA�V�K�ɍ����push_back
	Base* ptr = new Enemy();
	m_Enemies.push_back(ptr);
	return ptr;
}

bool EnemyManager::DestoryEnemy(class Base* ptr)
{
	if (ptr == nullptr)
	{
		return false;
	}

	std::vector<Base*>::iterator itr;
	for (itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		Base* tmp = *itr;
		if (tmp == ptr)
		{
			delete tmp;
			tmp = nullptr;
			return true;
		}
	}
	return false;
}

// �G�l�~�[���������s����
void EnemyManager::Exec()
{
	std::vector<Base*>::iterator itr;
	for (itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		Base* ptr = *itr;
		if (ptr != nullptr)
		{
			ptr->Exec();
		}
	}
}

void EnemyManager::Draw()
{
	std::vector<Base*>::iterator itr;
	for (itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		Base* ptr = *itr;
		if (ptr != nullptr)
		{
			ptr->Draw();
		}
	}
}

class Base* EnemyManager::CheckHit(int x, int y, int width, int hight)
{
	std::vector<Base*>::iterator itr;
	for (itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		Base* ptr = *itr;
		if (ptr != nullptr)
		{
			// �������Ă�����A�h���X��Ԃ�
			if (ptr->CheckHit(x, y, width, hight))
			{
				return ptr;
			}
		}
	}
	// for���𔲂���ƁA���������z�����Ȃ����ƂɂȂ�̂�nullptr��Ԃ�
	return nullptr;
}