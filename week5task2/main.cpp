#include "Bacteria.h"
#include "Bacillus.h"
#include "Coccus.h"
#include "Spirillum.h"
#include "Dish.h"
#include <iostream>

int main() {

	Dish dish;
	dish.displayDish();
	std::cout << "\n\n";
	dish.elapsedTime();
	dish.displayDish();
	return 0;
}