
#include <iostream>

// デフォルト引数
// 関数の引数にはデフォルト値を設定することが出来る
// デフォルト値が設定された引数は、関数の呼び出し時に省略することが出来る

class Calculator
{
public:
    int Add(int a, int b);
    // 引数bのデフォルト値を2とする
    // 戻り値の型 関数名（仮引数の型　仮引数名 = 初期値）
    int Mul(int a, int b = 2);

    // 注意：デフォルト引数の後ろには、未確定の引数をつけることはできない
    // int Sub(int = 100, int b);
    // Sub(50);という使い方をした場合
    // Sub(100,50);なのか、Sub(50,渡し忘れ);なのかわからない
};

int Calculator::Add(int a, int b)
{
    return(a + b);
}

int Calculator::Mul(int a, int b/* = 2*/)
{
    return(a * b);
}

int main()
{
    Calculator calc;
    std::cout << calc.Add(10, 20) << std::endl;
    std::cout << calc.Mul(100, 4) << std::endl;
    std::cout << calc.Mul(100)    << std::endl;
}
