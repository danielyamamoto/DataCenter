#include "Desktop.h"

Desktop::Desktop(string _GPU, int _ram) : PC(_GPU) {
	GPU = _GPU;
	ram = _ram;
}

Desktop::~Desktop() { }

string Desktop::toString() {
	string msg = "I'm a Desktop";
	msg += "\t\tRAM: " + to_string(ram) + "GB";
	msg += "\t\tGPU: " + GPU + "\n";
	return msg;
}

int Desktop::getRam() { return ram; }
