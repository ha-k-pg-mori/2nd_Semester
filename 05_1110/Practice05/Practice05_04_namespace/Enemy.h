#ifndef ENEMY_H
#define ENEMY_H

#include<iostream>

// namespace ���O��Ԃ̏�����
// namaspace namaspace�̖��O
// {
//      �O���[�o���ϐ���A�N���X��`�A�Ȃ�
// }

// Enemy���O���
namespace Enemy
{
	static const int Max = 10; // �G�ő吔

	// ���ꖼ�O��Ԃɂ���ꍇ�́Anamespace��::���ȗ����邱�Ƃ��o����
	// �����͈͂̂��Ƃ��X�R�[�v�ƌĂ�
	void PrintMax(void)
	{
		printf("�G�̍ő吔 = %d\n", Max);
	}
}

#endif // !ENEMY_H

