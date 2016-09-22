#include "Player.h"



Player::Player()
{
}


Player::~Player()
{
}

/*
purpose: sets health for a player
in: integer H 
*/
void Player::set_health(int H) {
	health = H;
}


/*
purpose: gets health for a player
out: integer
*/
int Player::get_health() {
	return health;
}


/*
purpose: gets a players backpack
out: Inventory
*/
Inventory Player::get_backpack() {
	return backpack;
}

/*
purpouse: sets a players inventory
in: Inventory
*/
void Player::set_backpack(Inventory bp) {
	backpack = bp;
}