#include "minimal_fighter.h"
using namespace std;

MinimalFighter::MinimalFighter() {
	mHP = 0;
	mPower = 0;
	mStatus = Invalid;
}
MinimalFighter::MinimalFighter(int _hp, int _power) {
	mHP = _hp;
	mPower = _power;

	if (_hp > 0)
		mStatus = Alive;
	else
		mStatus = Dead;

}

int MinimalFighter::hp()const {
	return mHP;
}

int MinimalFighter::power()const {
	return mPower;
}
FighterStatus MinimalFighter::status()const {


	return mStatus;
	
}

void MinimalFighter::setHp(int _hp) {
	mHP = _hp;
}


void MinimalFighter::hit(MinimalFighter* _enemy) {

	this->setHp(this->hp() - _enemy->power());
	_enemy->setHp(_enemy->hp()- this->power());
	if (this->hp() <= 0)
		this->mStatus = Dead;
	
	if (_enemy->hp() <= 0)
		_enemy->mStatus = Dead;
	 
		
	
	
		
}
void MinimalFighter::attack(MinimalFighter* _target) {
	_target->setHp(_target->hp() - this->power());
	this->setHp(this->hp());
	this->mPower = 0;
	if (this->hp() <= 0)
		this->mStatus = Dead;
	if (_target->hp() <= 0)
		_target->mStatus = Dead;



}
void MinimalFighter::fight(MinimalFighter* _enemy) {
	while (1) {
		this->setHp(this->hp() - _enemy->power());
		_enemy->setHp(_enemy->hp() - this->power());

		if (this->hp() <= 0) {//this dead
			if (_enemy->hp() <= 0) {//enemy dead
				this->mStatus = Dead;
				_enemy->mStatus = Dead;

				break;			
			}
			else {//enemy alive
				this->mStatus = Dead;
				_enemy->mStatus = Alive;
				break;
			}
		}
		else {//this alive
			if (_enemy->hp() <= 0) {//enemy dead
				this->mStatus = Alive;
				_enemy->mStatus = Dead;

				break;
			}
			else {
				this->mStatus = Alive;
				_enemy->mStatus = Alive;
				
				continue;
			}
		}

	}
}


