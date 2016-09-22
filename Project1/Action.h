#pragma once
#include <string>
#include <regex>
#include "Inventory.h"
#include "Item.h"
/*

Action is the bridge between obects
it allows two objects to interact with one another

*/

using namespace std;

class Action {


public:
	//regex look("^look\\s+\\w+");
	//regex take("^take\\s+\\w+");
	//regex use("^use\\s+\\w+");
	//regex comb("^combine\\s+[\\w+,?\\s*]+");

	void look(Item obj) {
		

}

Item combine(Item item1, Item item2) {
	//Object comb = new Object();
}

};