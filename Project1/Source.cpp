#include <iostream>
#include <regex>
#include <sstream>
#include <cstdio>
#include <ctime>
#include <chrono>
#include <thread>
#include <functional>
#include "Inventory.h"
#include "Item.h"
#include "Action.h"
#include "Time.h"

#include "Game.h"

using namespace std;



void initialize() {
	cout << "here"<<endl;
}

void wassup() {
	
}

void timer_start(std::function<void(void)> func, unsigned int interval)
{
	std::thread([func, interval]() {
		//while (true)
		//{
			//func();
			std::this_thread::sleep_for(std::chrono::seconds(interval));
			func();
		//}
	}).detach();
}


void do_something()
{
	cout << "I am doing something" << endl;
}


int main() {
	/*
	//timer_start(do_something, 10);
	//thread lol;

	//this_thread::sleep_for(chrono::seconds(10));
	Time hey;
	//hey.start(do_something, 10);



	clock_t startTime = clock(); //timer
	//cout << startTime << endl;
	cout << startTime << endl;

	//Time hey;

	hey.start();
	//hey.duration();

	string input = "";
	Inventory awesome;
	Item cool("bat", "its a bat!", {}, true, 1);
	Item cool2("knife", "kill, kill", {}, true, 1);
	awesome.insert(cool);
	awesome.insert(cool2);
	awesome.insert(cool2);
	awesome.print();

	awesome.take("bat", 3);
	awesome.print();
	
	//awesome.remove("bat");
	cout << awesome.have("knife");
	cout << cool.describe()<<endl;
	cout << cool.name_item()<<endl;

	awesome.print();


	//Inventory j;momomjgyt
	//j.add("cool", 1);
	//j.add("awesome", 1);
	
	regex look("^look\\s+\\w+");
	regex take("^take\\s+\\w+");
	regex use("^use\\s+\\w+");
	regex comb("^combine\\s+[\\w+,?\\s*]+");

	initialize();

	
	//cout << j;*/

	Game g;

	/*Item bottle("bottle", "It is a bottle that holds things", { "water" }, true, 1);
	Item bars("energy bar", "Delicious mix of honey and oats", {}, true, 10);

	Inventory backpack;
	Inventory b2;
	backpack.insert(bottle);
	backpack.insert(bars);


	backpack.print();

	string in = "";

	Item a = backpack.take("bottle", 1);
	Item b = backpack.take("energy bar", 4);
	Item c = backpack.take("awesome", 1);


	b2.insert(a);
	b2.insert(b);
	b2.insert(c);

	b2.print();
	backpack.print();
	


	//cout << b.count << endl;
	cin >> in;
	*/
	g.start();





	return 0;
}
