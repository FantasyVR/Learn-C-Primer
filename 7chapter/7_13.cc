#include <iostream>
#include <string>
using namespace std;
struct Sale_data;
std::istream& read(std::istream &,Sale_data&);

struct Sale_data{
	Sale_data() = default;
	Sale_data(const std::string &s):bookNo(s){}
	Sale_data(const std::string &s,unsigned n,double p):bookNo(s),units_sold(n),revenue(n*p){}
	Sale_data(std::istream &is)
	{ read(is,*this);}

	std::string const& isbn() const{ return bookNo;}
	Sale_data& combine(const Sale_data&);
	double avg_price() const;
	
	std::string bookNo;
	unsigned  units_sold = 0;
	double revenue = 0.0;
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

double Sale_data::avg_price() const
{
	if(units_sold)
		return revenue/units_sold;
	else 
		return 0.00;
}

int main()
{
	Sale_data total(std::cin);
	if(!total.isbn().empty())
	{
		std::istream &is = std::cin;
		while(is)
		{
			Sale_data trans(is);
			if(total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				print(std::cout,total);
				cout<<endl;
				total = trans;
			}
		}
		print(std::cout,total);
		cout<<endl;
	}
	else
	{
		std::cerr<<"Wrong input"<<endl;
		return -1;
	}
	return 0;
}
