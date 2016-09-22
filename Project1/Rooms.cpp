#include "Rooms.h"
Rooms::Rooms() {

}

Rooms::~Rooms() {

}


Room::Room() {

}


Room::~Room() {

}


/*
Initializer for a room
in:
string story
Inventory items;
bool locked; //if a key or action is required to open
bool exists; //if a room exists
list<string> direction; //available directions north, south east west
list<string> action; // the actions that can be performed in the room
string wall[4]; // what is located at the 4 walls


*/
void Room::init(string storyn, bool loc, bool ex, list<string> dir, list<string> act, string walln[4]) {
	story = storyn;
	locked = loc;
	exists = ex;
	direction = dir;
	action = act;
	memcpy(wall, walln, 4);
}



/*
gets the inventory for a room
out: Inventory
*/
Inventory Room::get_inventory() {
	return items;
}

/*
Gets the story for a room
out:String
*/

string Room::get_story() {
	return story;

};


bool Room::get_locked() {
	return locked;

};
bool Room::get_exists() {
	return exists;

};
list<string> Room::get_direction() {
	return direction;
};
list<string> Room::get_action() {
	return action;
};





/*
Sets the inventory for a room
in: Inventory
*/
	void Room::set_inventory(Inventory inv_new) {
		items = inv_new;
	
	};


	/*
	Sets the story for a room
	in:string
	*/
	void Room::set_story(string story_new) {
		story = story_new;
	};


	/*
	Sets the locked status for a room
	*/
	void Room::set_locked(bool locked_new) {
		locked = locked_new;
	
	};
	
	void Room::set_exists(bool exists_new) {
	
		exists = exists_new;
	
	};


	/*
	Sets the available directions for a room
	*/
	void Room::set_direction(list<string> dir_new) {
		direction = dir_new;
	
	};


	void Room::set_action(list<string> action_new) {
		action = action_new;
	
	};
	
	void Room::add_to_room(Item item) {
		items.insert(item);
	}

	/* removes an item from room if exists and removable
	*/
	Item Room::remove_from_room(string thing) {
		Item i;
		return i;

	}



