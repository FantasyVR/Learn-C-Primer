#include <iostream>
#include <string>
using namespace std;
class Sale_data{
	friend std::istream& read(std::istream &is, Sale_data &item);
	friend std::ostream& print(std::ostream &os, Sale_data &item);
public:
	std::string const& isbn() const{ return bookNo;}
	unsigned getUnits(){return units_sold;}
	double getRevenue(){ return revenue;}
	Sale_data& combine(const Sale_data&);
private:
	double avg_price();
	
	std::string bookNo;
	unsigned  units_sold = 0;
	double revenue;
};

Sale_data& Sale_data::combine(const Sale_data& rhs)
{
	//units_sold += rhs.getUnits();
	units_sold += rhs.units_sold;

	//revenue += rhs.getRevenue();
	revenue += rhs.revenue;

	return *this;
}

double Sale_data::avg_price()
{
	if(units_sold)
		return revenue/units_sold;
	else 
		return 0.00;
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
		<< item.revenue << " "<< item.avg_price()<<endl;

	return os;
}

