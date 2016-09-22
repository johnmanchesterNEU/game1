#pragma once
#include "Inventory.h"
class Player
{
public:
	Player();
	~Player();

	void set_health(int H);
	int get_health();

	void set_backpack(Inventory bp); // set a players inventory
	Inventory get_backpack(); // get a players inventory



private:
	int health=100; // start with maximum health
	Inventory backpack; // player has inventory to hold stuff
	bool bp_avail; // at times the backpack could be disabled 


};

