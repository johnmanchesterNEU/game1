#include "Game.h"
#include "Rooms.h"

/*
Global regular expressions
*/
regex look("^look\\s+\\w+");
regex take("^take\\s+\\w+");
regex use("^use\\s+\\w+");
regex comb("^combine\\s+[\\w+,?\\s*]+");



Game::Game()
{
}


Game::~Game()
{
}


void Game::start() {
	Item bottle("bottle", "It is a bottle that holds things", {"water"}, true, 1);
	Item bars("energy bar", "Delicious mix of honey and oats", {}, true, 10);

	Inventory backpack;
	backpack.insert(bottle);
	backpack.insert(bars);

	Inventory oasis;
	Item oasis_water("water", "Sparkling water in the oasis", { "bottle" }, true, 1);
	Item cloth("cloth", "Fine cloth encasing a corpse", {}, true, 1);
	oasis.insert(oasis_water);
	oasis.insert(cloth);

	Room oasis_room; 

	oasis_room.set_inventory(oasis);


	Player player;

	


	//Room first; 
	//first.init();


	string input = "";
	cout << intro << intro2 << intro3 << endl;
	do {
		getline(cin, input);

		action(input);

		cout << input << endl;



	} while (input != "exit");
}

void Game::action(string line) {
	if (regex_match(line, look)) {
		cout << "YAY"<<endl;
	}
	else if (regex_match(line, take)) {

	}
	else if (regex_match(line, use)) {

	}
	else if (regex_match(line, comb)) {

	}
	else {

	}

}

void Game::lose() {};

void Game::win() {};


void startTime(function<void(void)>* func, unsigned int interval)
{
	thread([func, interval]() {
		this_thread::sleep_for(chrono::seconds(interval));
		func;
	}).detach();
}

long Game::duration() {
	return 10 - ((clock() - timer) / CLOCKS_PER_SEC);
	//cout << timer << endl;
	//cout << timer.time_since_epoch().count() << endl;

	//duration_cast<microseconds>(Clock::now() - timer).count();

}

void Game::stop() {

}

void Game::reset() {
	start();
}