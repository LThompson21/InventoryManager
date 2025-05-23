#include <string>
#include "Weapon.h"

Weapon::Weapon( const std::string& name, const std::string& description, double price, double damage )
	: Item( name, description, price ), damage( damage )
{
}

Weapon::Weapon( const std::string& name, const std::string& description, double price, size_t quantity, double damage )
	: Item( name, description, price, quantity ), damage( damage )
{
}

double Weapon::getDamage() const
{
	return this->damage;
}

void Weapon::setDamage(double damage)
{
	this->damage = damage;
}

size_t Weapon::getMaxStackQuantity() const
{
	return 1;
}