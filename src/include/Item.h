#pragma once

#include <string>

class Item
{
public:
	virtual std::string asString() const = 0;

	std::string getName() const;
	std::string getDescription() const;
	double getPrice() const;
	size_t getQuantity() const;

	virtual size_t getMaxStackQuantity() const;

	void setPrice( double price );
	int adjustQuantity( int amount );

	virtual ~Item() = default;

protected:
	Item( const std::string& name, const std::string& description, double price );
	Item( const std::string& name, const std::string& description, double price, size_t quantity );

	int setQuantity( size_t quantity );
	int clampQuantity();

private:
	const std::string name;
	const std::string description;
	double price;
	size_t quantity;
};