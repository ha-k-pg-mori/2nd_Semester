#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
public:
	Character();
	virtual~Character();
	// staticなメンバ関数の作り方（宣言）
	// static 戻り値 関数名(引数）
	static void Print();

private:
	static int m_CharacterNum;
};

#endif // !1



