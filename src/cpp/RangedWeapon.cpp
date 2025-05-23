#include <string>
#include "RangedWeapon.h"

RangedWeapon::RangedWeapon( std::string& name, std::string& description, double price, double damage, double range )
	: Weapon( name, description, price, damage ), range(range)
{
}

RangedWeapon::RangedWeapon( std::string& name, std::string& description, double price, size_t quantity, double damage, double range )
	: Weapon( name, description, price, damage ), range( range )
{
}

std::string RangedWeapon::asString() const
{
	return "RangedWeapon[ "
		"name: " + this->getName() +
		", description: " + this->getDescription() +
		", price: " + std::to_string( this->getPrice() ) +
		", quantity: " + std::to_string( this->getQuantity() ) +
		", damage: " + std::to_string( this->getDamage() ) +
		", range: " + std::to_string( this->range ) +
		" ]";
}

double RangedWeapon::getRange() const
{
	return this->range;
}

void RangedWeapon::setRange( double range )
{
	this->range = range;
}