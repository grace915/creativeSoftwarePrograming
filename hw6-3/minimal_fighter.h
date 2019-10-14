#pragma once
#include <string>
#include <iostream>
#include <cstdlib>

enum EFighterStatus
{
	Invalid = 0,
	Alive,
	Dead,
};

typedef enum EFighterStatus FighterStatus;


class MinimalFighter {
private:
	int mHP;
	int mPower;
	FighterStatus mStatus;
public:
	MinimalFighter();
	MinimalFighter(int _hp, int _power);
	int hp()const;
	int power()const;
	FighterStatus status()const;
	void setHp(int _hp);
	void hit(MinimalFighter* _enemy);
	void attack(MinimalFighter* _target);
	void fight(MinimalFighter* _enemy);

};
