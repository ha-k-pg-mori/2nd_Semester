#include <stdlib.h>
#include <stdio.h>
#include <string> // stringを使うためのヘッダー
#include <iostream>　// c++で拡張された入出力用のヘッダー

int main()
{
    // c言語の文字、文字列
    char word = 'a';
    char name[] = "naomichi sato";
    const char* cstr = "Hello World！";

    // 課題：上記３つの文字、文字列をprintfで画面に出力
    printf("%c\n",word);
    printf("%s\n", name);
    printf("%s\n", cstr);

    // string型の書き方
    std::string str = "文字列";

    // c言語の関数でstring型に入力されている文字列を使うには
    // c_str()という関数で、文字列のポインタを受けとる必要がある
    //printf("str = %s\n", str.c_str());

    // c++的な書き方（iostreamとstringのインクルードが必要）
    std::cout << str << std::endl;

    system("pause");
    return 0;
}

