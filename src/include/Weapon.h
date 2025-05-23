#pragma once

#include "Item.h"

class Weapon : public Item
{
public:
	double getDamage() const;

	virtual size_t getMaxStackQuantity() const;

	void setDamage(double damage);

	virtual ~Weapon() = default;

protected:
	Weapon( const std::string& name, const std::string& description, double price, double damage );
	Weapon( const std::string& name, const std::string& description, double price, size_t quantity, double damage );

private:
	double damage;
};