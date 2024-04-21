#include "Unit.h"

class Knight : public GameUnit {
	unsigned int Sword, Armor;

public:
	Knight(int x, int y, unsigned int sword, unsigned int armor, unsigned int moveSpeed, unsigned int attackSpeed) {
		Position.x = x;
		Position.y = y;
		Sword = sword;
		Armor = armor;
		MoveSpeed = moveSpeed;
		AttackSpeed = attackSpeed;
	}

	void Move() override;

	void Attack() override;
};