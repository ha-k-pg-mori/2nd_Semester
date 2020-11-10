#include <iostream>

// 基底クラス
class Parent
{
public:
    Parent(){}
    virtual~Parent(){}

    void Name() { std::cout << "Parent" << std::endl; }
};

class Child00 : public Parent
{
public:
    Child00(){}
    virtual~Child00(){}

    void Name() { std::cout << "Child00" << std::endl; }
};

// 派生クラス２
class Child01 : public Parent
{
public:
    Child01() {}
    virtual~Child01() {}

    void Name() { std::cout << "Child01" << std::endl; }
};

int g_iConst = 200;

int main()
{
    // static_cast(暗黙の型変換が存在する型同士の変換を、明示的に行う方法）
    // static_cast<変換する型名>(変換元の値(変数))
    double PI = 3.1415926535;
    int iPI1 = static_cast<int>(PI);
    int iPI2 = PI; // 暗黙的型変換で、エラー出ないが、warning c4244が出る

    // dynamic_cast(基底クラスから、派生クラスへダウンキャストする際に、型を厳密にチェックする方法
    Child00 child00;
    Parent* parent = &child00;    // 基底クラスのポインタ変数へ、派生クラスのアドレス代入
    //Child01* child01 = parent;  // 派生クラスのポインタ変数へ、基底クラスのアドレスを代入(error!!)
    Child01* child01 = dynamic_cast<Child01*>(parent);
    Child00* child00_2 = dynamic_cast<Child00*>(parent);

    // reinterpret_cast(ポインタ型を別のポインタへ強制変換する）
    int j = 0;
    //char* c = &j; // これは型が違うのでエラー
    char* c = reinterpret_cast<char*>(&j); // int* を char* へ強制変換
    c[0] = 1;
    c[1] = 1;
    std::cout << "j : " << j << std::endl;

    // 危険なキャスト(parentが持っているアドレスは、child01の物である保証はない)
    child01 = reinterpret_cast<Child01*>(parent);

    // const_cast(普段使わない、constを明示的に外すタイミングはさほどない）
    const int iConst = 100;
    //iConst = 200;              // constなので代入できない
    //int* pNonConst = &iConst;  // constではないポインタ変数へアドレスを渡すこともできない
    int* pNonConst = const_cast<int*>(&iConst);

    *pNonConst = 200; // constを外したので代入できるようになる
    std::cout << "iConst : " << iConst << std::endl;

    pNonConst = const_cast<int*>(&g_iConst);
    *pNonConst = 400; // グローバル変数の場合例外がスローされる

    // MSDocによると、constを外した領域へのアクセスは未定義
    // https://docs.microsoft.com/ja-jp/cpp/cpp/const-cast-operator?view=msvc-160


    return 0;
}

