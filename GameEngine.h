#include "Unit.h"


extern GameEngine * p;

class GameEngine {
	unsigned int CountUnits;
	GameUnit** Units;

public:
	GameEngine(unsigned int countUnits) {
	}

	~GameEngine() {
	}

	void AddUnit(GameUnit* unit) {
	}

	void Step() {
	}
};
