#pragma once

#include <string>
#include "Weapon.h"

class RangedWeapon : public Weapon
{
public:
	RangedWeapon( std::string& name, std::string& description, double price, double damage, double range );
	RangedWeapon( std::string& name, std::string& description, double price, size_t quantity, double damage, double range );

	double getRange() const;

	void setRange( double range );
protected:

private:
	double range;
};