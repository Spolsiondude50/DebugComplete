#pragma once

#include "Entity.h"
class Zergling /*: public Entity*/
{
public:
	Zergling();
	~Zergling();
	bool isAlive(int health);
	int attack();
	Entity self;
	int takeDamage(int damage, int& health);
	int zerglingAlive();

};