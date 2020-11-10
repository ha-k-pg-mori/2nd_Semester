#include <iostream>
#include "Enemy.h"
#include "Shot.h"

// using 指定子
// usingを書いたファイル内で、namespaceを省略して書くことが出来る
// using namespace 省略したいnamespace名
using namespace Enemy; // Enemyという名前空間を、このファイル内に追加する

/*
   usingの注意点
   多用すると名前の衝突が再燃することになる
   　　　using namespace Enemy;
	     using namespace Shot;
		     こうすると、PrintMaxやMaxが同じと判断され、再衝突が発生してしまう

   usingをヘッダーに書くのはやらないようにする
   ヘッダーに書いてしまうと、そのヘッダーをインクルードしているすべてのcppでusingが有効になってしまう
*/

// namespaceは入れ子にすることもできる
/*
    //書き方
	　namespace namespace名その１
	 {
	     namespace namesace名その２
		 {
		     // 定義、クラス宣言
		 }
	 }
*/

// ファイル
namespace File
{
	// テクスチャ
	namespace Texture
	{
		static const int Max = 100;
	}

	// サウンド
	namespace Sound
	{
		static const int Max = 20;
	}

	static const int Max = Texture::Max + Sound::Max;
}

int main()
{
	// namespaceに属しているデータを使うときの書き方
	// namespace::所属しているデータ
	//printf("敵の最大数　= %d\n", Enemy::Max);
	//printf("弾の最大数　= %d\n", Shot::Max);

	Enemy::PrintMax();
	Shot::PrintMax();

	// std も名前空間
	std::cout << "std::も名前空間" << std::endl;

	// 入れ子構造のnamespaceに所属する変数などの使い方（namespaceの外）
	// namespaceその１:: namespaceその2::(以下namespaceそのN)::変数名
	printf("絵の最大数 = %d\n", File::Texture::Max);
	printf("音の最大数 = %d\n", File::Sound::Max);

	// usingでEnemyをファイルに追加しているので以下は、Enemy::PrintMax()と同義
	PrintMax();

	return 0;
}


