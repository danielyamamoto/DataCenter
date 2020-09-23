#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Laptop.h"
#include "Desktop.h"

using namespace std;

#ifndef DATACENTER
#define DATACENTER

class DataCenter {
private:
	vector<PC*>myPCs;

public:
	DataCenter(int laptops, int desktops);
	~DataCenter();

	int computeTotalRam();
	string toString();
};

#endif // !DATACENTER