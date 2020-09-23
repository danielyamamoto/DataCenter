#include "DataCenter.h"

DataCenter::DataCenter(int laptops, int desktops) {
	for (int i = 0; i < laptops; i++) {
		myPCs.push_back(new Laptop("GTX2080M", 16));
	}

	for (int j = 0; j < desktops; j++) {
		myPCs.push_back(new Desktop("RTX2080", 32));
	}
}

DataCenter::~DataCenter() { }

int DataCenter::computeTotalRam() {
	int ram = 0;
	for (int i = 0; i < myPCs.size(); i++) {
		ram += myPCs[i]->getRam();
	}
	return ram;
}

string DataCenter::toString() {
	string msg = "";
	msg += "I'm a DataCenter\n";
	for (int i = 0; i < myPCs.size(); i++) {
		msg += myPCs[i]->toString();
	}
	return msg;
}
