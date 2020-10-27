#ifndef BASE_H
#define BASE_H

//------------------------------
// 基底クラス
//------------------------------
class Base
{
public:
	Base();
	virtual ~Base();

public:
	// 継承先で、それぞれ処理の違うことがわかっている関数を
	// 純粋仮想関数として基底クラスを使う
	virtual void Exec() = 0;
	virtual void Draw() = 0;

	// 引数の矩形情報と、自分が当たっているか判定
	virtual bool CheckHit(int x, int y, int width, int height);

public:
	void SetHp( int hp );
	void SetPos( float x, float y );
	void SetMoveSpeed(float speed);
	void SetSize( int width, int height );

	int GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();
	int GetWidth();
	int GetHeight();

private:
	int		m_Hp;
	float	m_PosX;
	float	m_PosY;
	float	m_MoveSpeed;

	int		m_Width;	// 当たり判定用_幅
	int		m_Height;	// 当たり判定用_高さ
};

#endif // #ifndef BASE_H

