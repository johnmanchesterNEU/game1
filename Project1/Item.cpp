#include "Item.h"
using namespace std;


Item::Item(string n_name, string n_desc, list<string> combine, bool taken, int num)
{
	this->name = n_name;
	this->desc = n_desc;
	this->comb = combine;
	this->take = taken;
	this->count = num;

}


Item::Item() {

}

Item::~Item()
{
}


//Copy constructor for Item
Item::Item(const Item &i) : name(i.name), desc(i.desc), comb(i.comb), count(i.count) {
	//this->name = new string(i.name);
	//this->desc = i.desc;
	//this->comb = i.comb;
	//this->take = i.take;
	//this->count = i.count;
};

string Item::describe() {
	return desc;
}

string Item::name_item() {
	return name;
}

bool Item::can_combine() {
	return (comb.size() > 0);
	//return if(comb.size());
}


list<string> Item::combo() {
	return comb;
}

bool Item::can_take() {
	return take;
}

