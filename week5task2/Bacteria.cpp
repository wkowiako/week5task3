#include "Bacteria.h"


void Bacteria::setLifeStatus(bool life) {
	isAlive = life;
}

bool Bacteria::getLifeStatus() {
	return isAlive;
}