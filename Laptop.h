#pragma once
#include <iostream>
#include <string>
#include "PC.h"

using namespace std;

#ifndef LAPTOP
#define LAPTOP

class Laptop : public PC {
private:
	string mobileGPU;
	int ram;

public:
	Laptop(string _GPU, int _ram);
	~Laptop();
	
	string toString();
	int getRam();
};

#endif // !LAPTOP