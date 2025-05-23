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

double RangedWeapon::getRange() const
{
	return this->range;
}

void RangedWeapon::setRange( double range )
{
	this->range = range;
}