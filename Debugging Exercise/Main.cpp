// A Debugging Exercise by Marc Chee (marcc@aie.edu.au)
// 18/12/2016

// Marines are trying to "de-bug" an area (haha . . . haha)
// However something's up with this code . . . figure out what's going wrong
// When you're finished, there should be no compiler errors or warnings
// The encounter should also run and finish correctly as per the rules in the comments

// In many cases there are differences between what's in otherwise identical sections
// for Marines and Zerglings. It's good to be able to tell what the differences are
// and why they might be important.

// What's efficient and inefficient? Why?
// What uses more memory and what doesn't? Why?

// Last modified by Terry Nguyen (terryn@aie.edu.au)
// 10/09/2018

#include <iostream>
#include "Marine.h"
#include "Zergling.h"
#include "Entity.h"


// Is there a Marine Alive?
bool marineAlive(Marine * squadArr)
{
	if ((sizeof(squadArr) / 4) > 0) {
		return 1;
	}
	else {
		return 0;
	}
}

// Is there a zergling Alive
bool zerglingAlive(Zergling * swarmArr)
{
 
	if ((sizeof(swarmArr) / 4) > 0) {
		return true;
	}
	else {
		return false;
	}
}
//bool squadAlive(Marine * squadArr, size_t arrSize) {
//
//	return false;
//}

using std::cout;
using std::endl;
int main()
{
	int marineSize = 30;
	int marinesAlive = 30;
	int zergSize = 25;
	int zergAlive = 25;
	Marine squad[30] = {};
	Zergling swarm[25];

	cout << "A squad of marines approaches a swarm of Zerglings and opens fire! The Zerglings charge!" << endl;
	// Attack each other until only one team is left alive
	while (marineAlive(squad) || zerglingAlive(swarm)) // If anyone is left alive to fight . . .
	{
		if (marineAlive(squad)) // if there's at least one marine alive
		{
			for (int i = 0; i < 30; i++) // go through the squad
			{
				// each marine will attack the first zergling in the swarm
				cout << "A marine fires for " << squad[i].attack() << " damage. " << endl;
				int damage = squad[i].attack();
				swarm[i].takeDamage(damage, swarm[i].self.health);
				if (!swarm[zergSize].zerglingAlive()) // if the zergling dies, it is marked as such
				{
					cout << "The zergling target dies" << endl;
					zergSize--;
					zergAlive--;
					cout << "There are " << zergSize << " zerglings left." << endl;
				}
				if (zergSize == 0) {
					break;
				}
				if (zergAlive == 0) {
					break;
				}
			}
		}
		if (zerglingAlive(swarm)) // if there's at least one zergling alive
		{
			for (int i = 0; i<25;) // loop through zerglings
			{
				cout << "A zergling attacks for " << swarm->attack() << " damage." << endl;
				squad[i].takeDamage(7, swarm->self.health);
				if (squad[marineSize].isAlive(swarm[zergSize].self.health))
				{

				}
				else
					cout << "The marine succumbs to his wounds." << endl;
				marineSize--;
				marinesAlive--;
				cout << "There are " << marineSize << " marines left." << endl;
				if (marineSize == 0) {
					break;
				}
				if (marinesAlive == 0) {
					break;
				}

			}
		}
		cout << "The fight is over. ";
		if (zergAlive == 0)
		{
			cout << "The Marines win." << endl;
			break;
		}
		else if (marinesAlive == 0) {
			cout << "The Zerg win." << endl;
			break;
		}
		if ((zergAlive == 0) && (marinesAlive == 0)) {
			cout << "Draw" << endl;

		}
	}
}
