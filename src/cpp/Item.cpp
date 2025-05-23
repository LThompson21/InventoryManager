#include <string>
#include <cmath>
#include "Item.h"

Item::Item( const std::string& name, const std::string& description, double price )
	: name( name ), description( description ), price( price ), quantity( 1 )
{
}

Item::Item( const std::string& name, const std::string& description, double price, size_t quantity )
	: name( name ), description( description ), price( price ), quantity( quantity )
{
	this->clampQuantity();
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

int Item::setQuantity( size_t quantity )
{
	this->quantity = quantity;
	return this->clampQuantity();
}

int Item::adjustQuantity( int amount )
{
	if ( amount < 0 )
	{
		const size_t subtractAmount = static_cast< size_t >( -amount );
		if ( subtractAmount > this->quantity )
		{
			this->quantity = 0;
			return -( subtractAmount - this->quantity );
		}
		else
		{
			this->quantity -= subtractAmount;
			return 0;
		}
	}
	else
	{
		this->quantity += amount;
		return this->clampQuantity();
	}
}

size_t Item::getMaxStackQuantity() const
{
	return 100;
}

int Item::clampQuantity()
{
	if ( this->quantity > this->getMaxStackQuantity() )
	{
		const int overFlow = this->quantity - this->getMaxStackQuantity();
		this->quantity = this->getMaxStackQuantity();
		return overFlow;
	}
	else return 0;
}