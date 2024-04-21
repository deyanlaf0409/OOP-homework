#include "Unit.h"
#include "GameEngine.h"
#include <stdio.h>
#include <iostream>
#include <math.h>



void GameUnit::setCondition(unsigned int s) {
		if (s > 100) {
			printf("Condition out of range");
			return;
		}
		else if (s <= 0) {
			printf("Unit is dead");
			Condition = 0;
		}
		else {
			Condition = s;
		}
}


void GameUnit::Move() {

		if (TactMoveSpeed == 0) {
			std::cout << "Knight moves\n";
		
			TactMoveSpeed = TMS - MoveSpeed;
			findTarget();
			if(Position.x < Target.x)
			{
				Position.x ++;
			}
			else{
				Position.x --;
			}

			if(Position.y < Target.y)
			{
				Position.y ++;
			}
			else{
				Position.y --;
			}

		}
		else {
			--TactMoveSpeed;
		}
};



void GameUnit::findTarget(){
	int i, a, b, pos;
	float c;
	float min = 10000;
	
	for(i = 0; i < p->CountUnits; i++)
	{
		a = p->Units[i]->Position.x - Position.x;
		b = p->Units[i] ->Position.y - Position.y;
		c = std::sqrt(a*a + b*b);

		if(c < min)
		{
			min = c;
			pos = i;
		}
	}
	Target.x = p->Units[pos]->Position.x;
	Target.y = p->Units[pos]->Position.y;

};

void GameUnit:: PrintPosition() {
		std::cout << "Position: (" << Position.x << ", " << Position.y << ")\n";
};