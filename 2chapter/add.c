#include <iostream>
#include "Sales_data.h"

int main()
{
	Sales_data data1, data2;
	std::cin >> data1.bookNo >> data1.units_sold >> data1.price;
	data1.revenue = data1.units_sold * data1.price;
	std::cin >> data2.bookNo >> data2.units_sold >> data2.price;
	data2.revenue = data2.units_sold * data2.price;
	if(data1.bookNo == data2.bookNo)
	{
		unsigned totalCnt =  data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		std::cout << data1.bookNo << " " << totalCnt 
				<<" " << totalRevenue << " ";
		if(totalCnt != 0)
			std::cout << totalRevenue/totalCnt << std::endl;
		else
			std::cout << "No sales " << std::endl;
	}
	else
	{
		std::cerr<< "The Book Number must math!" << std::endl;
		return -1;
	}
	return 0;
}
