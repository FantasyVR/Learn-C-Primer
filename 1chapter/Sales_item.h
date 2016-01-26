#ifndef SALESITEM_H
#define SALESITEM_H

#include <iostream>
#include <string>

class Sales_item{
	friend std::istream& operator>>(std::istream&, Sales_item&);
	friend std::ostream& operator<<(std::ostream&, const Sales_item&);
	friend bool operator<(const Sales_item&, const Sales_item&);
	friend bool operator==(const Sales_item&, const Sales_item&);
	public:

}
