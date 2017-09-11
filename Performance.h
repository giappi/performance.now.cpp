
#pragma once

#include <chrono>

// provides functions to calculate performance, like javascript
class performance
{

private:
    // store value of time point to calculate period
	static std::chrono::system_clock::time_point t;

public:

	// get high resolution timestamp in seconds, accurate to five thousandths of a millisecond
	static double now();
	
	// start measure
	static void begin();
	
	// stop measure and get period from begin() to end()
	static double end();

};
