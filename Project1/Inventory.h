#pragma once
#include <string>
#include <set>
#include <iostream>
#include <list>
#include <algorithm>
#include <map>
#include <regex>
#include "Item.h"

using namespace std;

class Inventory
{
	map<string, Item> itemlist;
	





public:void inventory() {
}




public:void insert(Item item) {
	string key = item.name_item();
	if (!itemlist.insert(std::make_pair(key, item)).second) {
		itemlist[key].count += item.count;
	}
	
	
	//itemlist.insert(pair<key, item>);

	//itemlist[key] = item;

}
	/*
	in: String
	out:
	Adds a new item to string set
	*/
public:void add(string item, int num) {
	//itemlist[item] += num;
}
	   /*
	   in: String 
	   out: none
	   Removes item from the set of items if it is in
	   the set
	   */
public:void remove(string item) {
	itemlist.erase(item);
}

/*
takes a number of items from an object in the inventory
if the object becomes 0 it is removed.
more of the object cannot be taken than exists
in: String item object in the inventory, 
int number of the object

out: void
*/
public:Item take(string item, int num) {

	//if (have(item)) {}
	
	
	if (have(item)) {
		Item mine(itemlist[item]);
		int remain = mine.count - num;
		if (remain == 0) {
			remove(item);
			return mine;


		}
		else if (remain > 0) {
			itemlist[item].count = remain;
			mine.count = num;
			return mine;
		}
		else {
			cout << "You do not have enough of " << item << "." << endl;
			return Item("NULL", "NULL", {}, false, 0); // Return a dummy object
		}


	}
	else {
		return Item("NULL", "NULL", {}, false, 0); // Return a dummy object
	}

	/*
	/Item mine = itemlist[item]; //new Item(itemlist[item]);


	//Item temp = new Item();

	//Item a = new Item(mine.)

	//mine.count = num;

	//cout << mine.name_item;
	
	

	

	//int remain = mine.count - num;
	if (remain == 0) {
		remove(item);
		return mine;


	}
	else if (remain > 0) {
		itemlist[item].count = remain;
		return mine;
	}
	else {
		cout << "You do not have enough of " << item << "." <<endl;
		return mine;
	}*/
	return itemlist[item];
}


/*
in: string item 
out: true if item is in the inventory false otherwise
*/
public:bool have(string item) {
	return itemlist.find(item) != itemlist.end();
}

//Prints all items within an inventory
public:void print() {

	map<string, Item>::iterator pos;

	for (pos = itemlist.begin(); pos != itemlist.end(); ++pos)
		cout << pos->second.count << " " << pos->second.name_item() << ", ";
	cout << endl;
}
	   /*
public:void parser(string input, regex expr) {
		   istringstream iss(input);
		   string word;

		   while (iss >> word) {
			   cout << word;
		   }
	   }*/

};