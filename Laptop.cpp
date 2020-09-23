#include "Laptop.h"

Laptop::Laptop(string _GPU, int _ram) : PC(_GPU) {
	mobileGPU = _GPU;
	ram = _ram;
}

Laptop::~Laptop() { }

string Laptop::toString() {
	string msg = "I'm a Laptop!";
	msg += "\t\tRAM: " + to_string(ram) + "GB";
	msg += "\t\tMOBILE GPU: " + mobileGPU + "\n";
	return msg;
}

int Laptop::getRam() { return ram; }