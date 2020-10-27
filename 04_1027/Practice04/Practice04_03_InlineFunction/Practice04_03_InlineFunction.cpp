#include <iostream>
#include<windows.h>
#include<stdio.h>

// インライン関数の書き方
/*
inline 戻り値の型 関数名(引数）
{
    処理内容
}
*/

inline int AddSum(int a, int b)
{
    return(a + b);
}

// クラス内に関数を定義することができる
class Test
{
public:
    // 関数の宣言部に定義も書いてしまうと、
    // 自動的にinline関数として扱われる
    int AddSum(int a, int b)
    {
        return(a + b);
    }
};

/*
 ■インライン関数の注意点
 関数の規模が大きいと判断されたものは、
例えinlineとついていても通常の関数呼び出しとして扱われる

そのため、inline関数の処理は小規模にしなければならない
*/

// 処理速度の違いを見るためのテスト用関数
inline unsigned int InlinePow(int x1, int x2)
{
    return (x1 * x2);
}

unsigned int Pow(int x1, int x2)
{
    return (x1 * x2);
}

int main()
{
    int a = AddSum(1, 3);
    // コンパイル時、a = (a + b) -> a = (1 + 3)に展開される

    LARGE_INTEGER f;
    if (!QueryPerformanceFrequency(&f))
    {
        return 0;
    }

    LARGE_INTEGER s, e;
    // inline関数
    {
        QueryPerformanceCounter(&s);
        unsigned int pow = 0;
        for (int i = 0; i < 10000; i++)
        {
            for (int j = 0; j < 10000; j++)
            {
                pow = InlinePow(i, j);
            }
        }
        printf("pow = %d\n", pow);

        QueryPerformanceCounter(&e);
        double t = (double)(e.QuadPart - s. QuadPart) / f.QuadPart;
        printf("inline time = %f sec\n", t);
    }
}

