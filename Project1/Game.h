#pragma once
#include <iostream>
#include <string>
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
#include "Player.h"
#include "Rooms.h"
using namespace std;


class Game
{
public:
	Game();
	~Game();

	void start();

	void lose();

	void win();

	void action(string);

	void startTime();

	void startTime(function<void(void)> func, unsigned int interval);

	void stop();

	void reset(); //resets the clock

	//void print();

	long duration(); //Gives the remaining time in the clock

	



private:
	clock_t timer;
	double timeDay = 60; //number of time in day (in seconds)
	double days = 10.0; // the number of days to start 

	string intro = "Touring the city of the dead in Valley of the Kings. A sandstorm blows in.\n";
	string intro2 = "Walking for hours, sand retching your throat, the storm suddenly clears.\n";
	string intro3 = "You find yourself in an oasis. Stumbling towards water you collapse and drop you backpack.\n";



};

