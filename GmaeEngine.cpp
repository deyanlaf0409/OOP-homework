#include "GameEngine.h"

GameEngine::GameEngine(unsigned int countUnits) {
		CountUnits = countUnits;
		Units = new GameUnit * [CountUnits];
		for (unsigned int i = 0; i < CountUnits; ++i) {
			Units[i] = nullptr;
		}
	}

GameEngine::~GameEngine() {
		for (unsigned int i = 0; i < CountUnits; ++i) {
			delete Units[i];
		}
		delete[] Units;
	}


void GameEngine::AddUnit(GameUnit* unit) {
		for (unsigned int i = 0; i < CountUnits; ++i) {
			if (Units[i] == nullptr) {
				Units[i] = unit;
				break;
			}
		}
	}

void GameEngine::Step() {
		for (unsigned int i = 0; i < CountUnits; ++i) {
			if (Units[i] != nullptr) {
				Units[i]->Move();
			}
		}
	}
