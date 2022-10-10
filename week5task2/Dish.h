#include "Dish.h"
#include "Bacillus.h"
#include "Coccus.h"
#include "Spirillum.h"
#include <cstdlib>
#include <iostream>

//na 2500 komórek: 2000 wolne, 500 zajete bakteriami po równo 
// 1:5 -> 80% wolne, 20% zajęte -> P wylosowania konkretnej bakterii = 1/15
//Coccus  = 1/15, Bacillus = 1/15, Spirillum - 1/15, reszta: 12/15
//

Dish::Dish()
{
	/*container.reserve(50);
	for (int i = 0; i < 50; i++) {
		container[i].reserve(50);
	}*/

	container = std::vector<std::vector<std::shared_ptr<Bacteria>>>(50,
		std::vector<std::shared_ptr<Bacteria>>(50));

	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			int value = rand() % 15;
			if (value < 12) {
				container[i][j] = nullptr;
			}
			else if (value == 12) {
				container[i][j] = std::make_shared <Bacillus>();
			}
			else if (value == 13) {
				container[i][j] = std::make_shared <Coccus>();
			}
			else {
				container[i][j] = std::make_shared <Spirillum>();
			}
		}
	}

}

void Dish::displayDish()
{
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			if (container[i][j] == nullptr) {
				std::cout << "-";
			}
			else {
				std::cout << container[i][j]->sign;
			}
		}
		std::cout << std::endl;
	}
}

void Dish::elapsedTime()
{
	for (auto row : container) {
		for (auto item : row) {
			if (item == nullptr) {
				continue;
			}
			else {
				if (item->checkNearby() == false) {
					item->setLifeStatus(false);
				}
			}
		}
	}
	for (auto& row : container) {
		for (auto& item : row) {
			if (item == nullptr) {
				continue;
			}
			else {
				if (item->getLifeStatus() == false) {
					item = nullptr;
				}
			}
		}
	}
}

