#include <iostream>
#include "Num.h"
#include "Enemy01.h"

int main()
{
    Num a(100), b(200);
    a.Print();
    b.Print();

    // staticなメンバ関数の使い方１
    // 通常のメンバ関数と同じように使える
    Enemy01 char1(10);
    char1.Print();
    char1.PrintHp();
    Enemy01 char2(20);
    char2.Print();
    char2.PrintHp();
    {
        Enemy01 char3(30);
        char3.Print();
        char3.PrintHp();
    }
    // staticなメンバ関数の使い方２
    // クラス名::関数名(引数)
    Character::Print();

    return 0;
}

