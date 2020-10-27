#include "EnemyManager.h"
#include "Base.h"
#include "Enemy.h"

// コンストラクタ
EnemyManager::EnemyManager()
{
	m_Enemies.clear();
}

// デストラクタ
EnemyManager::~EnemyManager()
{
	std::vector<Base*>::iterator itr;
    for (itr = m_Enemies.begin(); itr != m_Enemies.end();++itr)
	{
		Base* ptr = *itr;
		delete ptr;
		ptr = nullptr;

		delete *itr;
		*itr = nullptr;
	}
	// m_Enemiesにはnullptrが入ったBase*の配列が入っている
	m_Enemies.clear();
}

class Base* EnemyManager::CreateEnemy(int enemy_type)
{
	std::vector<Base*>::iterator itr;
	for (itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		// 可変長配列に空きがあればそこに作る
		

		if (*itr == nullptr)
		{
			*itr = new Enemy();
			return *itr;
		}

	}

	// 空きがないので、新規に作ってpush_back
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

		if (*itr == ptr)
		{
			delete *itr;
			*itr = nullptr;
			return true;
		}
	}
	return false;
}

// エネミー処理を実行する
void EnemyManager::Exec()
{
	std::vector<Base*>::iterator itr;
	for (itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		if (*itr != nullptr)
		{
			Base* ptr = *itr;
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
			// 当たっていたらアドレスを返す
			if (ptr->CheckHit(x, y, width, hight))
			{
				return ptr;
			}
		}
	}
	// for文を抜けると、当たった奴がいないことになるのでnullptrを返す
	return nullptr;
}