#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
public:
	Character();
	virtual~Character();
	// static�ȃ����o�֐��̍����i�錾�j
	// static �߂�l �֐���(�����j
	static void Print();

private:
	static int m_CharacterNum;
};

#endif // !1



