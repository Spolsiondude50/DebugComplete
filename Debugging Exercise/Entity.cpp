#include "Entity.h"



Entity::Entity()
{
	maxHealth = 35;
	health = maxHealth;
}


Entity::~Entity()
{

}
void Entity::takeDamage(int damage, int & health) {
	health -= damage;
	if (health <= 0)
		health = 0;
}

