#pragma once
class Entity
{
public:
	Entity();
	~Entity();
	virtual void takeDamage(int damage,int & health);
	int health;
	int maxHealth;

private:
};

