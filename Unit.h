#pragma  once
#define TMS 5

class TPoint {
public:
	int x;
	int y;

	TPoint() {
		x = -1;
		y = -1;
	}

	TPoint(int x, int y) {
		this->x = x;
		this->y = y;
	}
};



class GameUnit {
protected:
	TPoint Position, Target;
	unsigned int Condition;
	unsigned int MoveSpeed, AttackSpeed;
	unsigned int TactMoveSpeed; 
	unsigned int TactAttackSpeed; 

	void setCondition(unsigned int s);

	public:
	GameUnit() {
		TactMoveSpeed = TMS;
		TactAttackSpeed = TMS;
	}

	virtual void Move(); 
	virtual void Attack(); 


	void findTarget();

	

	void PrintPosition();
};