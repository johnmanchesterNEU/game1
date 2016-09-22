#pragma once
#include <string>
#include <set>
#include <iostream>
#include <list>
#include <algorithm>
#include <map>
#include "Inventory.h"
#include "Item.h"

using namespace std;

class Rooms
{
	//Room themap[3][5]; // the map of the whole area


public:
	
	Rooms();
	~Rooms();
	
	   /*
	   in: String
	   out:
	   Adds a new item to string set
	   */

};


/*
Room Class
The main areas where things are performed
*/
class Room {
	
public:
	string story; // intro for the given room
	Inventory items; // what is available in the rooms
	bool locked; //if a key or action is required to open
	bool exists; //if a room exists
	list<string> direction; //available directions north, south east west
	list<string> action; // the actions that can be performed in the room
	string wall[4]; // what is located at the 4 walls


	Room();


	~Room();

	Inventory get_inventory();
	string get_story();
	bool get_locked();
	bool get_exists();
	list<string> get_direction();
	list<string> get_action();
	void set_inventory(Inventory);

private:
	void init(string, bool, bool, list<string>, list<string>, string[4]);

	void set_story(string);
	void set_locked(bool);
	void set_exists(bool);
	void set_direction(list<string>);
	void set_action(list<string>);

	void add_to_room(Item);
	Item remove_from_room(string);






	//void room()


};

