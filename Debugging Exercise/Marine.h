#pragma once
#include "Entity.h"

class Marine /*: public Entity*/
{
public:
	Marine(int health,int maxHealth);
	~Marine();
	Marine();
	bool isAlive(int health);
	Entity self;
	int attack();
	void takeDamage(int damage,int health);

private:
	int marineAlive();

};

