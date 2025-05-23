#pragma once

// external/std includes


// internal includes
#include "Item.h"

class Weapon : public Item
{
public:
	double getDamage() const;

	size_t getMaxStackQuantity() const;

	void setDamage(double damage);

protected:
	Weapon( const std::string& name, const std::string& description, double price, double damage );
	Weapon( const std::string& name, const std::string& description, double price, size_t quantity, double damage );

private:
	double damage;
};