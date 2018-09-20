#include "Marine.h"


Marine::Marine(int health,int maxHealth)
{
	maxHealth = 35;
	health = maxHealth;
}


Marine::~Marine()
{
}
Marine::Marine()
{
}


int Marine::attack()
{
	return 6;
}

void Marine::takeDamage(int damage, int health)
{
	health -= damage;
	if (health == 0)
		health = 0;
}

int Marine::marineAlive()
{
	return 0;
}
bool Marine::isAlive(int health)
{
	if (health > 0) {
		return true;
	}
	else
		return false;
}
