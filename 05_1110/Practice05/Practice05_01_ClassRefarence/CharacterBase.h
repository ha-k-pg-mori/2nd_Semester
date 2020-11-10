#pragma once

class CharacterBase
{
public:
	CharacterBase();;
	virtual ~CharacterBase();

	void SetHp(int value) { Hp = value; }
	void SetMp(int value) { Mp = value; }
	void SetStr(int value) { Str = value; }
	void SetVit(int value) { Vit = value; }
	void SetInt(int value) { Int = value; }
	
	int GetHp() const { return Hp; }
	int GetMp() const { return Mp; }
	int GetStr()const { return Str; } 
	int GetVit()const { return Vit; }
	int GetInt()const { return Int; }

protected:
	int Hp;
	int Mp;
	int Str;
	int Vit;
	int Int;
};

