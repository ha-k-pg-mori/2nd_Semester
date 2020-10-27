#include <iostream>

class CharaBase
{
public:
    CharaBase();
    CharaBase(int hp, int mp);
    ~CharaBase();

    void PrintParam();

private:
    int Hp;
    int Mp;

    const int HP_MAX;
};

// コンストラクタで、メンバイニシャライザによる初期化のやり方
// クラス名::コンストラクタ（引数）：メンバ変数（初期値）、メンバ変数（初期値）
// 注意点：メンバイニシャライザは、変数の宣言順に呼び出される
// 　　　　　イニシャライザに書いた順番でない点に注意
CharaBase::CharaBase()
    : Hp(100)
    , Mp(10)
    , HP_MAX(999)  // constメンバ変数もここでなら初期化できる
{
    //// 従来の方法
    //Hp = 10;
    //Mp = 10;
    // HP_MAX = 999; // コンストラクタ内ではconst型のメンバ変数を初期化できない
}

CharaBase::CharaBase(int hp, int mp)
    : Hp(hp)
    , Mp(mp)
    , HP_MAX(999)
{
}

CharaBase::~CharaBase()
{

}

void CharaBase::PrintParam()
{
    printf("Hp = %d\n", Hp);
    printf("Mp = %d\n", Mp);
    printf("\n");
    printf("HP_MAX = %d\n", HP_MAX);
}

class Player : public CharaBase
{
public:
    Player();

private:
    int Money;
};

Player::Player()
    :CharaBase(200,30)
    , Money(50)
{

}

int main()
{
    // データ型にもコンストラクタはある
    int vlaue(10);
    float f_valaut(10.0f);

    CharaBase ch;
    ch.PrintParam();

    Player player;
}