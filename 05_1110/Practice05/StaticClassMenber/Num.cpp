#include"Num.h"
#include<iostream>

// �R�Astatic�ȃ����o�ϐ��͂��炩���߁A�ȉ��̂悤�Ɏ��̉������Ă���
// �^�� �N���X::�ϐ����i= �������j
// ���̂�cpp���ɏ���
int Num::m_Num = 0; 

Num::Num(int num)
    // �P�Astatic�ȃ����o�ϐ��̓C�j�V�����C�U���g���ď��������邱�Ƃ��o���Ȃ�
	//:m_Num(num)
{
	// �Q�A�R���p�C�����̃G���[�͏o�Ȃ�
	// �������A���̂��錾����Ă��Ȃ��ƃ����N�̃G���[���o�Ă��܂�
	m_Num = num;
}

void Num::Print()
{
	std::cout << m_Num << std::endl;
}