#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item total;
	if(std::cin >> total)
	{
		Sales_item trans;
		while(std::cin >> trans)
		{
			if(total.isbn() == trans.isbn())
				total += trans;
			else
				std::cout << "The ISBN must match"<<std::endl;
		}
		std::cout << total << std::endl;
	}
	return 0;
}
