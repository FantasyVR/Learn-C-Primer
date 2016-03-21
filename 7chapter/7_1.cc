#include <iostream>
using namespace std;
struct Sales_data{
	std::string bookNo;
	double price;
	unsigned units_sold=0;
	double revenue = 0.0;
};
int main()
{
	struct Sales_data total;
	if(std::cin>> total.bookNo>>total.price >> total.units_sold )
	{
		Sales_data trans;
		total.revenue = total.price * total.units_sold;
		while(std::cin>> trans.bookNo>> trans.price >> trans.units_sold)
		{
			trans.revenue = trans.price * trans.units_sold;
			if(total.bookNo == trans.bookNo)
			{
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}
			else{
				std::cout<<"Book No: "<< total.bookNo << " Units_sold: "<< total.units_sold
				<<" revenue: "<<total.revenue <<std::endl;
				total = trans;
			}
		}
		std::cout<<"Book No: "<< total.bookNo << " Units_sold: "<< total.units_sold
				<<" revenue: "<<total.revenue <<std::endl;
	}
	else
	{
		std::cerr<< "No data !"<<std::endl;
		return -1;
	}
	return 0;
}
