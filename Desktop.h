#pragma once
#include <iostream>
#include <string>
#include "PC.h"

using namespace std;

#ifndef DESKTOP
#define DESKTOP

class Desktop : public PC {
private:
	string GPU;
	int ram;

public:
	Desktop(string _GPU, int _ram);
	~Desktop();

	string toString();
	int getRam();
};

#endif // !DESKTOP