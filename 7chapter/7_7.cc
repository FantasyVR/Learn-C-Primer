#include <iostream>
#include <string>
using namespace std;
struct Sale_data{
	std::string const& isbn() const{ return bookNo;}
	Sale_data& combine(const Sale_data&);
	double avg_price();
	
	std::string bookNo;
	unsigned  units_sold = 0;
	double revenue;
};

Sale_data& Sale_data::combine(const Sale_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;

	return *this;
}

Sale_data add(const Sale_data r1, const Sale_data r2)
{
	Sale_data sum;
	sum = r1;
	sum.combine(r2);
//	sum.units_sold = r1.units_sold + r2.units_sold;
//	sum.revenue = r1.revenue + r2.revenue;

	return sum;
}

std::istream& read(std::istream &is, Sale_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return is;
}

std::ostream& print(std::ostream &os, Sale_data &item)
{
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue << " "<< item.avg_price();

	return os;
}

double Sale_data::avg_price()
{
	if(units_sold)
		return revenue/units_sold;
	else 
		return 0.00;
}

int main()
{
	Sale_data total;
	if(read(cin,total))
	{
		Sale_data trans;
		while(read(cin,trans))
		{
			if(total.isbn() == trans.isbn())
			{
				total.combine(trans);	
			}
			else{
				print(cout,total);	
				total = trans;
			}
		}
		print(cout,total);	
		cout<<endl;
	}
	else
	{
		cerr<< " Wrong input !" <<endl;
		return -1;
	}
	return 0;
}
