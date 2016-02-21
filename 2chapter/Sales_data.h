#ifndef SALES_ITEM_H
#define SALES_ITEM_H
#include <iostream>
struct Sales_data{
	std::string bookNo;
	unsigned units_sold = 0;
	double price = 0.0;
	double revenue = 0.0;
};
#endif
