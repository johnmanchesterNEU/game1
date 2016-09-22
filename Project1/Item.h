#pragma once
#include <string>
#include <list>
using namespace std;
class Item
{
private:
	string name; // the name of the object
	string desc; // the description of the object
	list<string> comb; //list of objects to combined
	bool take; //if the object can be taken

public:
	int count;  // number of the item left

	Item();
	
	
	Item(const Item &i);
	
	Item(string, string, list<string>, bool, int);
	~Item();


	string name_item();

	list<string> combo();

	string describe();

	bool can_combine();

	bool can_take();



};

