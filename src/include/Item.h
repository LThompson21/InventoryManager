#pragma once

// external/std includes
#include <string>

// internal includes

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
	void adjustQuantity( int amount );

protected:
	Item( const std::string& name, const std::string& description, double price );
	Item( const std::string& name, const std::string& description, double price, size_t quantity );

	virtual ~Item() = default;

	void setQuantity( size_t quantity );

private:
	const std::string name;
	const std::string description;
	double price;
	size_t quantity;
};