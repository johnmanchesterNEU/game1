#include "Time.h"



Time::Time()
{
	//clock.now();
}


Time::~Time()
{
}




void Time::start() {
	timer = clock();
	//timer = Clock::now();
}



void start(function<void(void)>* func, unsigned int interval)
{
	std::thread([func, interval]() {
		this_thread::sleep_for(chrono::seconds(interval));
		func;
	}).detach();
}

long Time::duration() {
	return 10 - ((clock() - timer) / CLOCKS_PER_SEC);
	//cout << timer << endl;
	//cout << timer.time_since_epoch().count() << endl;

	//duration_cast<microseconds>(Clock::now() - timer).count();

}

void Time::stop() {

}

void Time::reset() {
	start();
}

void Time::print() {

}