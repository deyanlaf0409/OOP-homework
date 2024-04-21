#include <iostream>
#include <stdio.h>
#include "Unit.h"
#include "GameEngine.h"
#include "Knight.h"


class Monster : public GameUnit {
	unsigned int Claws, Teeth;

public:
	Monster(int x, int y, unsigned int claws, unsigned int teeth, unsigned int moveSpeed, unsigned int attackSpeed) {
		Position.x = x;
		Position.y = y;
		Claws = claws;
		Teeth = teeth;
		MoveSpeed = moveSpeed;
		AttackSpeed = attackSpeed;
	}

	void Move() override {
		
		if (TactMoveSpeed == 0) {
			std::cout << "Monster moves\n";
			TactMoveSpeed = TMS - MoveSpeed;

		}
		else {
			--TactMoveSpeed;
		}
	}

	void Attack() override {
		
		if (TactAttackSpeed == 0) {
			std::cout << "Monster attacks\n";
			TactAttackSpeed = TMS - AttackSpeed;
		}
		else {
			--TactAttackSpeed;
		}
	}
};

int main() {

	GameEngine engine(10);

	p = &engine;

	// Adding units to the game engine
	Knight knight(0, 0, 5, 7, 3, 2); // Example parameters: x=0, y=0, sword=5, armor=7, moveSpeed=3, attackSpeed=2
	Monster monster(2, 3, 8, 6, 4, 3); // Example parameters: x=2, y=3, claws=8, teeth=6, moveSpeed=4, attackSpeed=3
	engine.AddUnit(&knight);
	engine.AddUnit(&monster);

	engine.Step();

	knight.PrintPosition();
	monster.PrintPosition();

	return 0;
}

