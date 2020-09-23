#pragma once
#include <iostream>
#include <string>

using namespace std;


class PC {
private:
	int ram;

public:
	PC(string _GPU);
	~PC();

	virtual string toString() = 0;
	virtual int getRam();
	void setRam(int _ram);
	int operator +(PC& pc);
};