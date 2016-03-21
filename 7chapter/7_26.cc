#include <iostream>
#include <string>
using namespace std;

class Sale_data{
public:

friend std::istream& read(std::istream &,Sale_data&);
friend std::ostream& print(std::ostream &os, Sale_data &item);
friend Sale_data add(const Sale_data r1, const Sale_data r2);
	Sale_data() = default;
	Sale_data(const std::string &s):bookNo(s){}
	Sale_data(const std::string &s,unsigned n,double p):bookNo(s),units_sold(n),revenue(n*p){}
	Sale_data(std::istream &is)
	{ read(is,*this);}

	std::string const& isbn() const{ return bookNo;}
	Sale_data& combine(const Sale_data&);
private:
	inline double avg_price() const
	{ return units_sold>0?revenue/units_sold:0;}
	
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
