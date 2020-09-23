#include "PC.h"

PC::PC(string _GPU) { }

PC::~PC() { }

int PC::getRam() { return ram; }

void PC::setRam(int _ram) { ram = _ram; }

int PC::operator+(PC& pc) { return this->ram + pc.getRam(); }
