// external/std includes
#include <string>
#include <cmath>

// internal includes
#include "Item.h"

Item::Item( const std::string& name, const std::string& description, double price )
	: name( name ), description( description ), price( price ), quantity( 0 )
{
}

Item::Item( const std::string& name, const std::string& description, double price, size_t quantity )
	: name( name ), description( description ), price( price ), quantity( quantity )
{
}

std::string Item::getName() const
{
	return this->name;
}

std::string Item::getDescription() const
{
	return this->description;
}

double Item::getPrice() const
{
	return this->price;
}

size_t Item::getQuantity() const
{
	return this->quantity;
}

void Item::setPrice( double price )
{
	this->price = price;
}

void Item::setQuantity( size_t quantity )
{
	this->quantity = quantity;
}

void Item::adjustQuantity( int amount )
{
	if ( amount < 0 )
	{
		const size_t subtractAmount = static_cast< size_t >( -amount );
		if ( subtractAmount > this->quantity )
		{
			this->quantity = 0;
		}
		else
		{
			this->quantity -= subtractAmount;
		}
	}
	else
	{
		this->quantity += amount;
	}
}

size_t Item::getMaxStackQuantity() const
{
	return 100;
}