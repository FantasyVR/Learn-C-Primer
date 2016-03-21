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
	double avg_price() const
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

	//Sale_data item1;
	//print(std::cout, item1)<<endl;

	//Sale_data item2("978-7-302-31599-5");
	//print(std::cout, item2)<<endl;

	//Sale_data item3("978-5-324-23456-6",4,45.00);
	//print(std::cout, item3)<<endl;

	//Sale_data item4(std::cin);
	//print(std::cout, item4)<<endl;

	//return 0;
}
