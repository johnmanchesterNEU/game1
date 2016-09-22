#pragma once
#include <chrono>
#include <ctime>
#include <thread>
#include <functional>
#include <iostream>
using namespace std;
class Time
{
public:

	//typedef chrono::high_resolution_clock Clock;


	Time();
	~Time();


	void start();

	void start(function<void(void)> func, unsigned int interval);
	
	void stop();

	void reset(); //resets the clock

	void print(); 

	long duration(); //Gives the remaining time in the clock

private:
	clock_t timer;
	double timeDay = 60; //number of time in day (in seconds)
	double days = 10.0; // the number of days to start 
};

