
#pragma once

#include "Performance.h"

std::chrono::system_clock::time_point performance::t = std::chrono::system_clock::now();

double performance::now()
{
	std::chrono::duration<double> time = std::chrono::system_clock::now().time_since_epoch();
	return time.count();
}

void performance::begin()
{
	t = std::chrono::system_clock::now();
}

double performance::end()
{
	std::chrono::duration<double> time = std::chrono::system_clock::now() - t;
	//t = std::chrono::system_clock::now();
	return time.count();
}