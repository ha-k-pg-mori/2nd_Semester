#ifndef ENEMY_H
#define ENEMY_H

#include"Base.h"

class Enemy : public Base
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Drow();

private:
	// Enemy��p�ϐ�
	int m_Routine;  // �s�����[�`���Ǘ��ϐ�
};


#endif // !ENEMY_H

