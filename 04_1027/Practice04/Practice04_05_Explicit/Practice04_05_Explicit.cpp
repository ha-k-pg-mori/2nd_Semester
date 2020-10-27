#include <iostream>

class A
{
public:
    // explicit 演算子の書き方
    // explicit コンストラクタ(引数）
    explicit A(int val)
    {
        std::cout << val << std::endl;
    }
};

class B
{
public:
    explicit B(const A& ref)
    {
            
    }
};

int main()
{
    // 引数を1つだけとるコンストラクタは、 暗黙の型変換が行われる可能性がある
    // 暗黙の型変換が行われるコンストラクタのことを、変換コンストラクタという。
    B(1000);      // BのクラスのコンストラクタはAのクラスの変数を受け取るのでは？
                  // 暗黙的に B(A(100))と解釈しちゃっている
    A test = 100; // Aのクラス変数にデータ型を代入？
                  // 暗黙的に A test = A(100) と解釈しちゃっている
                  // コピーコンストラクタが呼びだされている

    A(35);        // Aのクラスのコンストラクタ(問題なし)
                  // 問題なし
}

