#include "Zergling.h"





Zergling::Zergling() {

}


Zergling::~Zergling()
{
}
int Zergling::attack()
{
	return 6;
}
int  Zergling::takeDamage(int damage,int& health)
{
	health -= damage;
	if (health == 0)
		health = 0;
	return health;
}
int Zergling::zerglingAlive()
{
	return 0;
}
bool Zergling::isAlive(int health)
{
	if (health > 0) {
		return true;
	}
	if (health == 0) {
		return false;
	}
}

