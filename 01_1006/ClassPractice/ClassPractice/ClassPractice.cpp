#include <stdlib.h>
#include <stdio.h>

// Fighterクラスを作成します
/*
     メンバ変数は m_ から開始する
   　整数型　　hp
	 整数型　　str
	 整数型　　mag
	 整数型　　tec
	 整数型　　spd
	 整数型　　def
	 整数型　　luc
	 整数型　　mde

	 コントラクタ
	 デストラクタ
*/

// Fighterクラス
class Fighter
{
public:
	// コンストラクタ
	Fighter();
	// デストラクタ
	~Fighter();
	int  m_hp;
	int m_str;
	int m_mag;
	int m_tec;
	int m_spd;
	int m_def;
	int m_luc;
	int m_mde;
};

Fighter::Fighter()
{

}

Fighter::~Fighter()
{

}

int main()
{
	system("pause");
	return 0;
}
