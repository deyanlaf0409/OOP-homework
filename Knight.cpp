#include "Knight.h"
#include <iostream>

void Knight::Move() {

		if (TactMoveSpeed == 0) {
			std::cout << "Knight moves\n";
			TactMoveSpeed = TMS - MoveSpeed;
		}
		else {
			--TactMoveSpeed;
		}
};

void Knight::Attack() {
	if (TactAttackSpeed == 0) {
			std::cout << "Knight attacks\n";
			TactAttackSpeed = TMS - AttackSpeed;
		}
		else {
			--TactAttackSpeed;
		}
}