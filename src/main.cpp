#include <iostream>
#include <string>

#include "Item.h"
#include "Weapon.h"
#include "RangedWeapon.h"

int main() {
	std::cout << "Hello InventoryManager. This is a test message" << std::endl;

	Item* w = new RangedWeapon(std::string("Item"), std::string("Haha New Item Test"), 14, 12, 5);

	std::cout << w->asString() << std::endl;

	delete w;

	return 0;
}