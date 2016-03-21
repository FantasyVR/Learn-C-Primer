#include <iostream>
#include <string>
using namespace std;

struct Sales_data{
	std::string bookNo;
	unsigned units_sold;
	double revenue;

	Sales_data& combine(const Sales_data& rhs);
	std::string isbn() const { return bookNo;}
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;

	return *this;
}


int main()
{
	Sales_data total;
	if(cin >> total.bookNo >> total.units_sold >> total.revenue)
	{
		Sales_data trans;
		while(cin>> trans.bookNo >> trans.units_sold >> trans.revenue)
		{
			if(total.isbn() == trans.isbn())
			{
				total.combine(trans);	
			}
			else{
			
				cout<<"ISBN: "<< total.isbn() << " units_sold: "<< total.units_sold
					<<" Revenue: "<<total.revenue<<endl;
				total = trans;
			}
		}
		cout<<"ISBN: "<< total.isbn() << " units_sold: "<< total.units_sold
			<<" Revenue: "<<total.revenue<<endl;
	}
	else
	{
		cerr<< " Wrong input !" <<endl;
		return -1;
	}
	return 0;
}
